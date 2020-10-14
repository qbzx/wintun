/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright (C) 2018-2020 WireGuard LLC. All Rights Reserved.
 */

#pragma once

#include <Windows.h>

#ifndef __L
#    define __L(x) L##x
#endif
#ifndef _L
#    define _L(x) __L(x)
#endif

typedef _Return_type_success_(return == ERROR_SUCCESS) DWORD WINTUN_STATUS;

extern HINSTANCE ResourceModule;

WINTUN_STATUS WINAPI
WintunGetVersion(
    _Out_ DWORD *DriverVersionMaj,
    _Out_ DWORD *DriverVersionMin,
    _Out_ DWORD *NdisVersionMaj,
    _Out_ DWORD *NdisVersionMin);