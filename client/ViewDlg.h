#if !defined(AFX_VIEWDLG_H__D52A93B6_3CE3_4575_92C3_3D70ED05F88C__INCLUDED_)
#define AFX_VIEWDLG_H__D52A93B6_3CE3_4575_92C3_3D70ED05F88C__INCLUDED_

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
	BOOL m_InitFla;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CViewDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
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
	afx_msg void OnBtnsend();
	afx_msg void OnBtncancle();
	afx_msg void OnClose();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnBtncnt();
	afx_msg void OnBtndiscnt();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIEWDLG_H__D52A93B6_3CE3_4575_92C3_3D70ED05F88C__INCLUDED_)
