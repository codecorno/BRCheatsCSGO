#include <Windows.h>
#include <clocale>

#include "Hooks.h"

extern "C" BOOL WINAPI _CRT_INIT(HMODULE moduleHandle, DWORD reason, LPVOID reserved);

BOOL APIENTRY DllEntryPoint(HMODULE moduleHandle, DWORD reason, LPVOID reserved)
{
    if (!_CRT_INIT(moduleHandle, reason, reserved))
        return FALSE;

    if (reason == DLL_PROCESS_ATTACH) {
        hooks = std::make_unique<Hooks>(moduleHandle);
        std::setlocale(LC_ALL, ".utf8");
    }

    return TRUE;
}
