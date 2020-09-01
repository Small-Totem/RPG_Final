#pragma once


// RPGFinalLogin 对话框

class RPGFinalLogin : public CDialogEx
{
	DECLARE_DYNAMIC(RPGFinalLogin)

public:
	RPGFinalLogin(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~RPGFinalLogin();

	void writeRegister(); //将注册信息写入操作
	void ReadRegister(); //从文件中读取用户名密码的操作
	boolean IfUserExist();//读取用户是否存在

	CStatic m_text_login_1;
	CStatic m_text_login_2;
	CStatic m_text_1;
	CStatic m_text_2;
	CImage bg_new;


// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton1();
	CString m_user;
	CString m_password;
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnClose();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
