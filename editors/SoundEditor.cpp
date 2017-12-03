#include "SoundEditor.h"

//(*InternalHeaders(SoundEditor)
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(SoundEditor)
const long SoundEditor::ID_TEXTCTRL1 = wxNewId();
const long SoundEditor::ID_BITMAPBUTTON3 = wxNewId();
const long SoundEditor::ID_BITMAPBUTTON1 = wxNewId();
const long SoundEditor::ID_BITMAPBUTTON2 = wxNewId();
const long SoundEditor::ID_BITMAPBUTTON4 = wxNewId();
const long SoundEditor::ID_CHECKBOX1 = wxNewId();
const long SoundEditor::ID_CHECKBOX2 = wxNewId();
const long SoundEditor::ID_SLIDER1 = wxNewId();
const long SoundEditor::ID_SPINCTRL1 = wxNewId();
const long SoundEditor::ID_SLIDER2 = wxNewId();
const long SoundEditor::ID_STATICTEXT6 = wxNewId();
const long SoundEditor::ID_STATICTEXT2 = wxNewId();
const long SoundEditor::ID_CHOICE2 = wxNewId();
const long SoundEditor::ID_STATICTEXT3 = wxNewId();
const long SoundEditor::ID_CHOICE1 = wxNewId();
const long SoundEditor::ID_STATICTEXT4 = wxNewId();
const long SoundEditor::ID_CHOICE3 = wxNewId();
const long SoundEditor::ID_STATICTEXT5 = wxNewId();
const long SoundEditor::ID_CHOICE4 = wxNewId();
const long SoundEditor::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(SoundEditor,wxPanel)
	//(*EventTable(SoundEditor)
	//*)
END_EVENT_TABLE()

