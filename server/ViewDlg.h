#if !defined(AFX_VIEWDLG_H__0C624FC7_1E20_4BA2_BFFA_FDCD25539B8A__INCLUDED_)
#define AFX_VIEWDLG_H__0C624FC7_1E20_4BA2_BFFA_FDCD25539B8A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ViewDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CViewDlg form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CViewDlg : public CFormView
{
protected:
	CViewDlg();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CViewDlg)

// Form Data
public:
	//{{AFX_DATA(CViewDlg)
	enum { IDD = IDD_FORMVIEW };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CViewDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CViewDlg();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CViewDlg)
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIEWDLG_H__0C624FC7_1E20_4BA2_BFFA_FDCD25539B8A__INCLUDED_)
