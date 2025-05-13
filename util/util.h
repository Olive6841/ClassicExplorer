#pragma once
#ifndef _UTIL_H
#define _UTIL_H

#include "stdafx.h"
#include "framework.h"
#include "resource.h"
//#include "ClassicExplorer_i.h"
#include "dllmain.h"

namespace CEUtil
{
	struct CESettings
	{
		DWORD showGoButton = -1;
		DWORD showAddressLabel = -1;
		DWORD showFullAddress = -1;

		CESettings(int a, int b, int f)
		{
			showGoButton = a;
			showAddressLabel = b;
			showFullAddress = f;
		}
	};
	CESettings GetCESettings();
	void WriteCESettings(CESettings& toWrite);
	HRESULT GetCurrentFolderPidl(CComPtr<IShellBrowser> pShellBrowser, PIDLIST_ABSOLUTE *pidlOut);
	HRESULT FixExplorerSizes(HWND explorerChild);
	HRESULT FixExplorerSizesIfNecessary(HWND explorerChild);
}

#endif