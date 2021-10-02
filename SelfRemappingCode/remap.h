#pragma once

#include <Windows.h>

//=============================================================================
// Public Interface
//=============================================================================
_Check_return_
BOOL
RmpRemapImage(
    _In_ ULONG_PTR ImageBase
);

BOOL Relocation(_In_ UINT_PTR LocationDelta, _In_ UCHAR* pCode, _In_ PIMAGE_DOS_HEADER pDosHeader);