SoundEditor::SoundEditor(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(SoundEditor)
	wxBoxSizer* propertiesSizer;
	wxStaticBitmap* playbackBitmap;
	wxBoxSizer* volumeSizer;
	wxStaticBitmap* volumeBitmap;
	wxStaticText* nameLabel;
	wxBoxSizer* BoxSizer1;
	wxGridBagSizer* rootSizer;
	wxFlexGridSizer* targetSizer;
	wxBoxSizer* playbackSizer;

	Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	rootSizer = new wxGridBagSizer(5, 5);
	nameLabel = new wxStaticText(Panel1, wxID_ANY, _("Name"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
	rootSizer->Add(nameLabel, wxGBPosition(0, 0), wxDefaultSpan, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
	nameTextCtrl = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("snd_0"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	rootSizer->Add(nameTextCtrl, wxGBPosition(0, 1), wxDefaultSpan, wxALL|wxEXPAND, 0);
	propertiesSizer = new wxBoxSizer(wxHORIZONTAL);
	loadButton = new wxBitmapButton(Panel1, ID_BITMAPBUTTON3, wxBitmap(wxImage(_T("Calico\\actions\\open.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
	propertiesSizer->Add(loadButton, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	saveButton = new wxBitmapButton(Panel1, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("Calico\\actions\\save.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	propertiesSizer->Add(saveButton, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	editButton = new wxBitmapButton(Panel1, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("Calico\\actions\\edit.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
	propertiesSizer->Add(editButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	playButton = new wxBitmapButton(Panel1, ID_BITMAPBUTTON4, wxBitmap(wxImage(_T("Calico\\actions\\sound-play.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
	propertiesSizer->Add(playButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	compressesdCheckBox = new wxCheckBox(Panel1, ID_CHECKBOX1, _("Compressed"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
	compressesdCheckBox->SetValue(false);
	propertiesSizer->Add(compressesdCheckBox, 0, wxLEFT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	streamedCheckBox = new wxCheckBox(Panel1, ID_CHECKBOX2, _("Streamed"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX2"));
	streamedCheckBox->SetValue(false);
	propertiesSizer->Add(streamedCheckBox, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	rootSizer->Add(propertiesSizer, wxGBPosition(1, 0), wxGBSpan(1, 2), wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	volumeSizer = new wxBoxSizer(wxHORIZONTAL);
	volumeBitmap = new wxStaticBitmap(Panel1, wxID_ANY, wxBitmap(wxImage(_T("C:\\Users\\Owner\\Desktop\\Projects\\wxENIGMA\\Calico\\restree\\sound.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
	volumeSizer->Add(volumeBitmap, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	volumeSlider = new wxSlider(Panel1, ID_SLIDER1, 0, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER1"));
	volumeSizer->Add(volumeSlider, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	volumeSpinCtrl = new wxSpinCtrl(Panel1, ID_SPINCTRL1, _T("0"), wxDefaultPosition, wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL1"));
	volumeSpinCtrl->SetValue(_T("0"));
	volumeSizer->Add(volumeSpinCtrl, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	rootSizer->Add(volumeSizer, wxGBPosition(2, 0), wxGBSpan(1, 2), wxALL|wxEXPAND, 0);
	playbackSizer = new wxBoxSizer(wxHORIZONTAL);
	playbackBitmap = new wxStaticBitmap(Panel1, wxID_ANY, wxBitmap(wxImage(_T("Calico\\events\\alarm.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
	playbackSizer->Add(playbackBitmap, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	playbackSlider = new wxSlider(Panel1, ID_SLIDER2, 0, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER2"));
	playbackSizer->Add(playbackSlider, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	playbackLabel = new wxStaticText(Panel1, ID_STATICTEXT6, _("0.13 / 0.74s"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	playbackSizer->Add(playbackLabel, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	rootSizer->Add(playbackSizer, wxGBPosition(3, 0), wxGBSpan(1, 2), wxALL|wxEXPAND, 0);
	targetSizer = new wxFlexGridSizer(2, 4, 5, 5);
	outputLabel = new wxStaticText(Panel1, ID_STATICTEXT2, _("Output"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	targetSizer->Add(outputLabel, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
	outputChoice = new wxChoice(Panel1, ID_CHOICE2, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
	outputChoice->SetSelection( outputChoice->Append(_("Mono")) );
	outputChoice->Append(_("Stereo"));
	outputChoice->Append(_("3D"));
	targetSizer->Add(outputChoice, 1, wxALL|wxEXPAND, 0);
	sampleRateLabel = new wxStaticText(Panel1, ID_STATICTEXT3, _("Sample rate"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	targetSizer->Add(sampleRateLabel, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
	sampleRateChoice = new wxChoice(Panel1, ID_CHOICE1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	sampleRateChoice->Append(_("11025"));
	sampleRateChoice->Append(_("22050"));
	sampleRateChoice->Append(_("32000"));
	sampleRateChoice->SetSelection( sampleRateChoice->Append(_("44100")) );
	sampleRateChoice->Append(_("48000"));
	targetSizer->Add(sampleRateChoice, 1, wxALL|wxEXPAND, 0);
	qualityLabel = new wxStaticText(Panel1, ID_STATICTEXT4, _("Quality"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	targetSizer->Add(qualityLabel, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
	qualityChoice = new wxChoice(Panel1, ID_CHOICE3, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE3"));
	qualityChoice->Append(_("8 bit"));
	qualityChoice->SetSelection( qualityChoice->Append(_("16 bit")) );
	targetSizer->Add(qualityChoice, 1, wxALL|wxEXPAND, 0);
	bitRateLabel = new wxStaticText(Panel1, ID_STATICTEXT5, _("Bit rate"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	targetSizer->Add(bitRateLabel, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
	bitRateChoice = new wxChoice(Panel1, ID_CHOICE4, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE4"));
	bitRateChoice->Append(_("8"));
	bitRateChoice->Append(_("16"));
	bitRateChoice->Append(_("24"));
	bitRateChoice->Append(_("32"));
	bitRateChoice->Append(_("40"));
	bitRateChoice->Append(_("48"));
	bitRateChoice->Append(_("56"));
	bitRateChoice->Append(_("64"));
	bitRateChoice->Append(_("80"));
	bitRateChoice->Append(_("96"));
	bitRateChoice->Append(_("112"));
	bitRateChoice->SetSelection( bitRateChoice->Append(_("128")) );
	bitRateChoice->Append(_("144"));
	bitRateChoice->Append(_("160"));
	bitRateChoice->Append(_("192"));
	bitRateChoice->Append(_("224"));
	bitRateChoice->Append(_("256"));
	bitRateChoice->Append(_("320"));
	bitRateChoice->Append(_("512"));
	targetSizer->Add(bitRateChoice, 1, wxALL|wxEXPAND, 0);
	rootSizer->Add(targetSizer, wxGBPosition(4, 0), wxGBSpan(1, 2), wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Panel1->SetSizer(rootSizer);
	rootSizer->Fit(Panel1);
	rootSizer->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

SoundEditor::~SoundEditor()
{
	//(*Destroy(SoundEditor)
	//*)
}

