
// RPG_FinalDlg.h: 头文件
//

#pragma once


// CRPGFinalDlg 对话框
class CRPGFinalDlg : public CDialogEx
{
// 构造
public:
	CRPGFinalDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RPG_FINAL_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	void CRPGFinalDlg::TransparentPNG(CImage* png);
	void CRPGFinalDlg::ReadItem();
	int CRPGFinalDlg::Generate_Ore();
	void CRPGFinalDlg::Place_Ore();
	void CRPGFinalDlg::Generate_Shop();
	int CRPGFinalDlg::MultiLineTextOut(CDC* pDC, int x, int y, CString Text, int LineSpace);
	int if_get_all_block();


	int text_num = 1;

	CImage m_png[15];
	CImage m_bg[5];
	int x = 600, y = 500, position = 0, position_m = 0;
	char direction = 'f';//l左 r右 b后 f前
	boolean keep = false;//判断现在是否在按移动键
	boolean showinfo = false;
	int n1[69][33];//碰撞检测数组
	//由于地图是1340x620(实际可用值),人物移动为20像素,故数组为68x32,缩放比例20x
	int n2[52][45];//1000x860
	int n3[82][37];//1600x700
	int n4[63][36];//1220x680
	int n5[70][38];//1360x720

	int bg = 1;//1=bg_1;2=bg_2

	int bg_x[5];//存储每个bg的xy坐标长度
	int bg_y[5];

	boolean mining = true;//是否正在挖矿 //这里设置为true因为为true时会屏蔽其他按键，顺便避免启动时就按按键的bug,初始化完后改false.
	int mining_num = 0;//已经敲石头的次数
	//int pickaxe_rank=5;//5=石镐，1=下界合金镐 越好的镐越小是为了把这个值直接当成需要敲石头的次数
	//上面这个弃用，直接使用m_equip_id[1],规则不变

    //CString m_user;
	int IfUpdateData=0;

	boolean forge = true;

	CImage* m_dialog;
	boolean ShowDialog = false;
	boolean iffirstdialog = true;

	//CImage* m_display_item;//物品展示框//此功能搁置
	CImage* m_arrow;

	CImage* m_display;
	boolean paint_display_item = false;//判断是否要画
	///////////////////////////////////
	//背包系统
	int x_warePos;			//仓库界面坐标
	int y_warePos;
	CImage* m_warehouse;	//仓库界面
	BOOL ShowWarehouse = false;		//是否显示仓库


	////////////////////////////////////
	//所有的[0]都弃用。(对于xxx[37])///////
	////////////////////////////////////

	CImage* m_thing[37];	//仓库物品//这里改小会出问题！
	int m_thing_id[37];  //每格的物品id
	int m_thing_num[37];    //每格的物品数量

	//boolean ShowShopDialog = false;
	//boolean ShowShopAfterDialog=false;
	BOOL ShowShop = false;		//是否显示仓库
	CImage* m_shop_thing[37];
	int m_shop_thing_id[37];//交易大厅的物品id
	int m_shop_thing_num[37];
	int shop_touch_thing = -1;
	int shop_catch_thing = -1;

	boolean ShowForgeDialog = false;
	//boolean ShowForgeAfterDialog=false;
	BOOL ShowForge = false;
	CImage* m_forge_thing[3];
	int m_forge_thing_id[3];
	int m_forge_thing_num[3];
	int forge_touch_thing = -1;
	int forge_catch_thing = -1;
	int forge_switch = 0;//1 锻造 2 升级


	CImage* m_item[37];   //可能没有用满36个，目前是25物品+镐子（几种）和金币  m_item[0]弃用
	int m_item_price[37];

	int touch_thing = -1;
	int catch_thing = -1;

	int x_bagPos;			//物品栏坐标
	int y_bagPos;
	CImage* m_bag;			//物品栏界面
	BOOL ShowBag = false;			//是否显示背包

	CImage* m_equip[37];	//36个装备图片
	int m_equip_id[37];  //每格的物品id
	int m_equip_num[37];    //每格的物品数量

	int touch_equip = -1;		//当前鼠标指向了第几个装备
	int catch_equip = -1;		//点击了第几个装备

	int x_offset;			//拖拽图标坐标偏移量
	int y_offset;
	int show_p_x;
	int show_p_y;
	CString testcstring;

	CImage coin_img;
	long coin = 0;

	int update_state = 0;//判定是否应该刷新升级对话框的可升级判定
	boolean pickaxe_max = false;//判断是不是已经满级镐子了
	boolean if_mission_1_success=false;
	boolean if_mission_2_success = false;

	boolean refersh_shop = true;//这两个用来判断刷新商店
	boolean in_bg1 = true;


	CPoint* m_lastPos;
	CBitmap m_memBmp;
	CDC		m_memDC;
//	virtual void OnOK();
	virtual void OnOK();
	afx_msg void OnClose();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
//	afx_msg void OnNcPaint();
//	afx_msg void OnNcPaint();
	CString m_user;
};
