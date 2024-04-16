/*
 * Copyright (C) 2010-2021 Ole André Vadla Ravnås <oleavr@nowsecure.com>
 *
 * Licence: wxWindows Library Licence, Version 3.1
 */

#ifndef __GUM_WINDOWS_H__
#define __GUM_WINDOWS_H__

#include "gumprocess.h"

#include <gum/gummemory.h>

#include <glib.h>
#ifndef WIN32_LEAN_AND_MEAN
# define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

G_BEGIN_DECLS

GUM_API GumAddress gum_windows_find_entrypoint (HANDLE process);
GUM_API void gum_windows_enumerate_threads (DWORD process_id,
    GumFoundThreadFunc func, gpointer user_data);
GUM_API void gum_windows_enumerate_modules (HANDLE process,
    GumFoundModuleFunc func, gpointer user_data);

GUM_API void gum_windows_parse_context (const CONTEXT * context,
    GumCpuContext * cpu_context);
GUM_API void gum_windows_unparse_context (const GumCpuContext * cpu_context,
    CONTEXT * context);

GUM_API GumPageProtection gum_page_protection_from_windows (DWORD native_prot);
GUM_API DWORD gum_page_protection_to_windows (GumPageProtection prot);

G_END_DECLS

#endif
