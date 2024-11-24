#define UNICODE
#define _UNICODE
#define WIN32_LEAN_AND_MEAN

#include <iostream>
#include <Windows.h>
#include <WinUser.h>
#include "earthrise/earthrise_update.h"
#pragma comment(lib,"User32.lib")
#pragma comment(lib, "WinSparkle.lib")

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    MessageBox(NULL, L"Hello World!", L"Title", MB_OK);
    earthrise_updater_init();
    return 0;
}