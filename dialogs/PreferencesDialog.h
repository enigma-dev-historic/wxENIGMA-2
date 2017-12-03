#ifndef PREFERENCESDIALOG_H
#define PREFERENCESDIALOG_H

//(*Headers(PreferencesDialog)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/treebook.h>
#include <wx/bmpbuttn.h>
#include <wx/dialog.h>
//*)

class PreferencesDialog: public wxDialog
{
	public:

		PreferencesDialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~PreferencesDialog();

		//(*Declarations(PreferencesDialog)
		wxBitmapButton* BitmapButton5;
		wxStaticText* StaticText6;
		wxTextCtrl* TextCtrl6;
		wxStaticText* StaticText8;
		wxPanel* Panel1;
		wxBitmapButton* BitmapButton8;
		wxPanel* Panel3;
		wxStaticText* StaticText5;
		wxStaticText* StaticText7;
		wxBitmapButton* BitmapButton6;
		wxTextCtrl* TextCtrl8;
		wxBitmapButton* BitmapButton7;
		wxTextCtrl* TextCtrl7;
		wxTreebook* Treebook1;
		wxPanel* Panel2;
		wxTextCtrl* TextCtrl5;
		//*)

	protected:

		//(*Identifiers(PreferencesDialog)
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL5;
		static const long ID_BITMAPBUTTON5;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL6;
		static const long ID_BITMAPBUTTON6;
		static const long ID_STATICTEXT7;
		static const long ID_TEXTCTRL7;
		static const long ID_BITMAPBUTTON7;
		static const long ID_STATICTEXT8;
		static const long ID_TEXTCTRL8;
		static const long ID_BITMAPBUTTON8;
		static const long ID_PANEL1;
		static const long ID_PANEL2;
		static const long ID_PANEL3;
		static const long ID_TREEBOOK1;
		//*)

	private:

		//(*Handlers(PreferencesDialog)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
