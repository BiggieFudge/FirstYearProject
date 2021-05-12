
// OOP_ProjectDlg.h : header file
//

#pragma once


// COOPProjectDlg dialog
class COOPProjectDlg : public CDialogEx
{
// Construction
public:
	COOPProjectDlg(CWnd* pParent = nullptr);	// standard constructor
	~COOPProjectDlg()
	{

		//deleting dynammiclly created labels for shnatot
		int i;
		for (i = 0; i < 20; i++)
		{
			delete(Xshnatot[i]);
			delete(Yshnatot[i]);
		}
	}
	
	
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_OOP_PROJECT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	CStatic* Xshnatot[20];
	CStatic* Yshnatot[20];

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	
};