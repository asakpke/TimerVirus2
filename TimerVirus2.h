// TimerVirus2.h : main header file for the TIMERVIRUS2 application
//

#if !defined(AFX_TIMERVIRUS2_H__5985F6D9_E0BD_4D6A_9F7F_3EDDF2B744DD__INCLUDED_)
#define AFX_TIMERVIRUS2_H__5985F6D9_E0BD_4D6A_9F7F_3EDDF2B744DD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTimerVirus2App:
// See TimerVirus2.cpp for the implementation of this class
//

class CTimerVirus2App : public CWinApp
{
public:
	//char *m_pszExeName;
	CTimerVirus2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTimerVirus2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTimerVirus2App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TIMERVIRUS2_H__5985F6D9_E0BD_4D6A_9F7F_3EDDF2B744DD__INCLUDED_)
