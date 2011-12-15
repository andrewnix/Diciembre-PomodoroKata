/***************************************************************
 * Name:      PomodoroMain.h
 * Purpose:   Defines Application Frame
 * Author:    andres cardenas (akardenasjimenez@gmail.com)
 * Created:   2011-12-15
 * Copyright: andres cardenas (http://andrewnix.wordpres.com)
 * License:
 **************************************************************/

#ifndef POMODOROMAIN_H
#define POMODOROMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "PomodoroApp.hpp"

class PomodoroFrame: public wxFrame
{
    public:
        PomodoroFrame(wxFrame *frame, const wxString& title);
        ~PomodoroFrame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // POMODOROMAIN_H
