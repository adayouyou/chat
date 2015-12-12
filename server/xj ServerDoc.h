// xj ServerDoc.h : interface of the CXjServerDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_XJSERVERDOC_H__196A4970_E743_46A1_8E46_9C17061124F5__INCLUDED_)
#define AFX_XJSERVERDOC_H__196A4970_E743_46A1_8E46_9C17061124F5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CXjServerDoc : public CDocument
{
protected: // create from serialization only
	CXjServerDoc();
	DECLARE_DYNCREATE(CXjServerDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXjServerDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	CString m_StrMsg;
	void SendData(SOCKADDR_IN addrSocket);
	SOCKADDR_IN m_addr;
	static DWORD WINAPI ReceiveProc(LPVOID lpParameter);
	SOCKET m_socket;
	BOOL InitSocket();
	UINT PORT;	
	UINT MessageCnt;
	UINT PersonCnt;
	CArray<CString,CString> m_User;
	CArray<CString,CString> m_Message;
	virtual ~CXjServerDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CXjServerDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
private:

};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XJSERVERDOC_H__196A4970_E743_46A1_8E46_9C17061124F5__INCLUDED_)
