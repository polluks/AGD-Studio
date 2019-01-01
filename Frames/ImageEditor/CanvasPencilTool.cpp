//---------------------------------------------------------------------------
#include "agdx.pch.h"
//---------------------------------------------------------------------------
#include "CanvasPencilTool.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
__fastcall CanvasPencilTool::CanvasPencilTool()
{
    Flags = usesUndo | modifies;
}
//---------------------------------------------------------------------------
__fastcall CanvasPencilTool::~CanvasPencilTool()
{
}
//---------------------------------------------------------------------------
void __fastcall CanvasPencilTool::Apply(Agdx::GraphicsBuffer& canvas, const TPoint& pt)
{
    if (IsLeftDown())
    {
        DrawLine(canvas, TRect(LastPt.X, LastPt.Y, pt.X, pt.Y), true);
    }
    else if (IsRightDown())
    {
        DrawLine(canvas, TRect(LastPt.X, LastPt.Y, pt.X, pt.Y), false);
    }
}
//---------------------------------------------------------------------------

