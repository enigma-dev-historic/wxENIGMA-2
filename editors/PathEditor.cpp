#include "PathEditor.h"

//(*InternalHeaders(PathEditor)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(PathEditor)
const long PathEditor::ID_CUSTOM1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(PathEditor,wxPanel)
	//(*EventTable(PathEditor)
	//*)
END_EVENT_TABLE()

PathEditor::PathEditor(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(PathEditor)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxDefaultPosition, wxSize(566,398), wxTAB_TRAVERSAL, _T("id"));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	Custom1 = new wxToolBar(this,ID_CUSTOM1,wxDefaultPosition,wxDefaultSize,wxTB_FLAT|wxTB_HORIZONTAL|wxNO_BORDER,_T("ID_CUSTOM1"));
	BoxSizer1->Add(Custom1, 1, wxALL|wxEXPAND, 0);
	SetSizer(BoxSizer1);
	SetSizer(BoxSizer1);
	Layout();
	//*)
}

PathEditor::~PathEditor()
{
	//(*Destroy(PathEditor)
	//*)
}

