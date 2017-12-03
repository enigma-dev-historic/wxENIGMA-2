/***************************************************************
 * Name:      MainFrame.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2017-09-02
 * Copyright:  ()
 * License:
 **************************************************************/

#include "MainFrame.h"
#include "dialogs/PreferencesDialog.h"
#include "editors/PathEditor.h"
#include "editors/ObjectEditor.h"
#include <wx/utils.h>
#include <wx/msgdlg.h>

//(*InternalHeaders(MainFrame)
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(MainFrame)
const long MainFrame::ID_SEARCHCTRL1 = wxNewId();
const long MainFrame::ID_TREECTRL1 = wxNewId();
const long MainFrame::ID_PANEL1 = wxNewId();
const long MainFrame::ID_PANEL3 = wxNewId();
const long MainFrame::ID_AUINOTEBOOK1 = wxNewId();
const long MainFrame::ID_MENUITEM1 = wxNewId();
const long MainFrame::ID_MENUITEM2 = wxNewId();
const long MainFrame::ID_MENUITEM3 = wxNewId();
const long MainFrame::ID_MENUITEM4 = wxNewId();
const long MainFrame::ID_MENUITEM5 = wxNewId();
const long MainFrame::idMenuExit = wxNewId();
const long MainFrame::ID_MENUITEM6 = wxNewId();
const long MainFrame::ID_MENUITEM7 = wxNewId();
const long MainFrame::ID_MENUITEM8 = wxNewId();
const long MainFrame::ID_MENUITEM9 = wxNewId();
const long MainFrame::ID_MENUITEM10 = wxNewId();
const long MainFrame::ID_MENUITEM11 = wxNewId();
const long MainFrame::ID_MENUITEM12 = wxNewId();
const long MainFrame::ID_MENUITEM13 = wxNewId();
const long MainFrame::ID_MENUITEM14 = wxNewId();
const long MainFrame::idMenuAbout = wxNewId();
const long MainFrame::ID_STATUSBAR1 = wxNewId();
const long MainFrame::ID_TOOLBARITEM1 = wxNewId();
const long MainFrame::ID_TOOLBARITEM2 = wxNewId();
const long MainFrame::ID_TOOLBARITEM3 = wxNewId();
const long MainFrame::ID_TOOLBARITEM4 = wxNewId();
const long MainFrame::ID_TOOLBARITEM5 = wxNewId();
const long MainFrame::ID_TOOLBARITEM6 = wxNewId();
const long MainFrame::ID_TOOLBARITEM7 = wxNewId();
const long MainFrame::ID_TOOLBARITEM8 = wxNewId();
const long MainFrame::ID_TOOLBARITEM9 = wxNewId();
const long MainFrame::ID_TOOLBARITEM10 = wxNewId();
const long MainFrame::ID_TOOLBARITEM11 = wxNewId();
const long MainFrame::ID_TOOLBARITEM12 = wxNewId();
const long MainFrame::ID_TOOLBARITEM13 = wxNewId();
const long MainFrame::ID_TOOLBARITEM14 = wxNewId();
const long MainFrame::ID_TOOLBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(MainFrame,wxMDIParentFrame)
    //(*EventTable(MainFrame)
    //*)
END_EVENT_TABLE()

