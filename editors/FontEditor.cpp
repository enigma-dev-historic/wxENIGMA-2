#include "FontEditor.h"

//(*InternalHeaders(FontEditor)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(FontEditor)
const long FontEditor::ID_STATICTEXT1 = wxNewId();
const long FontEditor::ID_TEXTCTRL1 = wxNewId();
const long FontEditor::ID_STATICTEXT2 = wxNewId();
const long FontEditor::ID_CHOICE1 = wxNewId();
const long FontEditor::ID_CHECKBOX4 = wxNewId();
const long FontEditor::ID_CHECKBOX5 = wxNewId();
const long FontEditor::ID_CHECKBOX6 = wxNewId();
const long FontEditor::ID_STATICTEXT3 = wxNewId();
const long FontEditor::ID_SPINCTRL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(FontEditor,wxPanel)
	//(*EventTable(FontEditor)
	//*)
END_EVENT_TABLE()

FontEditor::FontEditor(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(FontEditor)
	wxGridBagSizer* propertiesSizer;
	wxFlexGridSizer* checkBoxesSizer;

	Create(parent, wxID_ANY, wxDefaultPosition, wxSize(866,575), wxTAB_TRAVERSAL, _T("wxID_ANY"));
	propertiesSizer = new wxGridBagSizer(5, 5);
	nameLabel = new wxStaticText(this, ID_STATICTEXT1, _("Name"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	propertiesSizer->Add(nameLabel, wxGBPosition(0, 0), wxDefaultSpan, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
	nameTextCtrl = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	propertiesSizer->Add(nameTextCtrl, wxGBPosition(0, 1), wxDefaultSpan, wxALL|wxEXPAND, 0);
	familyLabel = new wxStaticText(this, ID_STATICTEXT2, _("Family"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	propertiesSizer->Add(familyLabel, wxGBPosition(1, 0), wxDefaultSpan, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
	familyChoice = new wxChoice(this, ID_CHOICE1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	propertiesSizer->Add(familyChoice, wxGBPosition(1, 1), wxDefaultSpan, wxALL|wxEXPAND, 0);
	checkBoxesSizer = new wxFlexGridSizer(0, 3, 5, 5);
	boldCheckBox = new wxCheckBox(this, ID_CHECKBOX4, _("Bold"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX4"));
	boldCheckBox->SetValue(false);
	checkBoxesSizer->Add(boldCheckBox, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	italicCheckBox = new wxCheckBox(this, ID_CHECKBOX5, _("Italic"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX5"));
	italicCheckBox->SetValue(false);
	checkBoxesSizer->Add(italicCheckBox, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	aaCheckBox = new wxCheckBox(this, ID_CHECKBOX6, _("Anti-alias"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX6"));
	aaCheckBox->SetValue(false);
	checkBoxesSizer->Add(aaCheckBox, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	propertiesSizer->Add(checkBoxesSizer, wxGBPosition(3, 0), wxGBSpan(1, 2), wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	sizeLabel = new wxStaticText(this, ID_STATICTEXT3, _("Size"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	propertiesSizer->Add(sizeLabel, wxGBPosition(2, 0), wxDefaultSpan, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
	sizeSpinCtrl = new wxSpinCtrl(this, ID_SPINCTRL1, _T("12"), wxDefaultPosition, wxDefaultSize, 0, 0, 100, 12, _T("ID_SPINCTRL1"));
	sizeSpinCtrl->SetValue(_T("12"));
	propertiesSizer->Add(sizeSpinCtrl, wxGBPosition(2, 1), wxDefaultSpan, wxALL|wxEXPAND, 0);
	SetSizer(propertiesSizer);
	SetSizer(propertiesSizer);
	Layout();
	//*)
}

FontEditor::~FontEditor()
{
	//(*Destroy(FontEditor)
	//*)
}

