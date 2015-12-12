; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CViewDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "xj Server.h"
LastPage=0

ClassCount=7
Class1=CXjServerApp
Class2=CXjServerDoc
Class3=CXjServerView
Class4=CMainFrame

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDD_PORT
Class5=CAboutDlg
Resource3=IDR_MAINFRAME
Class6=CViewDlg
Class7=CPortDlg
Resource4=IDD_FORMVIEW (English (U.S.))

[CLS:CXjServerApp]
Type=0
HeaderFile=xj Server.h
ImplementationFile=xj Server.cpp
Filter=N
LastObject=CXjServerApp

[CLS:CXjServerDoc]
Type=0
HeaderFile=xj ServerDoc.h
ImplementationFile=xj ServerDoc.cpp
Filter=N
LastObject=CXjServerDoc

[CLS:CXjServerView]
Type=0
HeaderFile=xj ServerView.h
ImplementationFile=xj ServerView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CXjServerView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
BaseClass=CFrameWnd
VirtualFilter=fWC
LastObject=CMainFrame




[CLS:CAboutDlg]
Type=0
HeaderFile=xj Server.cpp
ImplementationFile=xj Server.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
CommandCount=16

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_FORMVIEW (English (U.S.))]
Type=1
Class=CViewDlg
ControlCount=2
Control1=IDC_STATIC,static,1342308352
Control2=IDC_MESSAGE,edit,1352728644

[CLS:CViewDlg]
Type=0
HeaderFile=ViewDlg.h
ImplementationFile=ViewDlg.cpp
BaseClass=CFormView
Filter=D
LastObject=CViewDlg
VirtualFilter=VWC

[DLG:IDD_PORT]
Type=1
Class=CPortDlg
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552

[CLS:CPortDlg]
Type=0
HeaderFile=PortDlg.h
ImplementationFile=PortDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CPortDlg
VirtualFilter=dWC

