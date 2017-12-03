#ifndef PATHEDITOR_H
#define PATHEDITOR_H

//(*Headers(PathEditor)
#include <wx/sizer.h>
#include <wx/toolbar.h>
#include <wx/panel.h>
//*)

class PathEditor: public wxPanel
{
	public:

		PathEditor(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~PathEditor();

		//(*Declarations(PathEditor)
		wxToolBar* Custom1;
		//*)

	protected:

		//(*Identifiers(PathEditor)
		static const long ID_CUSTOM1;
		//*)

	private:

		//(*Handlers(PathEditor)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
