#ifndef FONTEDITOR_H
#define FONTEDITOR_H

//(*Headers(FontEditor)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/spinctrl.h>
#include <wx/panel.h>
#include <wx/choice.h>
#include <wx/gbsizer.h>
//*)

class FontEditor: public wxPanel
{
	public:

		FontEditor(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~FontEditor();

		//(*Declarations(FontEditor)
		wxCheckBox* italicCheckBox;
		wxCheckBox* aaCheckBox;
		wxStaticText* nameLabel;
		wxChoice* familyChoice;
		wxTextCtrl* nameTextCtrl;
		wxSpinCtrl* sizeSpinCtrl;
		wxStaticText* sizeLabel;
		wxCheckBox* boldCheckBox;
		wxStaticText* familyLabel;
		//*)

	protected:

		//(*Identifiers(FontEditor)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_CHOICE1;
		static const long ID_CHECKBOX4;
		static const long ID_CHECKBOX5;
		static const long ID_CHECKBOX6;
		static const long ID_STATICTEXT3;
		static const long ID_SPINCTRL1;
		//*)

	private:

		//(*Handlers(FontEditor)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
