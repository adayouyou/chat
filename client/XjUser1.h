// XjUser1.h : main header file for the XJUSER1 application
//

#if !defined(AFX_XJUSER1_H__FFB81C74_90B2_48D5_A42C_2335CAA5421C__INCLUDED_)
#define AFX_XJUSER1_H__FFB81C74_90B2_48D5_A42C_2335CAA5421C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CXjUser1App:
// See XjUser1.cpp for the implementation of this class
//

class CXjUser1App : public CWinApp
{
public:
	CXjUser1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXjUser1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CXjUser1App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XJUSER1_H__FFB81C74_90B2_48D5_A42C_2335CAA5421C__INCLUDED_)
