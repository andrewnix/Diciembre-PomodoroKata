/***************************************************************
 * Name:      PomodoroApp.cpp
 * Purpose:   Code for Application Class
 * Author:    andres cardenas (akardenasjimenez@gmail.com)
 * Created:   2011-12-15
 * Copyright: andres cardenas (http://andrewnix.wordpres.com)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "headers/PomodoroApp.hpp"
#include "headers/PomodoroMain.hpp"

IMPLEMENT_APP(PomodoroApp);

bool PomodoroApp::OnInit()
{
    PomodoroFrame* frame = new PomodoroFrame(0L, _("wxWidgets Application Template"));
    
    frame->Show();
    
    return true;
}
