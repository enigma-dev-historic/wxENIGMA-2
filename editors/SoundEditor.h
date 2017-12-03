#ifndef SOUNDEDITOR_H
#define SOUNDEDITOR_H

//(*Headers(SoundEditor)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/spinctrl.h>
#include <wx/slider.h>
#include <wx/panel.h>
#include <wx/choice.h>
#include <wx/bmpbuttn.h>
#include <wx/statbmp.h>
#include <wx/gbsizer.h>
//*)

class SoundEditor: public wxPanel
{
	public:

		SoundEditor(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~SoundEditor();

		//(*Declarations(SoundEditor)
		wxSpinCtrl* volumeSpinCtrl;
		wxBitmapButton* editButton;
		wxStaticText* outputLabel;
		wxSlider* playbackSlider;
		wxStaticText* qualityLabel;
		wxStaticText* bitRateLabel;
		wxPanel* Panel1;
		wxBitmapButton* playButton;
		wxStaticText* sampleRateLabel;
		wxTextCtrl* nameTextCtrl;
		wxChoice* qualityChoice;
		wxChoice* bitRateChoice;
		wxSlider* volumeSlider;
		wxBitmapButton* loadButton;
		wxBitmapButton* saveButton;
		wxStaticText* playbackLabel;
		wxChoice* outputChoice;
		wxChoice* sampleRateChoice;
		wxCheckBox* streamedCheckBox;
		wxCheckBox* compressesdCheckBox;
		//*)

	protected:

		//(*Identifiers(SoundEditor)
		static const long ID_TEXTCTRL1;
		static const long ID_BITMAPBUTTON3;
		static const long ID_BITMAPBUTTON1;
		static const long ID_BITMAPBUTTON2;
		static const long ID_BITMAPBUTTON4;
		static const long ID_CHECKBOX1;
		static const long ID_CHECKBOX2;
		static const long ID_SLIDER1;
		static const long ID_SPINCTRL1;
		static const long ID_SLIDER2;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT2;
		static const long ID_CHOICE2;
		static const long ID_STATICTEXT3;
		static const long ID_CHOICE1;
		static const long ID_STATICTEXT4;
		static const long ID_CHOICE3;
		static const long ID_STATICTEXT5;
		static const long ID_CHOICE4;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(SoundEditor)
		void OnPaint(wxPaintEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
