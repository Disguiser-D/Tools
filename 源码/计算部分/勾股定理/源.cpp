case WM_DEVICECHANGE:
	if (DBT_DEVICEARRIVAL == wParam)
	{
		WCHAR wszMsg[40];
		PDEV_BROADCAST_HDR lpdb = (PDEV_BROADCAST_HDR)lParam;
		PDEV_BROADCAST_VOLUME lpdbv = (PDEV_BROADCAST_VOLUME)lpdb;
		wprintf(wszMsg, _T("Drive %c: Media has arrived.\n"), GetDeviceMask(lpdbv->dbcv_unitmask));
		MessageBox(NULL, wszMsg, _T("The U-Disk"), MB_OK);
	}
 } return FALSE;
}WCHAR GetDeviceMask(ULONG unitmask)
{
	WCHAR i = 0;
	for (i = 0; i<26; ++i)
	{
		if (unitmask & 0x1)
		{
			break;
		}
		unitmask >>= 1;
	}
	return i + _T('A');
}