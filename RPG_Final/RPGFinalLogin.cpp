#include "pch.h"
#include "RPG_Final.h"
#include "RPGFinalLogin.h"
#include "afxdialogex.h"
#include <iostream>
#include <fstream>


// RPGFinalLogin 对话框

IMPLEMENT_DYNAMIC(RPGFinalLogin, CDialogEx)

RPGFinalLogin::RPGFinalLogin(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, m_user(_T(""))
	, m_password(_T(""))
{

}

RPGFinalLogin::~RPGFinalLogin()
{
}

void RPGFinalLogin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_user);
	DDX_Text(pDX, IDC_EDIT2, m_password);
}


BEGIN_MESSAGE_MAP(RPGFinalLogin, CDialogEx)
	ON_BN_CLICKED(IDOK, &RPGFinalLogin::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &RPGFinalLogin::OnBnClickedButton1)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON2, &RPGFinalLogin::OnBnClickedButton2)
	ON_WM_CLOSE()
	ON_WM_TIMER()
END_MESSAGE_MAP()


// RPGFinalLogin 消息处理程序


void RPGFinalLogin::OnBnClickedOk()
{
	OnBnClickedButton2();
}

void RPGFinalLogin::OnBnClickedButton1()
{
	writeRegister();
	// TODO: 在此添加控件通知处理程序代码
}

BOOL RPGFinalLogin::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CEdit* pmyEdit = (CEdit*)GetDlgItem(IDC_EDIT2); // 密码编辑框控件的指针
	pmyEdit->SetPasswordChar('*'); // 显示格式为星号

	MoveWindow(585, 265, 750, 470, FALSE);


	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

void RPGFinalLogin::writeRegister() {
	UpdateData(TRUE);
	char szResult[40] = "\0";

	std::string m_user_string(CW2A(m_user.GetString()));
	std::string m_password_string(CW2A(m_password.GetString()));

	if (IfUserExist()) {
		MessageBox(_T("此用户已存在！请尝试别的名字。"));
		return;
	}
	if (m_password_string == "") {
		MessageBox(_T("密码为空！"));
		return;
	}
	else if (m_user_string == "") {
		MessageBox(_T("用户名为空！"));
		return;
	}
	std::ofstream file1;
	file1.open("D://info.txt", std::ios::app);
	file1 << m_user_string << " " << m_password_string << std::endl;
	file1.close();
	MessageBox(_T("注册成功！"));

	//创建初始物品表
	std::ofstream file2;
	std::string m_filename = "D://";
	m_filename += m_user_string;
	m_filename += "_bag.txt";
	file2.open(m_filename, std::ios::out);
	file2 << 1 << " 30 1\n";
	for (int i = 2;i <= 36;i++) {          //第1是镐子
		file2 << i << " 0 0\n";//(背包)第n格 物品id 有n个
	}
	file2 << 0 << "\n"<< 1<<"\n" << 0 << "\n" << 0;
	//金币 是否第一次对话 任务1 任务2 
	file2.close();

	std::ofstream file3;
	std::string m_filename2 = "D://";
	m_filename2 += m_user_string;
	m_filename2 += "_warehouse.txt";
	file3.open(m_filename2, std::ios::out);
	for (int i = 1;i <= 36;i++) {
		file3 << i << " 0 0\n";
	}
	file3.close();
}

void RPGFinalLogin::ReadRegister() {
	UpdateData(TRUE);
	char szResult[40] = "\0";

	std::string m_user_string(CW2A(m_user.GetString()));
	std::string m_password_string(CW2A(m_password.GetString()));

	std::ifstream file1;
	file1.open("D://info.txt", std::ios::in);
	std::string m_user_string_reading = "0";
	std::string m_password_string_reading = "0";
	while (file1.peek() != EOF) {
		file1 >> m_user_string_reading >> m_password_string_reading;
		if (m_user_string_reading == m_user_string) {
			if (m_password_string_reading == m_password_string) {
				MessageBox(_T("登陆成功！"));
				file1.close();

				GetParent()->SetDlgItemText(IDC_EDIT1,m_user);
				this->ShowWindow(SW_HIDE);

				return;
			}
			else {
				MessageBox(_T("密码错误！"));
				file1.close();
				return;
			}
		}
	}
	MessageBox(_T("无效用户！"));
	file1.close();
}

boolean RPGFinalLogin::IfUserExist() {
	std::string m_user_string(CW2A(m_user.GetString()));
	std::ifstream file1;
	file1.open("D://info.txt", std::ios::in);
	std::string m_user_string_reading = "0";
	std::string m_password_string_reading = "0";
	while (file1.peek() != EOF) {
		file1 >> m_user_string_reading >> m_password_string_reading;
		if (m_user_string_reading == m_user_string) {
			return true;
		}
	}
	return false;
}

void RPGFinalLogin::OnPaint()
{


	CPaintDC dc(this);
	CRect rect;
	GetClientRect(&rect);          //获取对话框长宽
	CDC dcBmp;                     //定义并创建一个内存设备环境
	dcBmp.CreateCompatibleDC(&dc); //创建兼容性DC
	CImage bmpBackground;
	bmpBackground.Load(TEXT("res//start_bg_new.bmp"));              //载入资源中的IDB_BITMAP1图片                                   //图片变量               //将图片载入位图中

	bmpBackground.Draw(dc, 0, 0, 775, 426, 0, 0, 775, 426);

	dc.SetBkMode(TRANSPARENT);//设置为透明
	std::string str1 = "用户名";
	std::string str2 = "密码";
	CString Cstr1;
	CString Cstr2;
	Cstr1 = str1.c_str();
	Cstr2 = str2.c_str();

	CFont font;
	font.CreatePointFont(200, TEXT("方正喵呜体"));
	dc.SelectObject(&font);
	dc.TextOutW(198, 122, Cstr1);
	dc.TextOutW(210, 178, Cstr2);


}


void RPGFinalLogin::OnBnClickedButton2()
{
	ReadRegister();
	// TODO: 在此添加控件通知处理程序代码
}


void RPGFinalLogin::OnClose()
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	exit(0);
	CDialogEx::OnClose();
}


void RPGFinalLogin::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CDialogEx::OnTimer(nIDEvent);
}
