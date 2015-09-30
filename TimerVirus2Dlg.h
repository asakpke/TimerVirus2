// TimerVirus2Dlg.h : header file
//

#if !defined(AFX_TIMERVIRUS2DLG_H__534E0290_8118_4881_92DF_6880BD8D5BF2__INCLUDED_)
#define AFX_TIMERVIRUS2DLG_H__534E0290_8118_4881_92DF_6880BD8D5BF2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//char szFileName[20];
/////////////////////////////////////////////////////////////////////////////
// CTimerVirus2Dlg dialog

class CTimerVirus2Dlg : public CDialog
{
// Construction
public:
	CTimerVirus2Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTimerVirus2Dlg)
	enum { IDD = IDD_TIMERVIRUS_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTimerVirus2Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTimerVirus2Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	afx_msg void OnTimer(UINT nIDEvent);
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	void AddFile2Startup();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TIMERVIRUS2DLG_H__534E0290_8118_4881_92DF_6880BD8D5BF2__INCLUDED_)
