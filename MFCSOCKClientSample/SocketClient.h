#if !defined(AFX_SOCKETCLIENT_H__FFE761D4_28DD_4A9E_8BB1_508CA6798F96__INCLUDED_)
#define AFX_SOCKETCLIENT_H__FFE761D4_28DD_4A9E_8BB1_508CA6798F96__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#define MAXSOCKBUF	1024
#endif // _MSC_VER > 1000

// CSocketClient 命令目标

class CSocketClient : public CAsyncSocket
{
public:
	CSocketClient();
	virtual ~CSocketClient();
public:
	void Init();
	int m_nLength;
	CString m_strHost;
	CString m_strIP;
	char m_szSendBuf[MAXSOCKBUF];
	char m_szReceBuf[MAXSOCKBUF];
	HWND m_hMsgWnd;
	BOOL m_bConnect;
public:
	virtual void OnSend(int nErrorCode);
	virtual void OnConnect(int nErrorCode);
	virtual void OnReceive(int nErrorCode);
	virtual void OnClose(int nErrorCode);
};
#endif // !defined(AFX_SOCKETCLIENT_H__FFE761D4_28DD_4A9E_8BB1_508CA6798F96__INCLUDED_)