MainFrame::MainFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(MainFrame)
    wxMenuItem* exitMenuItem;
    wxBoxSizer* projectSearchSizer;
    wxMenuItem* aboutMenuItem;
    wxMenu* helpMenu;
    wxMenu* fileMenu;
    wxBoxSizer* projectTreeSizer;
    wxMenuBar* mainMenuBar;

    Create(parent, wxID_ANY, _("ENIGMA"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxVSCROLL|wxHSCROLL, _T("wxID_ANY"));
    SetClientSize(wxSize(1200,800));
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxICON(aaaa));
    	SetIcon(FrameIcon);
    }
    mainAuiManager = new wxAuiManager(this, wxAUI_MGR_DEFAULT);
    workspaceAuiNotebook = new wxAuiNotebook(this, ID_AUINOTEBOOK1, wxDefaultPosition, wxSize(311,581), wxAUI_NB_DEFAULT_STYLE);
    projectTreePanel = new wxPanel(workspaceAuiNotebook, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    projectTreeSizer = new wxBoxSizer(wxVERTICAL);
    projectSearchSizer = new wxBoxSizer(wxHORIZONTAL);
    projectSearchCtrl = new wxSearchCtrl(projectTreePanel, ID_SEARCHCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SEARCHCTRL1"));
    projectSearchSizer->Add(projectSearchCtrl, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    projectTreeSizer->Add(projectSearchSizer, 0, wxALL|wxEXPAND, 5);
    projectTreeCtrl = new wxTreeCtrl(projectTreePanel, ID_TREECTRL1, wxDefaultPosition, wxDefaultSize, wxTR_HIDE_ROOT|wxTR_DEFAULT_STYLE, wxDefaultValidator, _T("ID_TREECTRL1"));
    wxTreeItemId projectTreeCtrl_Item1 = projectTreeCtrl->AddRoot(_T("root"));
    wxTreeItemId projectTreeCtrl_Item2 = projectTreeCtrl->AppendItem(projectTreeCtrl_Item1, _T("Sprites"));
    wxTreeItemId projectTreeCtrl_Item3 = projectTreeCtrl->AppendItem(projectTreeCtrl_Item1, _T("Sounds"));
    wxTreeItemId projectTreeCtrl_Item4 = projectTreeCtrl->AppendItem(projectTreeCtrl_Item1, _T("Backgrounds"));
    wxTreeItemId projectTreeCtrl_Item5 = projectTreeCtrl->AppendItem(projectTreeCtrl_Item1, _T("Paths"));
    wxTreeItemId projectTreeCtrl_Item6 = projectTreeCtrl->AppendItem(projectTreeCtrl_Item1, _T("Scripts"));
    wxTreeItemId projectTreeCtrl_Item7 = projectTreeCtrl->AppendItem(projectTreeCtrl_Item1, _T("Shaders"));
    wxTreeItemId projectTreeCtrl_Item8 = projectTreeCtrl->AppendItem(projectTreeCtrl_Item1, _T("Fonts"));
    wxTreeItemId projectTreeCtrl_Item9 = projectTreeCtrl->AppendItem(projectTreeCtrl_Item1, _T("Timelines"));
    wxTreeItemId projectTreeCtrl_Item10 = projectTreeCtrl->AppendItem(projectTreeCtrl_Item1, _T("Objects"));
    wxTreeItemId projectTreeCtrl_Item11 = projectTreeCtrl->AppendItem(projectTreeCtrl_Item1, _T("Rooms"));
    projectTreeCtrl->ScrollTo(projectTreeCtrl_Item2);
    projectTreeSizer->Add(projectTreeCtrl, 1, wxALL|wxEXPAND, 5);
    projectTreePanel->SetSizer(projectTreeSizer);
    projectTreeSizer->Fit(projectTreePanel);
    projectTreeSizer->SetSizeHints(projectTreePanel);
    searchPanel = new wxPanel(workspaceAuiNotebook, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
    workspaceAuiNotebook->AddPage(projectTreePanel, _("Project"));
    workspaceAuiNotebook->AddPage(searchPanel, _("Search"));
    mainAuiManager->AddPane(workspaceAuiNotebook, wxAuiPaneInfo().Name(_T("workspacePane")).DefaultPane().Caption(_("Workspace")).CaptionVisible().Left().BestSize(wxSize(311,581)).DestroyOnClose());
    mainAuiManager->Update();
    mainMenuBar = new wxMenuBar();
    fileMenu = new wxMenu();
    newMenuItem = new wxMenuItem(fileMenu, ID_MENUITEM1, _("&New\tCtrl+N"), wxEmptyString, wxITEM_NORMAL);
    newMenuItem->SetBitmap(wxBitmap(wxImage(_T("Calico\\actions\\new.png"))));
    fileMenu->Append(newMenuItem);
    openMenuItem = new wxMenuItem(fileMenu, ID_MENUITEM2, _("&Open\tCtrl+O"), wxEmptyString, wxITEM_NORMAL);
    openMenuItem->SetBitmap(wxBitmap(wxImage(_T("Calico\\actions\\open.png"))));
    fileMenu->Append(openMenuItem);
    fileMenu->AppendSeparator();
    saveMenuItem = new wxMenuItem(fileMenu, ID_MENUITEM3, _("&Save\tCtrl+S"), wxEmptyString, wxITEM_NORMAL);
    saveMenuItem->SetBitmap(wxBitmap(wxImage(_T("Calico\\actions\\save.png"))));
    fileMenu->Append(saveMenuItem);
    saveAllMenuItem = new wxMenuItem(fileMenu, ID_MENUITEM4, _("Save &All"), wxEmptyString, wxITEM_NORMAL);
    saveAllMenuItem->SetBitmap(wxBitmap(wxImage(_T("Calico\\actions\\save-all.png"))));
    fileMenu->Append(saveAllMenuItem);
    fileMenu->AppendSeparator();
    preferencesMenuItem = new wxMenuItem(fileMenu, ID_MENUITEM5, _("&Preferences\tCtrl+Shift+P"), wxEmptyString, wxITEM_NORMAL);
    preferencesMenuItem->SetBitmap(wxBitmap(wxImage(_T("Calico\\actions\\preferences.png"))));
    fileMenu->Append(preferencesMenuItem);
    fileMenu->AppendSeparator();
    exitMenuItem = new wxMenuItem(fileMenu, idMenuExit, _("E&xit\tAlt+F4"), _("Quit the application"), wxITEM_NORMAL);
    exitMenuItem->SetBitmap(wxBitmap(wxImage(_T("Calico\\actions\\cancel.png"))));
    fileMenu->Append(exitMenuItem);
    mainMenuBar->Append(fileMenu, _("&File"));
    buildMenu = new wxMenu();
    runMenuItem = new wxMenuItem(buildMenu, ID_MENUITEM6, _("&Run\tF5"), wxEmptyString, wxITEM_NORMAL);
    runMenuItem->SetBitmap(wxBitmap(wxImage(_T("Calico/actions/run.png"))));
    buildMenu->Append(runMenuItem);
    debugMenuItem = new wxMenuItem(buildMenu, ID_MENUITEM7, _("&Debug\tF6"), wxEmptyString, wxITEM_NORMAL);
    debugMenuItem->SetBitmap(wxBitmap(wxImage(_T("Calico/actions/debug.png"))));
    buildMenu->Append(debugMenuItem);
    createExecutableMenuItem = new wxMenuItem(buildMenu, ID_MENUITEM8, _("Create &Executable\tF8"), wxEmptyString, wxITEM_NORMAL);
    createExecutableMenuItem->SetBitmap(wxBitmap(wxImage(_T("Calico/actions/compile.png"))));
    buildMenu->Append(createExecutableMenuItem);
    mainMenuBar->Append(buildMenu, _("&Build"));
    editMenu = new wxMenu();
    mainMenuBar->Append(editMenu, _("&Edit"));
    resourcesMenu = new wxMenu();
    mainMenuBar->Append(resourcesMenu, _("&Resources"));
    helpMenu = new wxMenu();
    documentationMenuItem = new wxMenuItem(helpMenu, ID_MENUITEM9, _("&Documentation\tF1"), wxEmptyString, wxITEM_NORMAL);
    documentationMenuItem->SetBitmap(wxBitmap(wxImage(_T("Calico\\actions\\manual.png"))));
    helpMenu->Append(documentationMenuItem);
    helpMenu->AppendSeparator();
    websiteMenuItem = new wxMenuItem(helpMenu, ID_MENUITEM10, _("&Website"), wxEmptyString, wxITEM_NORMAL);
    websiteMenuItem->SetBitmap(wxBitmap(wxImage(_T("Calico\\actions\\world.png"))));
    helpMenu->Append(websiteMenuItem);
    communityMenuItem = new wxMenuItem(helpMenu, ID_MENUITEM11, _("&Community"), wxEmptyString, wxITEM_NORMAL);
    communityMenuItem->SetBitmap(wxBitmap(wxImage(_T("Calico\\actions\\people.png"))));
    helpMenu->Append(communityMenuItem);
    submitIssueMenuItem = new wxMenuItem(helpMenu, ID_MENUITEM12, _("Submit &Issue"), wxEmptyString, wxITEM_NORMAL);
    submitIssueMenuItem->SetBitmap(wxBitmap(wxImage(_T("Calico\\actions\\tag.png"))));
    helpMenu->Append(submitIssueMenuItem);
    helpMenu->AppendSeparator();
    exploreENIGMAMenuItem = new wxMenuItem(helpMenu, ID_MENUITEM13, _("Explore &ENIGMA\tCtrl+Alt+O"), wxEmptyString, wxITEM_NORMAL);
    helpMenu->Append(exploreENIGMAMenuItem);
    exploreProjectMenuItem = new wxMenuItem(helpMenu, ID_MENUITEM14, _("Explore &Project\tCtrl+Alt+P"), wxEmptyString, wxITEM_NORMAL);
    helpMenu->Append(exploreProjectMenuItem);
    helpMenu->AppendSeparator();
    aboutMenuItem = new wxMenuItem(helpMenu, idMenuAbout, _("&About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    aboutMenuItem->SetBitmap(wxBitmap(wxImage(_T("Calico\\actions\\help.png"))));
    helpMenu->Append(aboutMenuItem);
    mainMenuBar->Append(helpMenu, _("&Help"));
    SetMenuBar(mainMenuBar);
    mainStatusBar = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_FLAT };
    mainStatusBar->SetFieldsCount(1,__wxStatusBarWidths_1);
    mainStatusBar->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(mainStatusBar);
    mainToolBar = new wxToolBar(this, ID_TOOLBAR1, wxDefaultPosition, wxDefaultSize, wxTB_FLAT|wxTB_HORIZONTAL|wxNO_BORDER, _T("ID_TOOLBAR1"));
    mainToolBar->SetToolBitmapSize(wxSize(24,24));
    ToolBarItem1 = mainToolBar->AddTool(ID_TOOLBARITEM1, _("New"), wxBitmap(wxImage(_T("Calico/actions/new.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    ToolBarItem2 = mainToolBar->AddTool(ID_TOOLBARITEM2, _("Open"), wxBitmap(wxImage(_T("Calico\\actions\\open.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    ToolBarItem3 = mainToolBar->AddTool(ID_TOOLBARITEM3, _("Save"), wxBitmap(wxImage(_T("Calico\\actions\\save.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    ToolBarItem4 = mainToolBar->AddTool(ID_TOOLBARITEM4, _("Save All"), wxBitmap(wxImage(_T("Calico\\actions\\save-all.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    mainToolBar->AddSeparator();
    ToolBarItem5 = mainToolBar->AddTool(ID_TOOLBARITEM5, _("Add Sprite"), wxBitmap(wxImage(_T("Calico\\restree\\sprite.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    ToolBarItem6 = mainToolBar->AddTool(ID_TOOLBARITEM6, _("Add Sound"), wxBitmap(wxImage(_T("Calico\\restree\\sound.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    ToolBarItem7 = mainToolBar->AddTool(ID_TOOLBARITEM7, _("Add Background"), wxBitmap(wxImage(_T("Calico\\restree\\background.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    ToolBarItem8 = mainToolBar->AddTool(ID_TOOLBARITEM8, _("Add Path"), wxBitmap(wxImage(_T("Calico\\restree\\path.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    ToolBarItem9 = mainToolBar->AddTool(ID_TOOLBARITEM9, _("Add Script"), wxBitmap(wxImage(_T("Calico\\restree\\script.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    ToolBarItem10 = mainToolBar->AddTool(ID_TOOLBARITEM10, _("Add Shader"), wxBitmap(wxImage(_T("Calico\\restree\\shader.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    ToolBarItem11 = mainToolBar->AddTool(ID_TOOLBARITEM11, _("Add Font"), wxBitmap(wxImage(_T("Calico\\restree\\font.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    ToolBarItem12 = mainToolBar->AddTool(ID_TOOLBARITEM12, _("Add Timeline"), wxBitmap(wxImage(_T("Calico\\restree\\timeline.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    ToolBarItem13 = mainToolBar->AddTool(ID_TOOLBARITEM13, _("Add Object"), wxBitmap(wxImage(_T("Calico\\restree\\object.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    ToolBarItem14 = mainToolBar->AddTool(ID_TOOLBARITEM14, _("Add Room"), wxBitmap(wxImage(_T("Calico\\restree\\room.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    mainToolBar->Realize();
    SetToolBar(mainToolBar);
    Center();

    Connect(ID_MENUITEM5,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&MainFrame::OnShowPreferences);
    Connect(idMenuExit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&MainFrame::OnQuit);
    Connect(ID_MENUITEM9,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&MainFrame::OnShowDocumentation);
    Connect(ID_MENUITEM10,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&MainFrame::OnShowWebsite);
    Connect(ID_MENUITEM11,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&MainFrame::OnShowCommunity);
    Connect(ID_MENUITEM12,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&MainFrame::OnSubmitIssue);
    Connect(ID_MENUITEM13,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&MainFrame::OnExploreENIGMA);
    Connect(ID_MENUITEM14,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&MainFrame::OnExploreProject);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&MainFrame::OnAbout);
    Connect(ID_TOOLBARITEM13,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&MainFrame::OnToolBarItem13Clicked);
    //*)
}

MainFrame::~MainFrame()
{
    //(*Destroy(MainFrame)
    //*)
    mainAuiManager->UnInit();
}

void MainFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void MainFrame::OpenEditor(wxPanel* panel) {

}

void MainFrame::OnToolBarItem13Clicked(wxCommandEvent& event)
{
    wxMDIChildFrame* editorFrame = new wxMDIChildFrame(this, wxID_ANY, "obj_0");
    ObjectEditor* editor = new ObjectEditor(editorFrame);
    wxBoxSizer* editorSizer = new wxBoxSizer(wxHORIZONTAL);
    editorSizer->Add(editor, 1, wxALL|wxEXPAND, 0);
    editorFrame->SetSizer(editorSizer);
    editorFrame->Fit();
    editorFrame->Show();
}

void MainFrame::OnShowPreferences(wxCommandEvent& event)
{
    PreferencesDialog preferencesDialog(this);
    preferencesDialog.ShowModal();
}

void MainFrame::OnShowDocumentation(wxCommandEvent& event)
{
    wxLaunchDefaultApplication("http://enigma-dev.org/docs/Wiki/Main_Page");
}

void MainFrame::OnShowWebsite(wxCommandEvent& event)
{
    wxLaunchDefaultApplication("http://enigma-dev.org");
}

void MainFrame::OnShowCommunity(wxCommandEvent& event)
{
    wxLaunchDefaultApplication("http://enigma-dev.org/forums/");
}

void MainFrame::OnSubmitIssue(wxCommandEvent& event)
{
    wxLaunchDefaultApplication("http://github.com/enigma-dev/wxENIGMA");
}

void MainFrame::OnExploreENIGMA(wxCommandEvent& event)
{
    wxLaunchDefaultApplication(".");
}

void MainFrame::OnExploreProject(wxCommandEvent& event)
{

}

void MainFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
