// MFCSOCKClientSampleDlg.h : header file
//

#if !defined(AFX_MFCSOCKCLIENTSAMPLEDLG_H__B760167D_2D5F_42B3_BC00_076C03C40EEE__INCLUDED_)
#define AFX_MFCSOCKCLIENTSAMPLEDLG_H__B760167D_2D5F_42B3_BC00_076C03C40EEE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "SocketClient.h"
/////////////////////////////////////////////////////////////////////////////
// CMFCSOCKClientSampleDlg dialog

class CMFCSOCKClientSampleDlg : public CDialog
{
	// Construction
public:
	void WriteLog(CString log);
	CMFCSOCKClientSampleDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMFCSOCKClientSampleDlg)
	enum { IDD = IDD_MFCSOCKCLIENTSAMPLE_DIALOG };
	CEdit	m_editLog;
	CIPAddressCtrl	m_IP;
	CString	m_Port;
	CString	m_editRecv;
	CString	m_editSend;
	CString	m_Log;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCSOCKClientSampleDlg)
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	CSocketClient* pSocketClient;

	// Generated message map functions
	//{{AFX_MSG(CMFCSOCKClientSampleDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonConnect();
	afx_msg LRESULT OnLogMsg(WPARAM dwEvent, LPARAM dwLen);
	afx_msg LRESULT OnRecvMsg(WPARAM dwEvent, LPARAM dwLen);
	afx_msg void OnButtonSend();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCSOCKCLIENTSAMPLEDLG_H__B760167D_2D5F_42B3_BC00_076C03C40EEE__INCLUDED_)
