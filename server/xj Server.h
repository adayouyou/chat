// xj Server.h : main header file for the XJ SERVER application
//

#if !defined(AFX_XJSERVER_H__94CCEB91_71EC_4032_92D6_44632A954E07__INCLUDED_)
#define AFX_XJSERVER_H__94CCEB91_71EC_4032_92D6_44632A954E07__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CXjServerApp:
// See xj Server.cpp for the implementation of this class
//

class CXjServerApp : public CWinApp
{
public:
	CXjServerApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXjServerApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CXjServerApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XJSERVER_H__94CCEB91_71EC_4032_92D6_44632A954E07__INCLUDED_)
