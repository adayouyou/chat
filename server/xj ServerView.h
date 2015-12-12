// xj ServerView.h : interface of the CXjServerView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_XJSERVERVIEW_H__B562EE77_7DD3_4399_A687_69831A0D5100__INCLUDED_)
#define AFX_XJSERVERVIEW_H__B562EE77_7DD3_4399_A687_69831A0D5100__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CXjServerView : public CView
{
protected: // create from serialization only
	CXjServerView();
	DECLARE_DYNCREATE(CXjServerView)

// Attributes
public:
	CXjServerDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXjServerView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CXjServerView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CXjServerView)
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in xj ServerView.cpp
inline CXjServerDoc* CXjServerView::GetDocument()
   { return (CXjServerDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XJSERVERVIEW_H__B562EE77_7DD3_4399_A687_69831A0D5100__INCLUDED_)
