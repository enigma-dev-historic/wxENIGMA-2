#include "PreferencesDialog.h"

//(*InternalHeaders(PreferencesDialog)
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/button.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(PreferencesDialog)
const long PreferencesDialog::ID_STATICTEXT5 = wxNewId();
const long PreferencesDialog::ID_TEXTCTRL5 = wxNewId();
const long PreferencesDialog::ID_BITMAPBUTTON5 = wxNewId();
const long PreferencesDialog::ID_STATICTEXT6 = wxNewId();
const long PreferencesDialog::ID_TEXTCTRL6 = wxNewId();
const long PreferencesDialog::ID_BITMAPBUTTON6 = wxNewId();
const long PreferencesDialog::ID_STATICTEXT7 = wxNewId();
const long PreferencesDialog::ID_TEXTCTRL7 = wxNewId();
const long PreferencesDialog::ID_BITMAPBUTTON7 = wxNewId();
const long PreferencesDialog::ID_STATICTEXT8 = wxNewId();
const long PreferencesDialog::ID_TEXTCTRL8 = wxNewId();
const long PreferencesDialog::ID_BITMAPBUTTON8 = wxNewId();
const long PreferencesDialog::ID_PANEL1 = wxNewId();
const long PreferencesDialog::ID_PANEL2 = wxNewId();
const long PreferencesDialog::ID_PANEL3 = wxNewId();
const long PreferencesDialog::ID_TREEBOOK1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(PreferencesDialog,wxDialog)
	//(*EventTable(PreferencesDialog)
	//*)
END_EVENT_TABLE()

PreferencesDialog::PreferencesDialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(PreferencesDialog)
	wxBoxSizer* BoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;
	wxStdDialogButtonSizer* StdDialogButtonSizer1;

	Create(parent, wxID_ANY, _("Preferences"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	Treebook1 = new wxTreebook(this, ID_TREEBOOK1, wxDefaultPosition, wxSize(800,600), wxBK_DEFAULT, _T("ID_TREEBOOK1"));
	Panel1 = new wxPanel(Treebook1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	FlexGridSizer1 = new wxFlexGridSizer(0, 3, 5, 5);
	FlexGridSizer1->AddGrowableCol(1);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Documentation URI"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	FlexGridSizer1->Add(StaticText5, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
	TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, _("http://enigma-dev.org/docs/Wiki/Main_Page"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	FlexGridSizer1->Add(TextCtrl5, 1, wxALL|wxEXPAND, 0);
	BitmapButton5 = new wxBitmapButton(Panel1, ID_BITMAPBUTTON5, wxBitmap(wxImage(_T("Calico\\actions\\open.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
	FlexGridSizer1->Add(BitmapButton5, 0, wxALL, 0);
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Website URI"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	FlexGridSizer1->Add(StaticText6, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
	TextCtrl6 = new wxTextCtrl(Panel1, ID_TEXTCTRL6, _("http://enigma-dev.org"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	FlexGridSizer1->Add(TextCtrl6, 1, wxALL|wxEXPAND, 0);
	BitmapButton6 = new wxBitmapButton(Panel1, ID_BITMAPBUTTON6, wxBitmap(wxImage(_T("Calico\\actions\\open.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
	FlexGridSizer1->Add(BitmapButton6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Community URI"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	FlexGridSizer1->Add(StaticText7, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
	TextCtrl7 = new wxTextCtrl(Panel1, ID_TEXTCTRL7, _("http://enigma-dev.org/forums/"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	FlexGridSizer1->Add(TextCtrl7, 1, wxALL|wxEXPAND, 0);
	BitmapButton7 = new wxBitmapButton(Panel1, ID_BITMAPBUTTON7, wxBitmap(wxImage(_T("Calico\\actions\\open.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON7"));
	FlexGridSizer1->Add(BitmapButton7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText8 = new wxStaticText(Panel1, ID_STATICTEXT8, _("Submit Issue URI"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	FlexGridSizer1->Add(StaticText8, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
	TextCtrl8 = new wxTextCtrl(Panel1, ID_TEXTCTRL8, _("http://github.com/enigma-dev/wxENIGMA/issues"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	FlexGridSizer1->Add(TextCtrl8, 1, wxALL|wxEXPAND, 0);
	BitmapButton8 = new wxBitmapButton(Panel1, ID_BITMAPBUTTON8, wxBitmap(wxImage(_T("Calico\\actions\\open.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON8"));
	FlexGridSizer1->Add(BitmapButton8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Panel1->SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(Panel1);
	FlexGridSizer1->SetSizeHints(Panel1);
	Panel2 = new wxPanel(Treebook1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	Panel3 = new wxPanel(Treebook1, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	Treebook1->AddPage(Panel1, _("General"), true);
	Treebook1->AddPage(Panel2, _("Appearance"), false);
	Treebook1->AddPage(Panel3, _("External Editors"), false);
	BoxSizer1->Add(Treebook1, 1, wxALL|wxEXPAND, 5);
	StdDialogButtonSizer1 = new wxStdDialogButtonSizer();
	StdDialogButtonSizer1->AddButton(new wxButton(this, wxID_OK, wxEmptyString));
	StdDialogButtonSizer1->AddButton(new wxButton(this, wxID_CANCEL, wxEmptyString));
	StdDialogButtonSizer1->AddButton(new wxButton(this, wxID_APPLY, wxEmptyString));
	StdDialogButtonSizer1->Realize();
	BoxSizer1->Add(StdDialogButtonSizer1, 0, wxBOTTOM|wxEXPAND, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();
	//*)
}

PreferencesDialog::~PreferencesDialog()
{
	//(*Destroy(PreferencesDialog)
	//*)
}

