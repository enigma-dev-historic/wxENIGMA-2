/***************************************************************
 * Name:      wxENIGMAApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2017-09-02
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wxENIGMAApp.h"

//(*AppHeaders
#include "MainFrame.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(wxENIGMAApp);

bool wxENIGMAApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	MainFrame* Frame = new MainFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
