/***************************************************************
 * Name:      MainFrame.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2017-09-02
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef MAINFRAME_H
#define MAINFRAME_H

//(*Headers(MainFrame)
#include <wx/srchctrl.h>
#include <wx/treectrl.h>
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/aui/aui.h>
#include <wx/toolbar.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

#include <wx/mdi.h>
#include <wx/panel.h>

class MainFrame: public wxMDIParentFrame
{
    public:

        MainFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~MainFrame();

    private:

        void OpenEditor(wxPanel* panel);

        //(*Handlers(MainFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnToolBarItem13Clicked(wxCommandEvent& event);
        void OnShowPreferences(wxCommandEvent& event);
        void OnShowDocumentation(wxCommandEvent& event);
        void OnShowWebsite(wxCommandEvent& event);
        void OnShowCommunity(wxCommandEvent& event);
        void OnSubmitIssue(wxCommandEvent& event);
        void OnExploreENIGMA(wxCommandEvent& event);
        void OnExploreProject(wxCommandEvent& event);
        //*)

        //(*Identifiers(MainFrame)
        static const long ID_SEARCHCTRL1;
        static const long ID_TREECTRL1;
        static const long ID_PANEL1;
        static const long ID_PANEL3;
        static const long ID_AUINOTEBOOK1;
        static const long ID_MENUITEM1;
        static const long ID_MENUITEM2;
        static const long ID_MENUITEM3;
        static const long ID_MENUITEM4;
        static const long ID_MENUITEM5;
        static const long idMenuExit;
        static const long ID_MENUITEM6;
        static const long ID_MENUITEM7;
        static const long ID_MENUITEM8;
        static const long ID_MENUITEM9;
        static const long ID_MENUITEM10;
        static const long ID_MENUITEM11;
        static const long ID_MENUITEM12;
        static const long ID_MENUITEM13;
        static const long ID_MENUITEM14;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        static const long ID_TOOLBARITEM1;
        static const long ID_TOOLBARITEM2;
        static const long ID_TOOLBARITEM3;
        static const long ID_TOOLBARITEM4;
        static const long ID_TOOLBARITEM5;
        static const long ID_TOOLBARITEM6;
        static const long ID_TOOLBARITEM7;
        static const long ID_TOOLBARITEM8;
        static const long ID_TOOLBARITEM9;
        static const long ID_TOOLBARITEM10;
        static const long ID_TOOLBARITEM11;
        static const long ID_TOOLBARITEM12;
        static const long ID_TOOLBARITEM13;
        static const long ID_TOOLBARITEM14;
        static const long ID_TOOLBAR1;
        //*)

        //(*Declarations(MainFrame)
        wxToolBarToolBase* ToolBarItem4;
        wxMenu* buildMenu;
        wxMenuItem* newMenuItem;
        wxToolBarToolBase* ToolBarItem9;
        wxToolBarToolBase* ToolBarItem3;
        wxToolBarToolBase* ToolBarItem12;
        wxMenuItem* websiteMenuItem;
        wxToolBarToolBase* ToolBarItem11;
        wxMenuItem* saveAllMenuItem;
        wxAuiManager* mainAuiManager;
        wxMenuItem* openMenuItem;
        wxToolBarToolBase* ToolBarItem10;
        wxAuiNotebook* workspaceAuiNotebook;
        wxMenuItem* preferencesMenuItem;
        wxMenuItem* exploreENIGMAMenuItem;
        wxSearchCtrl* projectSearchCtrl;
        wxToolBarToolBase* ToolBarItem6;
        wxToolBarToolBase* ToolBarItem13;
        wxTreeCtrl* projectTreeCtrl;
        wxToolBarToolBase* ToolBarItem1;
        wxMenuItem* debugMenuItem;
        wxMenuItem* exploreProjectMenuItem;
        wxMenuItem* saveMenuItem;
        wxToolBarToolBase* ToolBarItem14;
        wxMenu* editMenu;
        wxStatusBar* mainStatusBar;
        wxMenu* resourcesMenu;
        wxToolBarToolBase* ToolBarItem5;
        wxToolBar* mainToolBar;
        wxToolBarToolBase* ToolBarItem8;
        wxMenuItem* createExecutableMenuItem;
        wxPanel* projectTreePanel;
        wxMenuItem* documentationMenuItem;
        wxMenuItem* communityMenuItem;
        wxPanel* searchPanel;
        wxToolBarToolBase* ToolBarItem2;
        wxMenuItem* submitIssueMenuItem;
        wxMenuItem* runMenuItem;
        wxToolBarToolBase* ToolBarItem7;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // MAINFRAME_H
