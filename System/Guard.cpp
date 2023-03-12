//---------------------------------------------------------------------------
#include "AgdStudio.pch.h"
#pragma hdrstop
#include "System/Guard.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
__fastcall Guard::Guard(bool& flag)
: m_Flag(flag)
{
    m_Flag = true;
}
//---------------------------------------------------------------------------
__fastcall Guard::~Guard()
{
    m_Flag = false;
}
//---------------------------------------------------------------------------
