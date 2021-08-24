#include <Windows.h>
#include "pragmas.h"

void * WINAPI K31_AddVectoredExceptionHandler(
    ULONG first, void *pHandler
) {
    (first, pHandler);
    return NULL;
}

ULONG WINAPI K31_RemoveVectoredExceptionHandler(
    void *pHandler
) {
    (pHandler);
    return 0;
}

BOOL WINAPI K31_CheckRemoteDebuggerPresent(
    HANDLE hProcess, BOOL *pbDebuggerPresent
) {
    (hProcess);
    *pbDebuggerPresent = FALSE;
    return TRUE;
}

BOOL WINAPI K31_GetModuleHandleExA(
    DWORD dwFlags, LPCSTR lpModuleName, HMODULE *phModule
) {
    (dwFlags);
    if (lpModuleName && phModule) {
        *phModule = GetModuleHandle(lpModuleName);
        return TRUE;
    }
    return FALSE;
}
