#include <stdio.h>

#include "android_m_compat.h"

unsigned int avtab_android_m_compat;
unsigned int avtab_android_m_compat_vers;

void avtab_android_m_compat_set(void)
{
	avtab_android_m_compat = 1;
}

void avtab_android_m_compat_set_vers(unsigned int vers)
{
	avtab_android_m_compat_vers = vers;
}
