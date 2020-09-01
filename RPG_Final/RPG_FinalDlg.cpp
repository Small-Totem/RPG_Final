#include "pch.h"
#include "framework.h"
#include "RPG_Final.h"
#include "RPG_FinalDlg.h"
#include "afxdialogex.h"
#include "string"
#include <iostream>
#include <fstream>
#include "stdlib.h"
#include <time.h>  
#include "RPGFinalLogin.h"

#include <mmsystem.h> //这两个是为了调用sndPlaySound()
#pragma comment(lib, "WINMM.LIB") 

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()

// CRPGFinalDlg 对话框

CRPGFinalDlg::CRPGFinalDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_RPG_FINAL_DIALOG, pParent)
	, m_user(_T(" "))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	//计算规则：(x->n)n[f(x)],f(x)=(x+20)/20
//eg:x = -20   n[0]
//	x = 0      n[1]
//	x = 20     n[2]
//(n->x)  x=(n-1)*20

////////////////////////////////
//bg_1
	if (true) {
		n1[0][21] = 1;
		n1[1][21] = 1;
		n1[2][21] = 1;
		n1[3][21] = 1;
		n1[3][20] = 1;
		n1[3][19] = 1;
		n1[4][19] = 1;
		n1[5][19] = 1;
		n1[6][19] = 1;
		n1[7][19] = 1;
		n1[8][19] = 1;
		n1[9][19] = 1;
		n1[10][19] = 1;
		n1[11][19] = 1;
		n1[12][19] = 1;

		n1[12][18] = 1;
		n1[12][17] = 1;
		n1[12][16] = 1;
		n1[12][15] = 1;
		n1[12][14] = 1;
		n1[12][13] = 1;
		n1[12][12] = 1;

		n1[11][12] = 1;
		n1[10][12] = 1;
		n1[9][12] = 1;
		n1[8][12] = 1;
		n1[7][12] = 1;
		n1[6][12] = 1;
		n1[6][11] = 1;
		n1[6][10] = 1;
		n1[6][9] = 1;
		n1[6][8] = 1;
		for (int i = 6;i <= 25;i++) { n1[i][7] = 1; }
		n1[25][8] = 1;
		n1[25][9] = 1;
		n1[25][10] = 1;
		n1[25][11] = 1;
		n1[26][11] = 1;
		n1[27][11] = 1;
		n1[28][11] = 1;
		n1[29][11] = 1;
		n1[30][11] = 1;
		n1[31][11] = 1;
		n1[31][10] = 1;
		n1[31][9] = 1;
		n1[31][8] = 1;
		n1[31][7] = 1;
		n1[31][6] = 1;
		n1[31][5] = 1;
		n1[32][5] = 1;
		n1[33][5] = 1;
		n1[34][5] = 1;
		n1[34][4] = 1;
		n1[34][3] = 1;
		n1[34][2] = 1;
		n1[34][1] = 1;
		n1[34][0] = 1;
		//n[35][5] = 1;
		//n[36][5] = 1;
		//n[37][5] = 1;
		n1[38][0] = 1;
		n1[38][1] = 1;
		n1[38][2] = 1;
		n1[38][3] = 1;
		n1[38][4] = 1;
		n1[38][5] = 1;
		n1[38][6] = 1;
		n1[38][7] = 1;
		n1[38][8] = 1;
		n1[37][8] = 1;
		n1[36][8] = 1;
		n1[35][8] = 1;
		n1[34][8] = 1;
		n1[34][9] = 1;
		n1[34][10] = 1;
		n1[34][11] = 1;
		n1[34][12] = 1;
		n1[34][13] = 1;
		n1[34][14] = 1;
		n1[35][14] = 1;
		n1[35][15] = 1;
		n1[35][16] = 1;
		n1[35][17] = 1;
		n1[36][17] = 1;
		n1[37][17] = 1;
		n1[38][17] = 1;
		n1[38][18] = 1;
		n1[38][19] = 1;
		n1[38][20] = 1;
		n1[38][21] = 1;
		n1[39][21] = 1;
		n1[40][21] = 1;
		for (int i = 0;i <= 20;i++) { n1[40][i] = 1; }
		for (int i = 0;i <= 20;i++) { n1[43][i] = 1; }
		n1[43][21] = 1;
		n1[44][21] = 1;
		n1[45][21] = 1;
		n1[46][21] = 1;
		n1[47][21] = 1;
		n1[47][20] = 1;
		n1[47][19] = 1;

		n1[47][18] = 1;
		n1[48][18] = 1;
		n1[49][18] = 1;
		n1[50][18] = 1;
		n1[51][18] = 1;
		n1[52][18] = 1;
		n1[53][18] = 1;
		n1[53][19] = 1;
		n1[53][20] = 1;
		n1[53][21] = 1;
		for (int i = 53;i <= 65;i++) { n1[i][21] = 1; }
		n1[65][20] = 1;
		n1[65][19] = 1;
		n1[65][18] = 1;
		n1[66][18] = 1;
		n1[67][18] = 1;

		n1[0][27] = 1;
		n1[1][27] = 1;
		n1[2][27] = 1;
		n1[3][27] = 1;
		n1[4][27] = 1;
		n1[5][27] = 1;
		n1[6][27] = 1;
		n1[6][28] = 1;
		n1[6][29] = 1;
		n1[6][30] = 1;
		n1[6][31] = 1;

		n1[45][31] = 1;
		n1[46][31] = 1;
		n1[47][31] = 1;
		n1[48][31] = 1;
		n1[49][31] = 1;
		n1[50][31] = 1;
		n1[51][31] = 1;
		n1[46][30] = 1;
		n1[47][30] = 1;
		n1[48][30] = 1;
		n1[49][30] = 1;
		n1[50][30] = 1;

		n1[59][31] = 1;
		n1[59][30] = 1;
		n1[59][29] = 1;
		n1[60][29] = 1;
		n1[61][29] = 1;
		n1[62][29] = 1;
		n1[62][28] = 1;
		n1[62][27] = 1;
		n1[63][27] = 1;
		n1[64][27] = 1;
		n1[65][27] = 1;
		n1[66][27] = 1;
		n1[67][27] = 1;
	}

	//////////////////////////
	//bg_2
	if (true) {
		n2[18][34] = 1;
		n2[18][35] = 1;
		n2[15][34] = 1;
		n2[15][35] = 1;
		for (int i = 8;i <= 15;i++) { n2[i][33] = 1; }
		n2[8][32] = 1;
		n2[8][31] = 1;
		n2[7][31] = 1;
		n2[6][31] = 1;
		for (int i = 24;i <= 31;i++) { n2[5][i] = 1; }
		n2[6][24] = 1;
		n2[7][24] = 1;
		n2[8][24] = 1;
		n2[8][23] = 1;
		n2[8][22] = 1;
		for (int i = 8;i <= 15;i++) { n2[i][21] = 1; }
		for (int i = 13;i <= 21;i++) { n2[15][i] = 1; }
		n2[14][13] = 1;
		n2[13][13] = 1;
		n2[12][13] = 1;
		n2[11][13] = 1;
		n2[11][12] = 1;
		n2[10][12] = 1;
		n2[9][12] = 1;
		n2[8][12] = 1;
		n2[8][11] = 1;
		n2[8][10] = 1;
		n2[8][9] = 1;
		n2[8][8] = 1;
		n2[9][8] = 1;
		n2[10][8] = 1;
		n2[11][8] = 1;
		n2[12][8] = 1;
		n2[12][7] = 1;
		n2[12][6] = 1;
		n2[13][6] = 1;
		n2[14][6] = 1;


		for (int i = 18;i <= 32;i++) { n2[i][33] = 1; }
		n2[32][33] = 1;
		n2[32][32] = 1;
		n2[32][31] = 1;
		n2[31][31] = 1;
		n2[30][31] = 1;
		for (int i = 24;i <= 31;i++) { n2[29][i] = 1; }
		for (int i = 30;i <= 40;i++) { n2[i][24] = 1; }
		n2[40][25] = 1;
		n2[40][26] = 1;
		n2[41][26] = 1;
		n2[42][26] = 1;
		for (int i = 21;i <= 26;i++) { n2[43][i] = 1; }
		n2[44][21] = 1;
		n2[45][21] = 1;
		n2[46][21] = 1;
		n2[47][21] = 1;
		n2[47][20] = 1;
		n2[47][19] = 1;
		for (int i = 39;i <= 47;i++) { n2[i][18] = 1; }
		n2[39][17] = 1;
		n2[39][16] = 1;
		n2[39][15] = 1;
		n2[39][14] = 1;
		n2[40][14] = 1;
		n2[41][14] = 1;
		n2[42][14] = 1;
		n2[43][14] = 1;
		n2[44][14] = 1;
		n2[44][13] = 1;
		n2[43][12] = 1;
		n2[42][11] = 1;
		n2[41][11] = 1;
		n2[40][11] = 1;
		n2[39][11] = 1;
		n2[39][12] = 1;
		n2[38][12] = 1;
		n2[37][12] = 1;
		n2[36][12] = 1;
		n2[36][13] = 1;
		n2[36][14] = 1;
		for (int i = 29;i <= 36;i++) { n2[i][15] = 1; }
		n2[29][14] = 1;
		n2[29][13] = 1;
		n2[29][12] = 1;
		n2[29][12] = 1;
		n2[28][12] = 1;
		n2[27][12] = 1;
		n2[26][12] = 1;
		n2[25][11] = 1;
		n2[25][10] = 1;
		n2[25][9] = 1;
		n2[25][8] = 1;
		n2[25][7] = 1;
		for (int i = 15;i <= 25;i++) { n2[i][8] = 1; }
		n2[15][7] = 1;

	}

	///////////////////////////////////////
	//bg_3
	if (true) {
		n3[74][34] = 1;
		n3[74][35] = 1;
		for (int i = 74;i <= 80;i++) { n3[i][33] = 1; }
		n3[78][25] = 1;
		n3[79][25] = 1;
		for (int i = 18;i <= 25;i++) { n3[77][i] = 1; }
		for (int i = 63;i <= 79;i++) { n3[i][18] = 1; }
		for (int i = 5;i <= 17;i++) { n3[63][i] = 1; }
		n3[62][5] = 1;
		for (int i = 0;i <= 5;i++) { n3[61][i] = 1; }
		for (int i = 0;i <= 5;i++) { n3[48][i] = 1; }
		n3[47][5] = 1;
		n3[46][5] = 1;
		n3[45][5] = 1;
		for (int i = 5;i <= 22;i++) { n3[45][i] = 1; }
		n3[46][22] = 1;
		n3[47][22] = 1;
		n3[48][22] = 1;
		for (int i = 22;i <= 27;i++) { n3[49][i] = 1; }
		for (int i = 39;i <= 49;i++) { n3[i][28] = 1; }
		for (int i = 22;i <= 27;i++) { n3[39][i] = 1; }
		for (int i = 22;i <= 27;i++) { n3[30][i] = 1; }
		for (int i = 30;i <= 39;i++) { n3[i][22] = 1; }
		for (int i = 17;i <= 30;i++) { n3[i][28] = 1; }
		for (int i = 5;i <= 28;i++) { n3[17][i] = 1; }
		for (int i = 0;i <= 17;i++) { n3[i][5] = 1; }

		for (int i = 55;i <= 61;i++) { n3[i][22] = 1; }
		for (int i = 55;i <= 61;i++) { n3[i][16] = 1; }

		for (int i = 16;i <= 22;i++) { n3[55][i] = 1; }
		for (int i = 16;i <= 22;i++) { n3[61][i] = 1; }
	}

	///////////////////////////////////////
	//bg_4
	if (true) {
		n4[26][33] = 1;
		n4[29][33] = 1;
		for (int i = 0;i <= 26;i++) { n4[i][32] = 1; }
		for (int i = 29;i <= 62;i++) { n4[i][32] = 1; }
		n4[35][31] = 1;
		n4[35][30] = 1;
		n4[35][29] = 1;
		n4[36][28] = 1;
		n4[37][28] = 1;
		n4[38][28] = 1;
		n4[39][28] = 1;
		n4[40][29] = 1;
		n4[41][29] = 1;
		n4[41][30] = 1;
		n4[41][31] = 1;

		n4[19][30] = 1;
		n4[18][30] = 1;
		n4[17][30] = 1;
		n4[16][30] = 1;
		n4[15][30] = 1;
		n4[14][29] = 1;
		n4[14][28] = 1;
		n4[14][27] = 1;
		n4[14][26] = 1;
		n4[15][25] = 1;
		n4[16][25] = 1;
		n4[17][25] = 1;
		n4[18][25] = 1;
		n4[19][26] = 1;
		n4[20][26] = 1;
		n4[20][27] = 1;
		n4[20][28] = 1;
		n4[20][29] = 1;

		for (int i = 0;i <= 62;i++) { n4[i][12] = 1; }
		for (int i = 8;i <= 44;i++) { n4[i][21] = 1; }
		for (int i = 13;i <= 20;i++) { n4[8][i] = 1; }
		for (int i = 13;i <= 20;i++) { n4[44][i] = 1; }
		for (int i = 13;i <= 15;i++) { n4[49][i] = 1; }
		for (int i = 13;i <= 15;i++) { n4[56][i] = 1; }
		for (int i = 13;i <= 15;i++) { n4[59][i] = 1; }
		for (int i = 50;i <= 55;i++) { n4[i][15] = 1; }
		for (int i = 59;i <= 62;i++) { n4[i][15] = 1; }
	}

	//////////////////////
	//bg_5
	if (true) {
		for (int i = 0;i <= 37;i++) { n5[57][i] = 1; }

		n5[56][37] = 1;
		n5[55][37] = 1;
		n5[54][37] = 1;
		n5[56][32] = 1;
		n5[55][32] = 1;
		n5[54][32] = 1;
		n5[54][31] = 1;
		n5[54][30] = 1;
		n5[53][29] = 1;
		n5[52][29] = 1;
		n5[51][29] = 1;
		n5[50][29] = 1;
		n5[50][29] = 1;
		n5[50][28] = 1;
		n5[50][27] = 1;
		n5[50][26] = 1;
		n5[50][25] = 1;
		n5[50][24] = 1;
		n5[50][23] = 1;
		n5[51][23] = 1;
		n5[52][23] = 1;
		n5[53][23] = 1;
		for (int i = 17;i <= 23;i++) { n5[54][i] = 1; }
		n5[55][17] = 1;
		n5[56][17] = 1;

		for (int i = 50;i <= 54;i++) { n5[i][1] = 1; }
		n5[50][2] = 1;
		n5[54][2] = 1;
		for (int i = 50;i <= 56;i++) { n5[i][3] = 1; }
		n5[54][4] = 1;
		n5[54][5] = 1;
		n5[54][6] = 1;
		n5[54][7] = 1;
		n5[53][7] = 1;
		n5[52][7] = 1;
		n5[51][7] = 1;
		for (int i = 8;i <= 13;i++) { n5[50][i] = 1; }
		for (int i = 51;i <= 56;i++) { n5[i][13] = 1; }
		n5[50][23] = 0;
		n5[55][3] = 0;
		n5[56][3] = 0;
		n5[55][4] = 1;
		n5[56][4] = 1;
	}

	/////////////
	srand((unsigned)time(NULL));

	m_item_price[1] = 2;
	m_item_price[2] = 18;
	m_item_price[3] = 162;
	m_item_price[4] = 4;
	m_item_price[5] = 36;
	m_item_price[6] = 324;
	m_item_price[7] = 120;
	m_item_price[8] = 1080;
	m_item_price[9] = 150;
	m_item_price[10] = 1350;
	m_item_price[11] = 12;
	m_item_price[12] = 96;
	m_item_price[13] = 20;
	m_item_price[14] = 180;
	m_item_price[15] = 5;
	m_item_price[16] = 45;
	m_item_price[17] = 8;
	m_item_price[18] = 32;
	m_item_price[19] = 25;
	m_item_price[20] = 100;
	m_item_price[21] = 40;
	m_item_price[22] = 360;
	m_item_price[23] = 3240;
	m_item_price[24] = 2020;
	m_item_price[25] = 2333;
}

void CRPGFinalDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_user);
}

BEGIN_MESSAGE_MAP(CRPGFinalDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CRPGFinalDlg::OnBnClickedButton1)
	ON_WM_CLOSE()
	ON_WM_TIMER()
//	ON_WM_NCPAINT()
END_MESSAGE_MAP()


// CRPGFinalDlg 消息处理程序

BOOL CRPGFinalDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标



	/////////////////////////////////////////////////////

	RPGFinalLogin* rpg = new RPGFinalLogin;
	rpg->Create(IDD_DIALOG1, this);
	rpg->ShowWindow(SW_SHOW);


	m_bg[0].Load(TEXT("res//bg1.bmp"));
	m_bg[1].Load(TEXT("res//bg2.png"));
	m_bg[2].Load(TEXT("res//bg3.png"));
	m_bg[3].Load(TEXT("res//bg4.png"));
	m_bg[4].Load(TEXT("res//bg5.png"));

	m_png[0].Load(TEXT("res//l1.png"));//左
	m_png[1].Load(TEXT("res//l2.png"));
	m_png[2].Load(TEXT("res//l3.png"));
	m_png[3].Load(TEXT("res//r1.png"));//右
	m_png[4].Load(TEXT("res//r2.png"));
	m_png[5].Load(TEXT("res//r3.png"));
	m_png[6].Load(TEXT("res//f1.png"));//前(下)
	m_png[7].Load(TEXT("res//f2.png"));
	m_png[8].Load(TEXT("res//f3.png"));
	m_png[9].Load(TEXT("res//b1.png"));//后(上)
	m_png[10].Load(TEXT("res//b2.png"));
	m_png[11].Load(TEXT("res//b3.png"));
	m_png[12].Load(TEXT("res//m1.png"));//挖矿
	m_png[13].Load(TEXT("res//m2.png"));
	m_png[14].Load(TEXT("res//m3.png"));

	bg_x[0] = 1390;
	bg_x[1] = 1000;
	bg_x[2] = 1660;
	bg_x[3] = 1300;
	bg_x[4] = 1440;
	bg_y[0] = 735;
	bg_y[1] = 860;
	bg_y[2] = 820;
	bg_y[3] = 820;
	bg_y[4] = 880;

	coin_img.Load(TEXT("res//coin.png"));

	//初始化为null
	for (int i = 1; i <= 36;i++) {
		m_equip[i] = NULL;
		m_thing[i] = NULL;
		m_shop_thing[i] = NULL;
		m_shop_thing_num[i] = 0;
		m_shop_thing_id[i] = 0;

	}
	for (int i = 1; i <= 2;i++) {
		m_forge_thing[i] = NULL;
		m_forge_thing_num[i] = 0;
		m_forge_thing_id[i] = 0;
	}
	for (int i = 0;i < 15;i++) {
		TransparentPNG(&m_png[i]);
	}

	m_bag = new CImage();
	m_warehouse = new CImage();
	m_dialog = new CImage();
	m_display = new CImage();
	m_arrow = new CImage();
	m_bag->Load(_T("res//bag1.png"));
	m_warehouse->Load(_T("res//bag2.png"));
	m_dialog->Load(_T("res//dialog.png"));
	m_display->Load(_T("res//display_item.png"));
	m_arrow->Load(_T("res//arrow.png"));
	TransparentPNG(m_arrow);
	TransparentPNG(m_bag);
	TransparentPNG(m_warehouse);
	TransparentPNG(m_dialog);
	TransparentPNG(m_display);

	//载入所有item图片
	for (int i = 1; i <= 30; i++)
	{
		std::string temp = "item//";
		std::string temp2;
		temp2 = std::to_string(i);
		temp += temp2;
		temp += ".png";
		CString Cstr_temp;
		Cstr_temp = temp.c_str();
		m_item[i] = new CImage();
		m_item[i]->Load(Cstr_temp);
		TransparentPNG(m_item[i]);
	}

	x_bagPos = (1390 / 2) - (m_bag->GetWidth() / 2);
	y_bagPos = 0;
	x_warePos = 0;
	y_warePos = 0;
	ShowBag = false;
	ShowWarehouse = false;
	ShowShop = false;


	x_offset = 0;
	y_offset = 0;

	//PlaySound(MAKEINTRESOURCE(IDR_WAVE1), AfxGetResourceHandle(), SND_ASYNC | SND_RESOURCE | SND_NODEFAULT);//单次播放
	//int nCmdShow = SW_SHOW;
	//GetParent()->ShowWindow(nCmdShow);


	SetTimer(2, 100, NULL);//判定是否登录了


	MoveWindow(1920, 1080, 100, 100, FALSE);
	//妥协：未完美实现隐藏主程序dlg（会一闪而过），移至屏幕边缘。

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CRPGFinalDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

void CRPGFinalDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else {
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CRPGFinalDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CRPGFinalDlg::OnBnClickedButton1()
{
	showinfo = showinfo ? false : true;
}

void CRPGFinalDlg::OnOK()
{
	if (ShowDialog || ShowForgeDialog)text_num++;
	//CDialogEx::OnOK();
}

void CRPGFinalDlg::OnClose()
{
	std::ofstream file1;
	std::ofstream file2;
	std::string temp_bag = "D://";
	std::string temp_warehouse = "D://";
	std::string user_temp(CW2A(m_user.GetString()));
	temp_bag += user_temp;
	temp_warehouse += user_temp;
	temp_bag += "_bag.txt";
	temp_warehouse += "_warehouse.txt";
	file1.open(temp_bag, std::ios::out);
	file2.open(temp_warehouse, std::ios::out);

	for (int i = 1;i <= 36;i++) {
		file1 << i << " " << m_equip_id[i] << " " << m_equip_num[i] << "\n";
		file2 << i << " " << m_thing_id[i] << " " << m_thing_num[i] << "\n";
	}
	file1 << coin << "\n";
	iffirstdialog ? file1 << 1 << "\n" : file1 << 0 << "\n";
	if_mission_1_success ? file1 << 1 << "\n" : file1 << 0 << "\n";
	if_mission_2_success ? file1 << 1 << "\n" : file1 << 0 << "\n";
	file1.close();
	file2.close();
	CDialogEx::OnClose();
}

void CRPGFinalDlg::OnTimer(UINT_PTR nIDEvent)
{
	if (nIDEvent == 1) {
		CDC* pDC = GetDC();
		CRect rc;
		CDC dc;
		GetClientRect(&rc);
		CBitmap bmp; //内存中承载临时图象的位图
		CFont font, font2;

		dc.CreateCompatibleDC(pDC); //依附窗口DC创建兼容内存DC
		//创建兼容位图(必须用pDC创建，否则画出的图形变成黑色)
		bmp.CreateCompatibleBitmap(pDC, rc.Width(), rc.Height());
		CBitmap* pOldBit = dc.SelectObject(&bmp);
		//按原来背景填充客户区，不然会是黑色
		dc.FillSolidRect(rc, RGB(255, 255, 255));

		font.CreatePointFont(142, TEXT("方正喵呜体"));
		font2.CreatePointFont(184, TEXT("方正喵呜体"));
		dc.SelectObject(&font);

		//画背景
		switch (bg) {
		case 1:
			SetWindowPos(NULL, 0, 0, bg_x[0], bg_y[0], SWP_NOMOVE);
			m_bg[0].Draw(dc, 0, 0, bg_x[0], bg_y[0]);
			x_bagPos = (bg_x[0] / 2) - (m_bag->GetWidth() / 2);
			y_warePos = bg_y[0] - 317;
			in_bg1 = true;
			break;
		case 2:
			SetWindowPos(NULL, 0, 0, bg_x[1], bg_y[1], SWP_NOMOVE);
			m_bg[1].Draw(dc, 0, 0, bg_x[1], bg_y[1]);
			x_bagPos = (bg_x[1] / 2) - (m_bag->GetWidth() / 2);
			y_warePos = bg_y[1] - 317;
			break;
		case 3:
			SetWindowPos(NULL, 0, 0, bg_x[2], bg_y[2], SWP_NOMOVE);
			m_bg[2].Draw(dc, 0, 0, bg_x[2], bg_y[2]);
			x_bagPos = (bg_x[2] / 2) - (m_bag->GetWidth() / 2);
			y_warePos = bg_y[2] - 317;
			break;
		case 4:
			SetWindowPos(NULL, 0, 0, bg_x[3], bg_y[3], SWP_NOMOVE);
			m_bg[3].Draw(dc, 0, 0, bg_x[3], bg_y[3]);
			x_bagPos = (bg_x[3] / 2) - (m_bag->GetWidth() / 2);
			y_warePos = bg_y[3] - 317;
			if (in_bg1 == true) {
				refersh_shop = true;
				in_bg1 = false;
			}
			break;
		case 5:
			SetWindowPos(NULL, 0, 0, bg_x[4], bg_y[4], SWP_NOMOVE);
			m_bg[4].Draw(dc, 0, 0, bg_x[4], bg_y[4]);
			x_bagPos = (bg_x[4] / 2) - (m_bag->GetWidth() / 2);
			y_warePos = bg_y[4] - 317;

			break;
		default:
			break;
		}

		//判断刷新商店
		if (refersh_shop) {
			Generate_Shop();
			refersh_shop = false;
		}

		//保存临时坐标防止穿模
		int temp_x = x;
		int temp_y = y;

		//画动态人物
		if (keep) switch (direction) {
			//向左走
		case 'l':
			switch (position)
			{
			case 0:
				m_png[0].Draw(dc, x, y, 70, 130);
				position = 1;
				break;

			case 1:
				m_png[1].Draw(dc, x, y, 70, 130);
				position = 2;
				break;

			case 2:
				m_png[0].Draw(dc, x, y, 70, 130);
				position = 3;
				break;

			case 3:
				m_png[2].Draw(dc, x, y, 70, 130);
				position = 0;
				break;
			}
			x -= 20;
			break;

			//向右走
		case 'r':
			switch (position) {
			case 0:
				m_png[3].Draw(dc, x, y, 70, 130);
				position = 1;
				break;

			case 1:
				m_png[4].Draw(dc, x, y, 70, 130);
				position = 2;
				break;

			case 2:
				m_png[3].Draw(dc, x, y, 70, 130);
				position = 3;
				break;

			case 3:
				m_png[5].Draw(dc, x, y, 70, 130);
				position = 0;
				break;
			}
			x += 20;
			break;

			//向上走
		case 'b':
			switch (position) {
			case 0:
				m_png[9].Draw(dc, x, y, 70, 130);
				position = 1;
				break;

			case 1:
				m_png[10].Draw(dc, x, y, 70, 130);
				position = 2;
				break;

			case 2:
				m_png[9].Draw(dc, x, y, 70, 130);
				position = 3;
				break;

			case 3:
				m_png[11].Draw(dc, x, y, 70, 130);
				position = 0;
				break;
			}
			y -= 20;
			break;

			//向下走
		case 'f':
			switch (position) {
			case 0:
				m_png[6].Draw(dc, x, y, 70, 130);
				position = 1;
				break;

			case 1:
				m_png[7].Draw(dc, x, y, 70, 130);
				position = 2;
				break;

			case 2:
				m_png[6].Draw(dc, x, y, 70, 130);
				position = 3;
				break;

			case 3:
				m_png[8].Draw(dc, x, y, 70, 130);
				position = 0;
				break;
			}
			y += 20;
			break;
		default:break;
		}
			//position = 0;

		//画出静止的人物
		if (!keep) {
			switch (direction) {
			case 'l':
				m_png[0].Draw(dc, x, y, 70, 130);
				break;
			case 'r':
				m_png[3].Draw(dc, x, y, 70, 130);
				break;
			case 'b':
				m_png[9].Draw(dc, x, y, 70, 130);
				break;
			case 'f':
				m_png[6].Draw(dc, x, y, 70, 130);
				break;
			case 'm':
				switch (position_m)
				{
				case 0:
				case 1:
				case 2:
					m_png[12].Draw(dc, x - 54, y - 50, 180, 195);
					position_m++;
					break;
				case 3:
				case 4:
				case 5:
					m_png[13].Draw(dc, x - 20, y - 45, 180, 195);
					position_m++;
					break;
				case 6:
				case 7:
				case 8:
					m_png[14].Draw(dc, x - 16, y - 42, 180, 195);
					position_m = 0;
					direction = 'r';
					mining_num++;
					break;
				default:
					break;
				}
			}
		}

		//读取背包和仓库数据
		for (int i = 1;i <= 36;i++) {
			if (m_equip_id[i] != 0) { m_equip[i] = m_item[m_equip_id[i]]; }
			if (m_thing_id[i] != 0) { m_thing[i] = m_item[m_thing_id[i]]; }
		}

		//画背包界面
		if (ShowBag)
		{
			CRect rect;
			GetClientRect(&rect);
			//背包整个界面
			int x_temp = 840;

			m_bag->Draw(dc, x_bagPos + 128, 0, x_temp, x_temp / 3.574, 0, 0, 1133, 317);//(dc,画图起始x,画图起始y,画图终止x,画图终止y,截取起始x.....)
			//画coin
			coin_img.Draw(dc, x_bagPos + (m_bag->GetWidth() / 2) - 40, 2, 21, 24, 0, 0, 14, 16);
			dc.SetBkMode(TRANSPARENT);
			std::string str_coin = std::to_string(coin);
			CString Cstr_coin;
			Cstr_coin = str_coin.c_str();
			dc.SelectObject(&font2);
			dc.TextOutW(x_bagPos + (m_bag->GetWidth() / 2) - 10, 0, Cstr_coin);
			dc.SelectObject(&font);

			//画选中框
			if (touch_equip != -1)
				m_bag->Draw(dc, x_bagPos + 228 + ((touch_equip - 1) % 12) * 59.5, y_bagPos + 32 + ((touch_equip - 1) / 12) * 63.5, 44, 44, 301, 66, 38, 38);
			for (int i = 1; i <= 36; i++)
			{
				if (m_equip[i] == NULL)continue;
				//画每个装备的图标
				if (i == catch_equip)//遮挡关系，拖拽的图标放到循环外最后画,仓库后画
					continue;
				else {
					m_equip[i]->Draw(dc, x_bagPos + 231 + ((i - 1) % 12) * 59.5, y_bagPos + 34 + ((i - 1) / 12) * 63.5, 40, 40, 0, 0, 150, 150);
					if (m_equip_num[i] != 0 && m_equip_num[i] != 1) {//画数量
						std::string str0 = std::to_string(m_equip_num[i]);
						CString Cstr0;
						Cstr0 = str0.c_str();
						dc.SetBkMode(TRANSPARENT);
						dc.TextOutW(x_bagPos + 231 + ((i - 1) % 12) * 59.5 + 30, y_bagPos + 34 + ((i - 1) / 12) * 63.5 + 26, Cstr0);					}
					if (ShowShop) {
						if (i == 1)continue;
						std::string str0 = std::to_string(m_item_price[m_equip_id[i]] * m_equip_num[i]);
						CString Cstr0;
						Cstr0 = str0.c_str();
						dc.SetBkMode(TRANSPARENT);
						dc.SetTextColor(RGB(0, 0, 255));
						dc.TextOutW(x_bagPos + 231 + ((i - 1) % 12) * 59.5 + 6, y_bagPos + ((i - 1) / 12) * 63.5 + 23, Cstr0);
						dc.SetTextColor(RGB(0, 0, 0));
					}
				}
			}
		}

		//画仓库
		if (ShowWarehouse)
		{
			//仓库整个界面
			int x_temp = 840;
			m_warehouse->Draw(dc, x_bagPos + 128, y_warePos, x_temp, x_temp / 3.574 + 40, 0, 0, 1138, 357);
			//画选中框
			if (touch_thing != -1){
				m_bag->Draw(dc, x_bagPos + 232 + ((touch_thing - 1) % 12) * 59.2, y_warePos + 58 + ((touch_thing - 1) / 12) * 65, 44, 44, 301, 66, 38, 38);
			}
			for (int i = 1; i <= 36; i++)
			{
				if (m_thing[i] == NULL)
					continue;
				//画每个装备的图标
				if (i == catch_thing)//遮挡关系，拖拽的图标放到循环外最后画
					continue;
				else {
					m_thing[i]->Draw(dc, x_bagPos + 233 + ((i - 1) % 12) * 59.2, y_warePos + 58 + ((i - 1) / 12) * 65, 40, 40, 0, 0, 150, 150);
					if (m_thing_num[i] != 0 && m_thing_num[i] != 1) {
						std::string str0 = std::to_string(m_thing_num[i]);
						CString Cstr0;
						Cstr0 = str0.c_str();
						dc.SetBkMode(TRANSPARENT);
						dc.TextOutW(x_bagPos + 231 + ((i - 1) % 12) * 59.2 + 30, y_warePos + 58 + ((i - 1) / 12) * 65 + 26, Cstr0);
					}
				}
			}
		}

		//判断打开对话框和交易框等
		if (true) {
			if (bg == 3 && y == 440 && (x > 1090 && x < 1190) && direction == 'b') {
				ShowWarehouse = true;
			}
			else if (!(bg == 3 && y == 440 && (x > 1090 && x < 1190) && direction == 'b') && ShowWarehouse == true) {
				ShowWarehouse = false;
			}

			//交易框
			if (bg == 4 && y == 420 && (x > 490 && x < 550) && direction == 'b') {
				ShowShop = true;
				ShowBag = true;
				ShowWarehouse = false;
				int x_temp = 840;
				m_warehouse->Draw(dc, x_bagPos + 128, y_warePos, x_temp, x_temp / 3.574 + 40, 0, 0, 1138, 357);
				//画选中框
				if (shop_touch_thing != -1)
				{
					m_bag->Draw(dc, x_bagPos + 232 + ((shop_touch_thing - 1) % 12) * 59.2, y_warePos + 58 + ((shop_touch_thing - 1) / 12) * 65, 44, 44, 301, 66, 38, 38);
				}
				for (int i = 1; i <= 36; i++)
				{
					if (m_shop_thing[i] == NULL)
						continue;
					//画每个装备的图标
					if (i == shop_catch_thing)//遮挡关系，拖拽的图标放到循环外最后画
						continue;
					else {
						m_shop_thing[i]->Draw(dc, x_bagPos + 233 + ((i - 1) % 12) * 59.2, y_warePos + 58 + ((i - 1) / 12) * 65, 40, 40, 0, 0, 150, 150);
						if (m_shop_thing_num[i] != 0 && m_shop_thing_num[i] != 1) {
							std::string str0 = std::to_string(m_shop_thing_num[i]);
							CString Cstr0;
							Cstr0 = str0.c_str();
							dc.SetBkMode(TRANSPARENT);
							dc.TextOutW(x_bagPos + 231 + ((i - 1) % 12) * 59.2 + 30, y_warePos + 58 + ((i - 1) / 12) * 65 + 26, Cstr0);		
						}
						if (m_shop_thing_num[i] != 0) {
							std::string str0 = std::to_string(m_shop_thing_num[i] * m_item_price[m_shop_thing_id[i]]);
							CString Cstr0;
							Cstr0 = str0.c_str();
							dc.SetBkMode(TRANSPARENT);
							if (coin >= (m_shop_thing_num[i] * m_item_price[m_shop_thing_id[i]])) {
								dc.SetTextColor(RGB(0, 150, 0));
							}
							else { dc.SetTextColor(RGB(255, 0, 0)); }//y_bagPos  + ((i - 1) / 12) * 63.5 + 23
							dc.TextOutW(x_bagPos + 231 + ((i - 1) % 12) * 59.2 + 10, y_warePos + 60 + ((i - 1) / 12) * 65 - 16, Cstr0);
							dc.SetTextColor(RGB(0, 0, 0));
						}
					}
				}
			}
			else {
				ShowShop = false;
			}

			//text_num
			//用于测试
			std::string str666 = std::to_string(text_num);
			testcstring = str666.c_str();


			//锻造框前置对话框
			if (bg == 2 && y == 420 && (x > 150 && x < 210) && direction == 'b' && forge_switch == 0) {
				if (text_num != 1 && text_num != 0) {
					text_num = 1;
				}
				ShowDialog = true;
				ShowForgeDialog = true;
				m_dialog->Draw(dc, x_bagPos + 128, y_warePos, 840, 235 + 36, 0, 0, 1058, 356);
				dc.SelectObject(&font2);
				dc.SetBkMode(TRANSPARENT);

				if (text_num == 1) {
					CString a;
					a = TEXT("村里最好的铁匠\n只要钱给够，我能给你整出村里最好的镐子！\n<1>锻造矿物 <2>升级镐子\n");
					MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
				}
				else if (text_num == 2) {
					text_num = 1;
					direction = 'f';
				}
				dc.SelectObject(&font);
			}
			else(ShowForgeDialog = false);
			//锻造框
			if (bg == 2 && y == 420 && (x > 150 && x < 210) && direction == 'b' && forge_switch == 1) {
				ShowBag = true;
				ShowForge = true;
				//场景是1000x860
				m_arrow->Draw(dc, 500 - 38, 430 - 52, 76, 105, 0, 0, 76, 105);
				m_display->Draw(dc, 500 - 60 - 100, 430 - 60, 120, 120, 0, 0, 163, 163);
				m_display->Draw(dc, 500 - 60 + 100, 430 - 60, 120, 120, 0, 0, 163, 163);
				if (forge_touch_thing != -1)
				{
					if (forge_touch_thing == 1)m_bag->Draw(dc, 500 - 60 - 100 + 37, 430 - 60 + 40, 44, 44, 301, 66, 38, 38);//左选中框（完成）
					if (forge_touch_thing == 2)m_bag->Draw(dc, 500 - 60 + 100 + 37, 430 - 60 + 40, 44, 44, 301, 66, 38, 38);//右
				}

				for (int i = 1; i <= 2; i++)
				{
					if (m_forge_thing[i] == NULL)continue;
					//画每个装备的图标
					if (i == forge_catch_thing)//遮挡关系，拖拽的图标放到循环外最后画,仓库后画
						continue;
					else {
						if (i == 1) {
							m_forge_thing[i]->Draw(dc, 500 - 60 - 100 + 37, 430 - 60 + 40, 40, 40, 0, 0, 150, 150);
							if (m_forge_thing_num[i] != 0 && m_forge_thing_num[i] != 1) {//画数量
								std::string str0 = std::to_string(m_forge_thing_num[i]);
								CString Cstr0;
								Cstr0 = str0.c_str();
								dc.SetBkMode(TRANSPARENT);
								dc.TextOutW(500 - 60 - 100 + 37 + 30, 430 - 60 + 65, Cstr0);
							}
						}
						else if (i == 2) {
							m_forge_thing[i]->Draw(dc, 500 - 60 + 100 + 37, 430 - 60 + 40, 40, 40, 0, 0, 150, 150);
							if (m_forge_thing_num[i] != 1) {//画数量
								std::string str0 = std::to_string(m_forge_thing_num[i]);
								CString Cstr0;
								Cstr0 = str0.c_str();
								dc.SetBkMode(TRANSPARENT);
								dc.TextOutW(500 - 60 + 100 + 37 + 30, 430 - 60 + 65, Cstr0);
							}
						}
					}
				}
			}
			//升级
			else if (bg == 2 && y == 420 && (x > 150 && x < 210) && direction == 'b' && forge_switch == 2) {
				ShowDialog = true;
				ShowForgeDialog = true;

				m_dialog->Draw(dc, x_bagPos + 128, y_warePos, 840, 235 + 36, 0, 0, 1058, 356);
				dc.SelectObject(&font2);
				dc.SetBkMode(TRANSPARENT);
				int pickaxe_rank = -(m_equip_id[1] - 31);
				boolean can_update = false;
				if ((pickaxe_rank == 1 && coin > 200) || (pickaxe_rank == 2 && coin > 500) || (pickaxe_rank == 3 && coin > 1000) || (pickaxe_rank == 4 && coin > 2000)) {
					can_update = true;
				}
				std::string temp0 = std::to_string(pickaxe_rank);
				CString a;
				
				if (pickaxe_max == true&&pickaxe_rank == 5) {
					
					if (text_num == 1) {
						CString a;
						a = TEXT("村里最好的铁匠\n你的镐子已经是村里最好的了\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
					}
					else if (text_num == 2) {
						text_num = 1;
						direction = 'f';
						ShowForgeDialog = false;

					}
				}
				
				if (!pickaxe_max) {
					if (text_num == 1) {
						a = TEXT("村里最好的铁匠\n当前你的镐子等级为");
						CString temp1;
						temp1 = temp0.c_str();
						a += temp1;
						CString b;
						b = TEXT("\n给我");
						a += b;
						if (text_num == 1 && pickaxe_rank == 1) {
							a += TEXT("200");
						}
						else if (text_num == 1 && pickaxe_rank == 2) {
							a += TEXT("500");
						}
						else if (text_num == 1 && pickaxe_rank == 3) {
							a += TEXT("1000");
						}
						else if (text_num == 1 && pickaxe_rank == 4) {
							a += TEXT("2000");
						}
						CString c;
						c = TEXT("金币，我能升级你的镐子\n");
						a += c;
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
					}
					else if (text_num == 2) {
						a = TEXT("村里最好的铁匠\n确定升级吗?\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
					}
					else if (text_num == 3) {
						if (can_update) {
							if (pickaxe_rank == 4) {
								coin -= 2000;
								m_equip_id[1]--;
								m_equip[1] = m_item[26];
								//text_num = 99;
								update_state = 1;

							}
							else if (pickaxe_rank == 3) {
								coin -= 1000;
								m_equip_id[1]--;
								m_equip[1] = m_item[27];
								update_state = 2;
							}
							else if (pickaxe_rank == 2) {
								coin -= 500;
								m_equip_id[1]--;
								m_equip[1] = m_item[28];
								update_state = 3;
							}
							else if (pickaxe_rank == 1) {
								coin -= 200;
								m_equip_id[1]--;
								m_equip[1] = m_item[29];
								update_state = 4;
							}
						}
						text_num++;//为了跳出这里，防止反复升级
					}
					else if (text_num == 4) {
						if (update_state == 0) {
							a = TEXT("村里最好的铁匠\n钱都没有，给爷爬\n");
							MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						}
						else if (update_state == 1) {
							a = TEXT("村里最好的铁匠\n升级完成，你的镐子已经是村里最好的了\n");
							MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						}
						else {
							a = TEXT("村里最好的铁匠\n升级完成\n");
							MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						}
					}
					else if (text_num == 5) {
						text_num = 1;
						direction = 'f';
						ShowForgeDialog = false;
						if (update_state == 1)pickaxe_max = true;
						update_state = 0;
					}
					/*
					else if (text_num == 100) {//特殊：4->5的时候
						a = TEXT("村里最好的铁匠\n升级完成，你的镐子已经是村里最好的了\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
					}
					else if (text_num == 101) {
						text_num = 1;
						direction = 'f';
						ShowForgeDialog = false;
						update_state = 0;
					}
					*/
				}
				dc.SelectObject(&font);
				//ShowForgeDialog = false;
				//ShowDialog = false;
			}

			else if (!((bg == 2 && y == 420 && (x > 150 && x < 210) && direction == 'b' && forge_switch == 0))) {
				forge_switch = 0;
			}

			//神秘人对话框
			if (bg == 1 && y == 340 && (x > 670 && x < 730) && direction == 'b') {
				ShowDialog = true;
				ShowWarehouse = false;
				//int text_num=1;
				m_dialog->Draw(dc, x_bagPos + 128, y_warePos, 840, 235 + 36, 0, 0, 1058, 356);
				dc.SelectObject(&font2);
				dc.SetBkMode(TRANSPARENT);
				if (iffirstdialog) {
					CString a;
					switch (text_num) {
						//CString a = TEXT("神秘人\n你好啊骚年啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊\n");
						//此为能显示的最长长度
					case 1:
						a = TEXT("神秘人\n你好啊骚年\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						break;
					case 2:
						a = TEXT("神秘人\n在原本的世界里，你已经死了\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						break;
					case 3:
						a = TEXT("神秘人\n遵从前世的遗愿，现在你重生在这个小镇上\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						break;
					case 4:
						a = TEXT("你\n遗愿？\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						break;
					case 5:
						a = TEXT("神秘人\n没错，你的遗愿就是——成为究极有钱妻妾成群房产无数\n开奔驰坐宝马真·家里有矿之究极暴发户煤老板\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						break;
					case 6:
						a = TEXT("你\n......\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						break;
					case 7:
						a = TEXT("神秘人\n好了，要成为煤老板，首先要学会基本操作\n你可以用<WASD>和方向键进行移动，<E>打开背包\n左边是你家，你可以在箱子那里储存你的矿物\n右边是矿场，你可以对着大石头按<Q>挖矿\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						break;
					case 8:
						a = TEXT("神秘人\n后面的房子分别是铁匠铺和酒馆\n你可以去铁匠铺升级你的镐子，以及把矿粒锻造成矿锭，\n或者矿锭锻造成矿块\n酒馆老板是个良心商人(笑)，你可以和他交易\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						break;
					case 9:
						a = TEXT("神秘人\n开冲吧骚年，去创造属于你的财富(>ω･*)ﾉ\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						break;
					case 10:
						a = TEXT("你\n......\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						break;
					case 11:
						a = TEXT("你\n(哪有煤老板自己动手挖矿的？我不会是被卖到哪里去当打\n工仔了吧。。)\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						this->SetWindowText(TEXT("重生之我是究极打工仔"));
						break;
					case 12:
						a = TEXT("神秘人\n给你个任务吧，去升级你的镐子，之后来找我，我会给你\n一点小奖励\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						break;

					}
					if (text_num == 13) {
						iffirstdialog = false;
						text_num = 1;
						direction = 'f';
					}
				}
				else if (!if_mission_1_success && m_equip_id[1] != 30) {
					if (text_num == 1) {
						CString a;
						a = TEXT("神秘人\n这镐子还行，那就给你点小奖励\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
					}
					else if (text_num == 2) {
						CString a;
						a = TEXT("神秘人\n按照标准RPG游戏套路，我应该给你下一个任务了\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
					}
					else if (text_num == 3) {
						CString a;
						a = TEXT("你\n...\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
					}
					else if (text_num == 4) {
						CString a;
						a = TEXT("神秘人\n那就。。。集齐这游戏所有的方块吧，各种矿物块可以由\n矿物锭熔合而成哦\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
					}
					else if (text_num == 5) {
						text_num = 1;
						coin += 200;
						if_mission_1_success = true;
						direction = 'f';
					}

				}
				else if (if_mission_1_success&& !if_mission_2_success) {
					int temp0 = if_get_all_block();
					if (temp0 != 0) {
						if (text_num == 1) {
							CString a;
							a = TEXT("神秘人\n你还差");
							std::string str1 = std::to_string(temp0);
							CString b;
							b = str1.c_str();
							a += b;
							a += TEXT("种方块才集齐哦\n");
							MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						}
						else if (text_num == 2) {
							text_num = 1;
							direction = 'f';
						}
					}
					else {
						if (text_num == 1) {
							CString a;
							a = TEXT("神秘人\n不会吧不会吧不会吧\n不会真有人这么无聊把方块全集齐了吧\n");
							MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						}
						if (text_num == 2) {
							CString a;
							a = TEXT("神秘人\n这破游戏就这么多内容了，作者懒得再搞别的了\n溜了溜了\n");
							MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						}
						if (text_num == 3) {
							CString a;
							a = TEXT("神秘人\n感谢你能玩到这里！\n奖励你并没有什么卵用的99999金币！\n");
							MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						}
						if (text_num == 4) {
							CString a;
							a = TEXT("神秘人\n拜拜了您内\n");
							MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
						}
						else if (text_num == 5) {
							text_num = 1;
							coin += 99999;
							if_mission_2_success = true;
							direction = 'f';
						}
					}
				}
				else {
					if (text_num == 1) {
						CString a;
						a = TEXT("神秘人\n你好啊骚年\n");
						MultiLineTextOut(&dc, x_bagPos + 158, y_warePos + 34, a, 10);
					}
					else if (text_num == 2) {
						text_num = 1;
						direction = 'f';
					}
				}
				//ShowDialog = false;
			}
			else {
				ShowDialog = false;
			}
			dc.SelectObject(&font);
		}

		//刷新锻造
		if (ShowForge && m_forge_thing_id[1] != 0) {
			if (m_forge_thing_id[1] == 1 && m_forge_thing_num[1] >= 9) {
				m_forge_thing_id[2] = 2;
				m_forge_thing[2] = m_item[2];
				forge = true;
			}
			else if (m_forge_thing_id[1] == 2 && m_forge_thing_num[1] >= 9) {
				m_forge_thing_id[2] = 3;
				m_forge_thing[2] = m_item[3];
				forge = true;
			}
			else if (m_forge_thing_id[1] == 4 && m_forge_thing_num[1] >= 9) {
				m_forge_thing_id[2] = 5;
				m_forge_thing[2] = m_item[5];
				forge = true;
			}
			else if (m_forge_thing_id[1] == 5 && m_forge_thing_num[1] >= 9) {
				m_forge_thing_id[2] = 6;
				m_forge_thing[2] = m_item[6];
				forge = true;
			}
			else if (m_forge_thing_id[1] == 7 && m_forge_thing_num[1] >= 9) {
				m_forge_thing_id[2] = 8;
				m_forge_thing[2] = m_item[8];
				forge = true;
			}
			else if (m_forge_thing_id[1] == 9 && m_forge_thing_num[1] >= 9) {
				m_forge_thing_id[2] = 10;
				m_forge_thing[2] = m_item[10];
				forge = true;
			}
			else if (m_forge_thing_id[1] == 11 && m_forge_thing_num[1] >= 9) {
				m_forge_thing_id[2] = 12;
				m_forge_thing[2] = m_item[12];
				forge = true;
			}
			else if (m_forge_thing_id[1] == 13 && m_forge_thing_num[1] >= 9) {
				m_forge_thing_id[2] = 14;
				m_forge_thing[2] = m_item[14];
				forge = true;
			}
			else if (m_forge_thing_id[1] == 15 && m_forge_thing_num[1] >= 9) {
				m_forge_thing_id[2] = 16;
				m_forge_thing[2] = m_item[16];
				forge = true;
			}
			else if (m_forge_thing_id[1] == 17 && m_forge_thing_num[1] >= 4) {
				m_forge_thing_id[2] = 18;
				m_forge_thing[2] = m_item[18];
				forge = true;
			}
			else if (m_forge_thing_id[1] == 19 && m_forge_thing_num[1] >= 4) {
				m_forge_thing_id[2] = 20;
				m_forge_thing[2] = m_item[20];
				forge = true;
			}
			else if (m_forge_thing_id[1] == 21 && m_forge_thing_num[1] >= 9) {
				m_forge_thing_id[2] = 22;
				m_forge_thing[2] = m_item[22];
				forge = true;
			}//妥协
			else if (m_forge_thing_id[1] == 22 && m_forge_thing_num[1] >= 9) {
				m_forge_thing_id[2] = 23;
				m_forge_thing[2] = m_item[23];
				forge = true;
			}
		}
		else if (ShowForge && m_forge_thing_id[1] == 0 && m_forge_thing_num[2] == 0) {
			m_forge_thing_id[2] == 0;
			m_forge_thing[2] = NULL;
		}

		//画拖拽的装备图标（背包）
		if (catch_equip != -1)
			if (!m_equip[catch_equip] == NULL) {
				m_equip[catch_equip]->Draw(dc, x_bagPos + 231 + ((catch_equip - 1) % 12) * 59.5 + x_offset, y_bagPos + 34 + ((catch_equip - 1) / 12) * 64 + y_offset,
					40, 40, 0, 0, 150, 150);
				if (m_equip_num[catch_equip] != 0 && m_equip_num[catch_equip] != 1) {
					std::string str0 = std::to_string(m_equip_num[catch_equip]);
					CString Cstr0;
					Cstr0 = str0.c_str();
					dc.SetBkMode(TRANSPARENT);
					dc.TextOutW(x_bagPos + 231 + ((catch_equip - 1) % 12) * 59.5 + x_offset + 30, y_bagPos + 34 + ((catch_equip - 1) / 12) * 64 + y_offset + 26, Cstr0);
				}
			}
		//画拖拽的装备图标（仓库）
		if (catch_thing != -1)
			if (!m_thing[catch_thing] == NULL) {
				m_thing[catch_thing]->Draw(dc, x_bagPos + 231 + ((catch_thing - 1) % 12) * 59.5 + x_offset, y_warePos + 58 + ((catch_thing - 1) / 12) * 64 + y_offset,
					40, 40, 0, 0, 150, 150);//用相同的x_bagPos
				if (m_thing_num[catch_thing] != 0 && m_thing_num[catch_thing] != 1) {
					std::string str0 = std::to_string(m_thing_num[catch_thing]);
					CString Cstr0;
					Cstr0 = str0.c_str();
					dc.SetBkMode(TRANSPARENT);
					dc.TextOutW(x_bagPos + 231 + ((catch_thing - 1) % 12) * 59.5 + x_offset + 30, y_warePos + 58 + ((catch_thing - 1) / 12) * 64 + y_offset + 26, Cstr0);
				}
			}
		//画拖拽的装备图标（商店）
		if (shop_catch_thing != -1)
			if (!m_shop_thing[shop_catch_thing] == NULL) {
				m_shop_thing[shop_catch_thing]->Draw(dc, x_bagPos + 231 + ((shop_catch_thing - 1) % 12) * 59.5 + x_offset, y_warePos + 58 + ((shop_catch_thing - 1) / 12) * 64 + y_offset,
					40, 40, 0, 0, 150, 150);//用相同的x_bagPos
				if (m_shop_thing_num[shop_catch_thing] != 0 && m_shop_thing_num[shop_catch_thing] != 1) {
					std::string str0 = std::to_string(m_shop_thing_num[shop_catch_thing]);
					CString Cstr0;
					Cstr0 = str0.c_str();
					dc.SetBkMode(TRANSPARENT);
					dc.TextOutW(x_bagPos + 231 + ((shop_catch_thing - 1) % 12) * 59.5 + x_offset + 30, y_warePos + 58 + ((shop_catch_thing - 1) / 12) * 64 + y_offset + 26, Cstr0);
				}
			}
		//画拖拽的装备图标（锻造）
		if (forge_catch_thing != -1)
			if (!m_forge_thing[forge_catch_thing] == NULL) {
				if (forge_catch_thing == 1) {
					m_forge_thing[forge_catch_thing]->Draw(dc, 500 - 60 - 100 + 37 + x_offset, 430 - 60 + 40 + y_offset,
						40, 40, 0, 0, 150, 150);//用相同的x_bagPos
					if (m_forge_thing_num[forge_catch_thing] != 0 && m_forge_thing_num[forge_catch_thing] != 1) {
						std::string str0 = std::to_string(m_forge_thing_num[forge_catch_thing]);
						CString Cstr0;
						Cstr0 = str0.c_str();
						dc.SetBkMode(TRANSPARENT);
						dc.TextOutW(500 - 60 - 100 + 37 + 30 + x_offset, 430 - 60 + 63 + y_offset, Cstr0);
					}
				}

				else if (forge_catch_thing == 2) {
					m_forge_thing[forge_catch_thing]->Draw(dc, 500 - 60 + 100 + 37 + x_offset, 430 - 60 + 40 + y_offset,
						40, 40, 0, 0, 150, 150);//用相同的x_bagPos
					if (m_forge_thing_num[forge_catch_thing] != 0 && m_forge_thing_num[forge_catch_thing] != 1) {
						std::string str0 = std::to_string(m_forge_thing_num[forge_catch_thing]);
						CString Cstr0;
						Cstr0 = str0.c_str();
						dc.SetBkMode(TRANSPARENT);
						dc.TextOutW(500 - 60 + 100 + 37 + 30 + x_offset, 430 - 60 + 63 + y_offset, Cstr0);
						dc.TextOutW(500 - 60 + 100 + 37 + 30 + x_offset, 430 - 60 + 63 + y_offset, Cstr0);
					}
				}
			}

		//////////////////////////
		//场景跳转
		if (true) {
			if (bg == 1 && y == 140 && (x == 300 || x == 320 || x == 340)) {
				bg = 2;
				x = 300;
				y = 680;
			}
			if (bg == 2 && (x == 320 || x == 300) && y == 700) {
				bg = 1;
				x = 320;
				y = 160;
			}
			if (bg == 1 && x == -20) {
				bg = 3;
				x = 1560;
				y = 600;
			}
			if (bg == 3 && x == 1580) {
				bg = 1;
				x = 0;
				y = 480;
			}
			if (bg == 1 && y == 360 && (x == 940 || x == 960)) {
				bg = 4;
				x = 520;
				y = 640;
			}
			if (bg == 4 && (x == 520 || x == 540) && y == 660) {
				bg = 1;
				x = 940;
				y = 380;
			}
			if (bg == 1 && x == 1320 && (y == 420 || y == 440 || y == 460 || y == 480 || y == 500)) {
				bg = 5;
				x = 0;
				y = 500;
			}
			if (bg == 5 && x == -20) {
				bg = 1;
				x = 1300;
				y = 460;
			}
		}

		//判断是否该挖出矿
		if (bg == 5) {
			if (mining_num == (m_equip_id[1] - 25)) {
				paint_display_item = true;
				Place_Ore();
				mining_num = 0;
			}
		}

		//显示xy坐标
		if (showinfo) {
			dc.SetBkMode(OPAQUE);//设置为不透明
			std::string str1 = std::to_string(x);
			CString Cstr1;
			Cstr1 = str1.c_str();
			dc.TextOutW(10, 10, Cstr1);

			dc.TextOutW(10, 40, m_user);

			dc.TextOutW(50, 40, testcstring);

			std::string str2 = std::to_string(y);
			CString Cstr2;
			Cstr2 = str2.c_str();
			dc.TextOutW(50, 10, Cstr2);
		}

		//显示碰撞体积
		if (showinfo) {
			switch (bg) {
			case 1:
				for (int i1 = 0;i1 < 33;i1++) {
					for (int i2 = 0;i2 < 69;i2++) {
						if (n1[i2][i1] == 1) {
							dc.TextOutW((i2 + 1) * 20 - 10, (i1 + 1) * 20 + 50, TEXT("!"));
						}
					}
				}
				break;
			case 2:
				for (int i1 = 0;i1 < 45;i1++) {
					for (int i2 = 0;i2 < 52;i2++) {
						if (n2[i2][i1] == 1) {
							dc.TextOutW((i2 + 1) * 20 - 10, (i1 + 1) * 20 + 50, TEXT("!"));
						}
					}
				}
				break;
			case 3:
				for (int i1 = 0;i1 < 37;i1++) {
					for (int i2 = 0;i2 < 82;i2++) {
						if (n3[i2][i1] == 1) {
							dc.TextOutW((i2 + 1) * 20 - 10, (i1 + 1) * 20 + 50, TEXT("!"));
						}
					}
				}
				break;
			case 4:
				for (int i1 = 0;i1 < 36;i1++) {
					for (int i2 = 0;i2 < 63;i2++) {
						if (n4[i2][i1] == 1) {
							dc.TextOutW((i2 + 1) * 20 - 10, (i1 + 1) * 20 + 50, TEXT("!"));
						}
					}
				}
				break;
			case 5:
				for (int i1 = 0;i1 < 38;i1++) {
					for (int i2 = 0;i2 < 70;i2++) {
						if (n5[i2][i1] == 1) {
							dc.TextOutW((i2 + 1) * 20 - 10, (i1 + 1) * 20 + 50, TEXT("!"));
						}
					}
				}
				break;
			default:
				break;
			}
		}

		//边框限制
		switch (bg) {
		case 1:
			if (x < -20)x = -20;
			if (y < -20)y = -20;
			if (x > 1320)x = 1320;
			if (y > 600)y = 600;
			break;
		case 2:
			if (x < -20)x = -20;
			if (y < -20)y = -20;
			if (x > 1000)x = 1000;
			if (y > 860)y = 860;
			break;
		case 3:
			if (x < -20)x = -20;
			if (y < -20)y = -20;
			if (x > 1580)x = 1580;
			if (y > 680)y = 680;
			break;
		case 4:
			if (x < -20)x = -20;
			if (y < -20)y = -20;
			if (x > 1220)x = 1220;
			if (y > 680)y = 680;
			break;
		case 5:
			if (x < -20)x = -20;
			if (y < -20)y = -20;
			if (x > 1360)x = 1360;
			if (y > 720)y = 720;
			break;
		default:
			break;
		}

		//检测碰撞体积防穿模
		switch (bg) {
		case 1:
			if (n1[((x + 20) / 20)][((y + 20) / 20)] == 1) {
				x = temp_x;
				y = temp_y;
			}
			break;
		case 2:
			if (n2[((x + 20) / 20)][((y + 20) / 20)] == 1) {
				x = temp_x;
				y = temp_y;
			}
			break;
		case 3:
			if (n3[((x + 20) / 20)][((y + 20) / 20)] == 1) {
				x = temp_x;
				y = temp_y;
			}
			break;
		case 4:
			if (n4[((x + 20) / 20)][((y + 20) / 20)] == 1) {
				x = temp_x;
				y = temp_y;
			}
			break;
		case 5:
			if (n5[((x + 20) / 20)][((y + 20) / 20)] == 1) {
				x = temp_x;
				y = temp_y;
			}
			break;
		default:
			break;
		}

		pDC->BitBlt(0, 0, rc.Width(), rc.Height(), &dc, 0, 0, SRCCOPY);

		//将内存DC上的图象拷贝到前台
		//绘图完成后的清理
		dc.DeleteDC();     //删除DC
		bmp.DeleteObject(); //删除位图

		keep = false;
	}

	else if (nIDEvent == 2) {
		if (IfUpdateData == 0) {
			BOOL a = this->IsWindowVisible();
			if (a)this->ShowWindow(SW_HIDE);
			UpdateData(TRUE);
			if (m_user != _T(" ")) {
				IfUpdateData++;
				ReadItem();
				mining = false;
				Generate_Shop();
				if(!iffirstdialog)this->SetWindowText(TEXT("重生之我是究极打工仔"));
				sndPlaySound(_T("bgm\\overworld_day.wav"), SND_ASYNC | SND_LOOP);
				SetTimer(1, 40, NULL);
			}
		}
		else if (IfUpdateData == 1) {
			IfUpdateData++;
			this->ShowWindow(SW_SHOW);
			MoveWindow(200, 100, 100, 100, FALSE);
			KillTimer(2);
		}
	}
	
	CDialogEx::OnTimer(nIDEvent);
}

void CRPGFinalDlg::TransparentPNG(CImage* png)
{
	for (int i = 0; i < png->GetWidth(); i++) //遍历像素处理  
	{
		for (int j = 0; j < png->GetHeight(); j++)
		{
			unsigned char* pucColor = reinterpret_cast<unsigned char*>(png->GetPixelAddress(i, j));
			pucColor[0] = pucColor[0] * pucColor[3] / 255;
			pucColor[1] = pucColor[1] * pucColor[3] / 255;
			pucColor[2] = pucColor[2] * pucColor[3] / 255;
		}
	}
}

BOOL CRPGFinalDlg::PreTranslateMessage(MSG* pMsg)
{
	int point_x = GET_X_LPARAM(pMsg->lParam);
	int point_y = GET_Y_LPARAM(pMsg->lParam);
	show_p_x = point_x;
	show_p_y = point_y;
	CPoint point(point_x, point_y);
	if (pMsg->message == WM_KEYDOWN) {
		switch (pMsg->wParam) {
			if (!mining) {
		case VK_UP:
		case 0x57://w
		{
			keep = true;
			direction = 'b';
			break;
		}
		case VK_DOWN:
		case 0x53://s
		{
			keep = true;
			direction = 'f';
			break;
		}
		case VK_LEFT:
		case 0x41://a
		{
			keep = true;
			direction = 'l';
			break;
		}
		case VK_RIGHT:
		case 0x44://d
		{
			keep = true;
			direction = 'r';
			break;
		}
			}
		case 0x45://e
		{
			ShowBag = ShowBag ? false : true;
			break;
		}
		case 82://r
		{
			//ShowWarehouse = ShowWarehouse ? false : true;
			break;
		}
		case 81://q
		{
			if (direction == 'r' && bg == 5 && x == 960 && ((y > 130 && y < 250) || (y > 450 && y < 570))) {
				direction = 'm';
				mining = true;
			}
			break;
		}
		case 49://1
		{
			if (ShowForgeDialog) {
				forge_switch = 1;
			}
			break;
		}
		case 50://2
		{
			if (ShowForgeDialog) {
				forge_switch = 2;
			}
			break;
		}
		default:
			break;
		}
	}
	if (pMsg->message == WM_LBUTTONDOWN)
	{
		if (ShowBag)
		{
			if (point.x > x_bagPos + 225 && point.x < x_bagPos + 928 && point.y>y_bagPos + 30 && point.y < y_bagPos + 206)
			{
				int column = (point.x - x_bagPos - 225) / 59;	//列宽
				int row = (point.y - y_bagPos - 30) / 61;		//行宽
				catch_equip = row * 12 + column + 1;
				m_lastPos = new CPoint(point);
				if (catch_equip == 1)catch_equip = -1;//禁用第一格
			}
		}
		if (ShowWarehouse)
		{
			if (point.x > x_bagPos + 225 && point.x < x_bagPos + 928 && point.y>y_warePos + 54 && point.y < y_warePos + 236)
			{
				int column = (point.x - x_bagPos - 225) / 59;
				int row = (point.y - y_warePos - 54) / 63;
				catch_thing = row * 12 + column + 1;
				m_lastPos = new CPoint(point);

			}
		}
		if (ShowShop)
		{
			if (point.x > x_bagPos + 225 && point.x < x_bagPos + 928 && point.y>y_warePos + 54 && point.y < y_warePos + 236)
			{
				int column = (point.x - x_bagPos - 225) / 59;
				int row = (point.y - y_warePos - 54) / 63;
				shop_catch_thing = row * 12 + column + 1;
				m_lastPos = new CPoint(point);
			}
		}
		if (ShowForge) {
			if (point.x > (500 - 60 - 100) && point.x < (500 - 60 - 100 + 120) && point.y>(430 - 60) && point.y < (430 - 60 + 120))
			{
				forge_catch_thing = 1;
				m_lastPos = new CPoint(point);
			}
			else if (point.x > (500 - 60 + 100) && point.x < (500 - 60 + 100 + 120) && point.y>(430 - 60) && point.y < (430 - 60 + 120)) {
				forge_catch_thing = 2;
				m_lastPos = new CPoint(point);
			}
		}
	}
	else if (pMsg->message == WM_LBUTTONUP) {
		//显示背包时的相关处理
		if (ShowBag) {
			if (catch_equip != -1) {
				CImage* tmp = NULL;
				int tmp1 = 0;
				int tmp2 = 0;
				//背包内堆叠
				if (touch_equip != -1 && touch_equip != 1 && m_equip_id[touch_equip] == m_equip_id[catch_equip] && catch_equip != touch_equip) {
					m_equip[catch_equip] = NULL;
					m_equip_num[touch_equip] += m_equip_num[catch_equip];
					m_equip_num[catch_equip] = 0;
					m_equip_id[catch_equip] = 0;
				}
				//背包内交换
				else if (touch_equip != -1 && touch_equip != 1) {//touch_equip != 1 禁用背包第一格
					tmp = m_equip[catch_equip];
					m_equip[catch_equip] = m_equip[touch_equip];
					m_equip[touch_equip] = tmp;
					tmp1 = m_equip_id[catch_equip];
					m_equip_id[catch_equip] = m_equip_id[touch_equip];
					m_equip_id[touch_equip] = tmp1;
					tmp2 = m_equip_num[catch_equip];
					m_equip_num[catch_equip] = m_equip_num[touch_equip];
					m_equip_num[touch_equip] = tmp2;
				}
				//背包给仓库 堆叠
				if (touch_thing != -1 && touch_equip != 1 && m_thing_id[touch_thing] == m_equip_id[catch_equip]) {
					m_equip[catch_equip] = NULL;
					m_thing_num[touch_thing] += m_equip_num[catch_equip];
					m_equip_num[catch_equip] = 0;
					m_equip_id[catch_equip] = 0;
				}
				//背包给仓库 交换
				else if (touch_thing != -1 && touch_equip != 1) {
					tmp = m_equip[catch_equip];
					m_equip[catch_equip] = m_thing[touch_thing];
					m_thing[touch_thing] = tmp;
					tmp1 = m_equip_id[catch_equip];
					m_equip_id[catch_equip] = m_thing_id[touch_thing];
					m_thing_id[touch_thing] = tmp1;
					tmp2 = m_equip_num[catch_equip];
					m_equip_num[catch_equip] = m_thing_num[touch_thing];
					m_thing_num[touch_thing] = tmp2;
				}
				if (ShowShop) {
					long price1 = 0;
					if (m_shop_thing_num[shop_touch_thing] != 0) { price1 = m_shop_thing_num[shop_touch_thing] * m_item_price[m_shop_thing_id[shop_touch_thing]]; }
					//上面是如果鼠标移动到商店的物品，此物品的总价
					long price2 = (m_item_price[m_equip_id[catch_equip]] * m_equip_num[catch_equip]);//背包里拿起来的东西的价格

					//背包给商店 堆叠
					if (shop_touch_thing != -1 && touch_equip != 1 && m_shop_thing_id[shop_touch_thing] == m_equip_id[catch_equip]) {
						m_equip[catch_equip] = NULL;
						m_shop_thing_num[shop_touch_thing] += m_equip_num[catch_equip];
						m_equip_num[catch_equip] = 0;
						m_equip_id[catch_equip] = 0;
						coin += price2;
					}
					//背包给商店 交换
					else if (shop_touch_thing != -1 && touch_equip != 1) {
						if (coin >= (price1 - price2)) {
							tmp = m_equip[catch_equip];
							m_equip[catch_equip] = m_shop_thing[shop_touch_thing];
							m_shop_thing[shop_touch_thing] = tmp;
							tmp1 = m_equip_id[catch_equip];
							m_equip_id[catch_equip] = m_shop_thing_id[shop_touch_thing];
							m_shop_thing_id[shop_touch_thing] = tmp1;
							tmp2 = m_equip_num[catch_equip];
							m_equip_num[catch_equip] = m_shop_thing_num[shop_touch_thing];
							m_shop_thing_num[shop_touch_thing] = tmp2;
							coin -= (price1 - price2);
						}
					}
				}
				if (ShowForge && (forge_touch_thing != 2)) {//禁止把东西放右边那格
					//堆叠
					if (forge_touch_thing != -1 && touch_equip != 1 && m_forge_thing_id[forge_touch_thing] == m_equip_id[catch_equip]) {
						m_equip[catch_equip] = NULL;
						m_forge_thing_num[forge_touch_thing] += m_equip_num[catch_equip];
						m_equip_num[catch_equip] = 0;
						m_equip_id[catch_equip] = 0;
					}
					// 交换
					else if (forge_touch_thing != -1 && touch_equip != 1) {
						tmp = m_equip[catch_equip];
						m_equip[catch_equip] = m_forge_thing[forge_touch_thing];
						m_forge_thing[forge_touch_thing] = tmp;
						tmp1 = m_equip_id[catch_equip];
						m_equip_id[catch_equip] = m_forge_thing_id[forge_touch_thing];
						m_forge_thing_id[forge_touch_thing] = tmp1;
						tmp2 = m_equip_num[catch_equip];
						m_equip_num[catch_equip] = m_forge_thing_num[forge_touch_thing];
						m_forge_thing_num[forge_touch_thing] = tmp2;
					}
				}
			}
		}

		if (ShowWarehouse) {
			if (catch_thing != -1) {
				CImage* tmp = NULL;
				int tmp1 = 0;
				int tmp2 = 0;

				//仓库内 堆叠
				if (touch_thing != -1 && touch_equip != 1 && m_thing_id[touch_thing] == m_thing_id[catch_thing] && catch_thing != touch_thing) {
					m_thing[catch_thing] = NULL;
					m_thing_num[touch_thing] += m_thing_num[catch_thing];
					m_thing_num[catch_thing] = 0;
					m_thing_id[catch_thing] = 0;
				}

				//仓库内 交换
				else if (touch_thing != -1 && touch_equip != 1) {
					tmp = m_thing[catch_thing];
					m_thing[catch_thing] = m_thing[touch_thing];
					m_thing[touch_thing] = tmp;
					tmp1 = m_thing_id[catch_thing];
					m_thing_id[catch_thing] = m_thing_id[touch_thing];
					m_thing_id[touch_thing] = tmp1;
					tmp2 = m_thing_num[catch_thing];
					m_thing_num[catch_thing] = m_thing_num[touch_thing];
					m_thing_num[touch_thing] = tmp2;
				}

				//仓库给背包 堆叠
				if (touch_equip != -1 && touch_equip != 1 && m_equip_id[touch_equip] == m_thing_id[catch_thing]) {
					m_thing[catch_thing] = NULL;
					m_equip_num[touch_equip] += m_thing_num[catch_thing];
					m_thing_num[catch_thing] = 0;
					m_thing_id[catch_thing] = 0;
				}
				//仓库给背包 交换
				else if (touch_equip != -1 && touch_equip != 1) {
					tmp = m_thing[catch_thing];
					m_thing[catch_thing] = m_equip[touch_equip];
					m_equip[touch_equip] = tmp;
					tmp1 = m_thing_id[catch_thing];
					m_thing_id[catch_thing] = m_equip_id[touch_equip];
					m_equip_id[touch_equip] = tmp1;
					tmp2 = m_thing_num[catch_thing];
					m_thing_num[catch_thing] = m_equip_num[touch_equip];
					m_equip_num[touch_equip] = tmp2;
				}
			}
		}

		//商店(类比仓库)
		if (ShowShop) {
			if (shop_catch_thing != -1) {
				CImage* tmp = NULL;
				int tmp1 = 0;
				int tmp2 = 0;
				long price1 = (m_item_price[m_shop_thing_id[shop_catch_thing]] * m_shop_thing_num[shop_catch_thing]);
				long price2 = 0;
				if (m_equip_num[touch_equip] != 0) { price2 = m_equip_num[touch_equip] * m_item_price[m_equip_id[touch_equip]]; }
				//商店给背包 堆叠
				if (touch_equip != -1 && touch_equip != 1 && m_equip_id[touch_equip] == m_shop_thing_id[shop_catch_thing]) {
					if (coin >= price1) {
						m_shop_thing[shop_catch_thing] = NULL;
						m_equip_num[touch_equip] += m_shop_thing_num[shop_catch_thing];
						m_shop_thing_num[shop_catch_thing] = 0;
						m_shop_thing_id[shop_catch_thing] = 0;
						coin -= price1;
					}
				}
				//商店给背包 交换
				else if (touch_equip != -1 && touch_equip != 1) {
					if (coin >= price1) {
						tmp = m_shop_thing[shop_catch_thing];
						m_shop_thing[shop_catch_thing] = m_equip[touch_equip];
						m_equip[touch_equip] = tmp;
						tmp1 = m_shop_thing_id[shop_catch_thing];
						m_shop_thing_id[shop_catch_thing] = m_equip_id[touch_equip];
						m_equip_id[touch_equip] = tmp1;
						tmp2 = m_shop_thing_num[shop_catch_thing];
						m_shop_thing_num[shop_catch_thing] = m_equip_num[touch_equip];
						m_equip_num[touch_equip] = tmp2;
						coin -= price1;
						coin += price2;
					}
				}
			}
		}

		if (ShowForge) {
			if (forge_catch_thing != -1) {
				CImage* tmp = NULL;
				int tmp1 = 0;
				int tmp2 = 0;
				//给背包 堆叠
				if (touch_equip != -1 && touch_equip != 1 && m_equip_id[touch_equip] == m_forge_thing_id[forge_catch_thing]) {
					m_forge_thing[forge_catch_thing] = NULL;
					m_equip_num[touch_equip] += m_forge_thing_num[forge_catch_thing];
					m_forge_thing_num[forge_catch_thing] = 0;
					m_forge_thing_id[forge_catch_thing] = 0;
				}
				//给背包 交换
				else if (touch_equip != -1 && touch_equip != 1 && (forge_catch_thing != 2 || m_forge_thing_num[2] != 0)&& m_equip_num[touch_equip]==0) {//禁止右边拿出去为数量0的家伙  禁止右边换背包里的东西进去
					tmp = m_forge_thing[forge_catch_thing];
					m_forge_thing[forge_catch_thing] = m_equip[touch_equip];
					m_equip[touch_equip] = tmp;
					tmp1 = m_forge_thing_id[forge_catch_thing];
					m_forge_thing_id[forge_catch_thing] = m_equip_id[touch_equip];
					m_equip_id[touch_equip] = tmp1;
					tmp2 = m_forge_thing_num[forge_catch_thing];
					m_forge_thing_num[forge_catch_thing] = m_equip_num[touch_equip];
					m_equip_num[touch_equip] = tmp2;
				}
				//锻造
				if (forge && forge_touch_thing == 2 && forge_catch_thing == 2) {
					if (m_forge_thing_id[1] == 17 || m_forge_thing_id[1] == 19) {
						m_forge_thing_num[1] -= 4;
					}
					else m_forge_thing_num[1] -= 9;
					if (m_forge_thing_num[1] == 0) {
						m_forge_thing[1] = NULL;
						m_forge_thing_id[1] = 0;
					}
					m_forge_thing_num[2] ++;
					forge = false;
				}

			}
		}

		if (ShowDialog || ShowForgeDialog) {
			if (point.x > x_bagPos + 225 && point.x < x_bagPos + 928 && point.y>y_warePos + 54 && point.y < y_warePos + 236)
			{
				text_num++;
			}
		}

		catch_equip = -1;
		catch_thing = -1;
		shop_catch_thing = -1;
		forge_catch_thing = -1;

		x_offset = 0;
		y_offset = 0;
	}
	else if (pMsg->message == WM_MOUSEMOVE)
	{
		if (catch_equip != -1 || catch_thing != -1 || shop_catch_thing != -1 || forge_catch_thing != -1)
		{
			x_offset += point.x - m_lastPos->x;
			y_offset += point.y - m_lastPos->y;
			m_lastPos = new CPoint(point);
		}
		if (ShowBag)
		{
			if (point.x > x_bagPos + 225 && point.x < x_bagPos + 928 && point.y>y_bagPos + 30 && point.y < y_bagPos + 206)
			{
				int column = (point.x - x_bagPos - 225) / 59;	//第n列
				int row = (point.y - y_bagPos - 30) / 61;		//第n行
				touch_equip = row * 12 + column + 1;

			}
			else touch_equip = -1;
		}
		if (ShowWarehouse)
		{
			if (point.x > x_bagPos + 225 && point.x < x_bagPos + 928 && point.y>y_warePos + 54 && point.y < y_warePos + 236)
			{
				int column = (point.x - x_bagPos - 225) / 59;
				int row = (point.y - y_warePos - 54) / 63;
				touch_thing = row * 12 + column + 1;
			}
			else touch_thing = -1;
		}
		if (ShowShop)
		{
			if (point.x > x_bagPos + 225 && point.x < x_bagPos + 928 && point.y>y_warePos + 54 && point.y < y_warePos + 236)
			{
				int column = (point.x - x_bagPos - 225) / 59;
				int row = (point.y - y_warePos - 54) / 63;
				shop_touch_thing = row * 12 + column + 1;
			}
			else shop_touch_thing = -1;
		}
		if (ShowForge)
		{
			if (point.x > (500 - 60 - 100) && point.x < (500 - 60 - 100 + 120) && point.y>(430 - 60) && point.y < (430 - 60 + 120))
			{
				forge_touch_thing = 1;//1是左边 2是右边
			}
			else if (point.x > (500 - 60 + 100) && point.x < (500 - 60 + 100 + 120) && point.y>(430 - 60) && point.y < (430 - 60 + 120)) {
				forge_touch_thing = 2;
			}
			else forge_touch_thing = -1;
		}
	}
	//防止按回车关闭程序
	if (pMsg->message == WM_KEYDOWN) {
		if (pMsg->wParam == VK_ESCAPE) {
			return true;
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}

//读取用户信息
void CRPGFinalDlg::ReadItem() {
	std::ifstream file1, file2;
	std::string temp_bag = "D://";
	std::string temp_warehouse = "D://";
	std::string user_temp(CW2A(m_user.GetString()));
	temp_bag += user_temp;
	temp_warehouse += user_temp;
	temp_bag += "_bag.txt";
	temp_warehouse += "_warehouse.txt";
	file1.open(temp_bag, std::ios::in);
	file2.open(temp_warehouse, std::ios::in);

	int useless;
	for (int i = 1;i <= 36;i++) {
		file1 >> useless >> m_equip_id[i] >> m_equip_num[i];
		if (m_equip_num[i] == 0)m_equip_id[i] = 0;
	}
	file1 >> coin;
	int temp1,temp2,temp3;
	file1 >> temp1;
	temp1 == 1 ? iffirstdialog = true : iffirstdialog = false;
	file1 >> temp2;
	temp2 == 1 ? if_mission_1_success = true : if_mission_1_success = false;
	file1 >> temp3;
	temp3 == 1 ? if_mission_2_success = true : if_mission_2_success = false;

	for (int i = 1;i <= 36;i++) {
		file2 >> useless >> m_thing_id[i] >> m_thing_num[i];
		if (m_thing_num[i] == 0)m_thing_id[i] = 0;
	}
	if (m_equip_id[1] == 26)pickaxe_max = true;

	file1.close();
	file2.close();
}

//生成矿物
//返回的是矿物id
int CRPGFinalDlg::Generate_Ore() {
	int ore = (rand() % 100) + 1;//出来的是1->100
	int ans = 0;
	if (ore <= (ans += 26)) {
		return 1;
	}
	else if (ore <= (ans += 4)) {
		return 2;
	}
	else if (ore <= (ans += 22)) {
		return 4;
	}
	else if (ore <= (ans += 4)) {
		return 5;
	}
	else if (ore <= (ans += 2)) {
		return 7;
	}
	else if (ore <= (ans += 2)) {
		return 9;
	}
	else if (ore <= (ans += 7)) {
		return 11;
	}
	else if (ore <= (ans += 7)) {
		return 13;
	}
	else if (ore <= (ans += 7)) {
		return 15;
	}
	else if (ore <= (ans += 7)) {
		return 17;
	}
	else if (ore <= (ans += 6)) {
		return 19;
	}
	else if (ore <= (ans += 5)) {
		return 21;
	}
	else if (ore <= (ans += 1)) {
		return 22;
	}
	return 0;
}

//把矿放背包里
void CRPGFinalDlg::Place_Ore() {
	int ore = Generate_Ore();
	for (int i = 2;i <= 36;i++) {
		if (m_equip_id[i] == ore) {
			m_equip_num[i]++;
			return;
		}
	}
	for (int i = 2;i <= 36;i++) {
		if (m_equip_num[i] == 0) {
			m_equip_id[i] = ore;
			m_equip_num[i] = 1;
			return;
		}
	}
}

//生成商店物品
void CRPGFinalDlg::Generate_Shop() {
	int num[6],id[6];
	for (int i = 1;i <= 5;i++) {
		id[i] = (rand() % 25) + 1;//出来的是1->25
		num[i] = (rand() % 5) + 1;//出来的是1->5
		if (id[i] == 24 || id[i] == 25) {
			num[i] = 1;
		}
		else if (id[i] == 3 || id[i] == 8) {//下面几个为了降低出好东西的概率
			id[i] = 1;
		}
		else if (id[i] == 6 || id[i] == 10) {
			id[i] = 4;
		}
		else if (id[i] == 23) {
			id[i] = 21;
		}
		else if (id[i] == 12 || id[i] == 14 || id[i] == 16 || id[i] == 18 || id[i] == 20  ) {
			id[i]--;
		}
		m_shop_thing[i] = m_item[id[i]];
		m_shop_thing_id[i] = id[i];
		m_shop_thing_num[i] = num[i];
	}
}

int CRPGFinalDlg::if_get_all_block() {
	int num = 0;
	boolean id[13] = {false};//0弃用 
	//3 6 8 10 12 14 16 18 20 23 24 25
	for (int i = 2;i <= 36;i++) {
		if (m_equip_id[i] == 3 && id[1] == false) {
			num++;
			id[1] = true;
		}
		else if (m_equip_id[i] == 6 && id[2] == false) {
			num++;
			id[2] = true;
		}
		else if (m_equip_id[i] == 8 && id[3] == false) {
			num++;
			id[3] = true;
		}
		else if (m_equip_id[i] == 10 && id[4] == false) {
			num++;
			id[4] = true;
		}
		else if (m_equip_id[i] == 12 && id[5] == false) {
			num++;
			id[5] = true;
		}
		else if (m_equip_id[i] == 14 && id[6] == false) {
			num++;
			id[6] = true;
		}
		else if (m_equip_id[i] == 16 && id[7] == false) {
			num++;
			id[7] = true;
		}
		else if (m_equip_id[i] == 18 && id[8] == false) {
			num++;
			id[8] = true;
		}
		else if (m_equip_id[i] == 20 && id[9] == false) {
			num++;
			id[9] = true;
		}
		else if (m_equip_id[i] == 23 && id[10] == false) {
			num++;
			id[10] = true;
		}
		else if (m_equip_id[i] == 24 && id[11] == false) {
			num++;
			id[11] = true;
		}
		else if (m_equip_id[i] == 25 && id[12] == false) {
			num++;
			id[12] = true;
		}
	}
	return (12-num);//返回的是还差多少个方块
}

//轮子:textout显示多行文本
int CRPGFinalDlg::MultiLineTextOut(CDC* pDC, int x, int y, CString Text, int LineSpace)
{
	TEXTMETRIC Metric;
	if (pDC->GetOutputTextMetrics(&Metric))
	{
		LineSpace += Metric.tmHeight;
	}

	int Lines = 0;
	int Length = Text.GetLength();
	int Start = 0;
	for (int i = 0; i < Length; i++)
	{
		if (Text.GetAt(i) == '\n')//会输出每个\n前面的东西，每个\n前面为一行
		{
			Lines++;
			pDC->TextOut(x, y, Text.Mid(Start, i - Start));
			y += LineSpace;
			Start = i + 1;
		}
	}
	return Lines;
}
