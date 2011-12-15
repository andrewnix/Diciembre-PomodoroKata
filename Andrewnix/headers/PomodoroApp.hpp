/***************************************************************
 * Name:      PomodoroApp.h
 * Purpose:   Defines Application Class
 * Author:    andres cardenas (akardenasjimenez@gmail.com)
 * Created:   2011-12-15
 * Copyright: andres cardenas (http://andrewnix.wordpres.com)
 * License:
 **************************************************************/

#ifndef POMODOROAPP_H
#define POMODOROAPP_H

#include <wx/app.h>

class PomodoroApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // POMODOROAPP_H
