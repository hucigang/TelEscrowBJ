// TelEscrowBJ.h : main header file for the TELESCROWBJ DLL
//

#if !defined(AFX_TELESCROWBJ_H__FFF4C490_B777_45D0_A9AF_8CB6E8E38496__INCLUDED_)
#define AFX_TELESCROWBJ_H__FFF4C490_B777_45D0_A9AF_8CB6E8E38496__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTelEscrowBJApp
// See TelEscrowBJ.cpp for the implementation of this class
//
__declspec(dllexport) BOOL EnableKeyboardCapture();       //¼ÓÔØ¹³×Ó
__declspec(dllexport) BOOL DisableKeyboardCapture();       //Ð¶ÔØ¹³×Ó

class CTelEscrowBJApp : public CWinApp
{
public:
	CTelEscrowBJApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTelEscrowBJApp)
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CTelEscrowBJApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TELESCROWBJ_H__FFF4C490_B777_45D0_A9AF_8CB6E8E38496__INCLUDED_)
