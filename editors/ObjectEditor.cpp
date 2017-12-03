/***************************************************************
 * Name:      ObjectEditor.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2017-09-02
 * Copyright:  ()
 * License:
 **************************************************************/

#include "ObjectEditor.h"
#include <wx/event.h>
#include <wx/msgdlg.h>

struct Object {
    bool visible = true;
    bool solid = false;
};

//(*InternalHeaders(ObjectEditor)
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(ObjectEditor)
const long ObjectEditor::ID_STATICTEXT1 = wxNewId();
const long ObjectEditor::ID_TEXTCTRL1 = wxNewId();
const long ObjectEditor::ID_VISIBLECHECKBOX = wxNewId();
const long ObjectEditor::ID_CHECKBOX2 = wxNewId();
const long ObjectEditor::ID_CHECKBOX3 = wxNewId();
const long ObjectEditor::ID_CHECKBOX4 = wxNewId();
const long ObjectEditor::ID_LISTBOX1 = wxNewId();
const long ObjectEditor::ID_BITMAPBUTTON1 = wxNewId();
const long ObjectEditor::ID_BITMAPBUTTON6 = wxNewId();
const long ObjectEditor::ID_BITMAPBUTTON2 = wxNewId();
const long ObjectEditor::ID_BITMAPBUTTON3 = wxNewId();
const long ObjectEditor::ID_BITMAPBUTTON4 = wxNewId();
const long ObjectEditor::ID_BITMAPBUTTON5 = wxNewId();
const long ObjectEditor::ID_TREECTRL1 = wxNewId();
const long ObjectEditor::ID_MENUITEM1 = wxNewId();
const long ObjectEditor::ID_MENUITEM2 = wxNewId();
const long ObjectEditor::ID_MENUITEM3 = wxNewId();
const long ObjectEditor::ID_MENUITEM5 = wxNewId();
const long ObjectEditor::ID_MENUITEM7 = wxNewId();
const long ObjectEditor::ID_MENUITEM9 = wxNewId();
const long ObjectEditor::ID_MENUITEM11 = wxNewId();
const long ObjectEditor::ID_MENUITEM13 = wxNewId();
const long ObjectEditor::ID_MENUITEM15 = wxNewId();
const long ObjectEditor::ID_MENUITEM17 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ObjectEditor,wxPanel)
    //(*EventTable(ObjectEditor)
    //*)
END_EVENT_TABLE()

ObjectEditor::ObjectEditor(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(ObjectEditor)
    wxBoxSizer* propertiesSizer;
    wxGridSizer* propertiesGridSizer;
    wxBoxSizer* nameSizer;
    wxBoxSizer* eventListButtonsSizer;
    wxBoxSizer* eventListSizer;
    wxBoxSizer* rootSizer;
    wxBoxSizer* actionListSizer;

    Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
    rootSizer = new wxBoxSizer(wxHORIZONTAL);
    propertiesSizer = new wxBoxSizer(wxVERTICAL);
    nameSizer = new wxBoxSizer(wxHORIZONTAL);
    nameLabel = new wxStaticText(this, ID_STATICTEXT1, _("Name"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    nameSizer->Add(nameLabel, 0, wxTOP|wxBOTTOM|wxLEFT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    nameTextCtrl = new wxTextCtrl(this, ID_TEXTCTRL1, _("obj_0"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    nameSizer->Add(nameTextCtrl, 1, wxALL, 5);
    propertiesSizer->Add(nameSizer, 0, wxALL|wxEXPAND, 0);
    propertiesGridSizer = new wxGridSizer(2, 2, 5, 5);
    visibleCheckBox = new wxCheckBox(this, ID_VISIBLECHECKBOX, _("Visible"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_VISIBLECHECKBOX"));
    visibleCheckBox->SetValue(false);
    propertiesGridSizer->Add(visibleCheckBox, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
    solidCheckBox = new wxCheckBox(this, ID_CHECKBOX2, _("Solid"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX2"));
    solidCheckBox->SetValue(false);
    propertiesGridSizer->Add(solidCheckBox, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
    persistentCheckBox = new wxCheckBox(this, ID_CHECKBOX3, _("Persistent"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX3"));
    persistentCheckBox->SetValue(false);
    propertiesGridSizer->Add(persistentCheckBox, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
    usePhysicsCheckBox = new wxCheckBox(this, ID_CHECKBOX4, _("Use Physics"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX4"));
    usePhysicsCheckBox->SetValue(false);
    propertiesGridSizer->Add(usePhysicsCheckBox, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
    propertiesSizer->Add(propertiesGridSizer, 0, wxLEFT|wxRIGHT|wxALIGN_LEFT, 5);
    rootSizer->Add(propertiesSizer, 0, wxBOTTOM, 5);
    eventListSizer = new wxBoxSizer(wxVERTICAL);
    eventList = new wxListBox(this, ID_LISTBOX1, wxDefaultPosition, wxSize(195,249), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX1"));
    eventList->Append(_("Create"));
    eventList->Append(_("Step"));
    eventList->Append(_("Draw"));
    eventListSizer->Add(eventList, 1, wxALL|wxEXPAND, 0);
    eventListButtonsSizer = new wxBoxSizer(wxHORIZONTAL);
    addEventButton = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("Calico\\actions\\add.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    eventListButtonsSizer->Add(addEventButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    deleteEventButton = new wxBitmapButton(this, ID_BITMAPBUTTON6, wxBitmap(wxImage(_T("Calico\\actions\\delete.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
    eventListButtonsSizer->Add(deleteEventButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    editEventButton = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("Calico\\actions\\edit.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
    eventListButtonsSizer->Add(editEventButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    cutEventButton = new wxBitmapButton(this, ID_BITMAPBUTTON3, wxBitmap(wxImage(_T("Calico\\actions\\cut.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
    eventListButtonsSizer->Add(cutEventButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    copyEventButton = new wxBitmapButton(this, ID_BITMAPBUTTON4, wxBitmap(wxImage(_T("Calico\\actions\\copy.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
    eventListButtonsSizer->Add(copyEventButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    pasteEventButton = new wxBitmapButton(this, ID_BITMAPBUTTON5, wxBitmap(wxImage(_T("Calico\\actions\\paste.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
    eventListButtonsSizer->Add(pasteEventButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    eventListSizer->Add(eventListButtonsSizer, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    rootSizer->Add(eventListSizer, 1, wxTOP|wxEXPAND, 5);
    actionListSizer = new wxBoxSizer(wxHORIZONTAL);
    actionTreeCtrl = new wxTreeCtrl(this, ID_TREECTRL1, wxDefaultPosition, wxSize(238,318), wxTR_DEFAULT_STYLE, wxDefaultValidator, _T("ID_TREECTRL1"));
    wxTreeItemId actionTreeCtrl_Item1 = actionTreeCtrl->AddRoot(_T("root"));
    wxTreeItemId actionTreeCtrl_Item2 = actionTreeCtrl->AppendItem(actionTreeCtrl_Item1, _T("item 1"));
    wxTreeItemId actionTreeCtrl_Item3 = actionTreeCtrl->AppendItem(actionTreeCtrl_Item1, _T("item 2"));
    wxTreeItemId actionTreeCtrl_Item4 = actionTreeCtrl->AppendItem(actionTreeCtrl_Item1, _T("item 3"));
    wxTreeItemId actionTreeCtrl_Item5 = actionTreeCtrl->AppendItem(actionTreeCtrl_Item1, _T("item 4"));
    wxTreeItemId actionTreeCtrl_Item6 = actionTreeCtrl->AppendItem(actionTreeCtrl_Item1, _T("item 5"));
    wxTreeItemId actionTreeCtrl_Item7 = actionTreeCtrl->AppendItem(actionTreeCtrl_Item1, _T("item 6"));
    wxTreeItemId actionTreeCtrl_Item8 = actionTreeCtrl->AppendItem(actionTreeCtrl_Item1, _T("item 7"));
    wxTreeItemId actionTreeCtrl_Item9 = actionTreeCtrl->AppendItem(actionTreeCtrl_Item1, _T("item 8"));
    wxTreeItemId actionTreeCtrl_Item10 = actionTreeCtrl->AppendItem(actionTreeCtrl_Item1, _T("item 9"));
    actionTreeCtrl->ScrollTo(actionTreeCtrl_Item2);
    actionListSizer->Add(actionTreeCtrl, 1, wxALL|wxEXPAND, 0);
    rootSizer->Add(actionListSizer, 1, wxALL|wxEXPAND, 5);
    SetSizer(rootSizer);
    MenuItem1 = new wxMenuItem((&eventsMenu), ID_MENUITEM1, _("Create"), wxEmptyString, wxITEM_NORMAL);
    MenuItem1->SetBitmap(wxBitmap(wxImage(_T("Calico\\events\\create.png"))));
    eventsMenu.Append(MenuItem1);
    MenuItem2 = new wxMenuItem((&eventsMenu), ID_MENUITEM2, _("Destroy"), wxEmptyString, wxITEM_NORMAL);
    MenuItem2->SetBitmap(wxBitmap(wxImage(_T("Calico\\events\\destroy.png"))));
    eventsMenu.Append(MenuItem2);
    MenuItem3 = new wxMenuItem((&eventsMenu), ID_MENUITEM3, _("Step"), wxEmptyString, wxITEM_NORMAL);
    MenuItem3->SetBitmap(wxBitmap(wxImage(_T("Calico\\events\\step.png"))));
    eventsMenu.Append(MenuItem3);
    MenuItem5 = new wxMenuItem((&eventsMenu), ID_MENUITEM5, _("Collision"), wxEmptyString, wxITEM_NORMAL);
    MenuItem5->SetBitmap(wxBitmap(wxImage(_T("Calico\\events\\collision.png"))));
    eventsMenu.Append(MenuItem5);
    MenuItem7 = new wxMenuItem((&eventsMenu), ID_MENUITEM7, _("Alarm"), wxEmptyString, wxITEM_NORMAL);
    MenuItem7->SetBitmap(wxBitmap(wxImage(_T("Calico\\events\\alarm.png"))));
    eventsMenu.Append(MenuItem7);
    MenuItem9 = new wxMenuItem((&eventsMenu), ID_MENUITEM9, _("Draw"), wxEmptyString, wxITEM_NORMAL);
    MenuItem9->SetBitmap(wxBitmap(wxImage(_T("Calico\\events\\draw.png"))));
    eventsMenu.Append(MenuItem9);
    MenuItem11 = new wxMenuItem((&eventsMenu), ID_MENUITEM11, _("Mouse"), wxEmptyString, wxITEM_NORMAL);
    MenuItem11->SetBitmap(wxBitmap(wxImage(_T("Calico\\events\\mouse.png"))));
    eventsMenu.Append(MenuItem11);
    MenuItem13 = new wxMenuItem((&eventsMenu), ID_MENUITEM13, _("Key Down"), wxEmptyString, wxITEM_NORMAL);
    MenuItem13->SetBitmap(wxBitmap(wxImage(_T("Calico\\events\\keyboard.png"))));
    eventsMenu.Append(MenuItem13);
    MenuItem15 = new wxMenuItem((&eventsMenu), ID_MENUITEM15, _("Key Pressed"), wxEmptyString, wxITEM_NORMAL);
    MenuItem15->SetBitmap(wxBitmap(wxImage(_T("Calico\\events\\keypress.png"))));
    eventsMenu.Append(MenuItem15);
    MenuItem17 = new wxMenuItem((&eventsMenu), ID_MENUITEM17, _("Key Up"), wxEmptyString, wxITEM_NORMAL);
    MenuItem17->SetBitmap(wxBitmap(wxImage(_T("Calico\\events\\keyrelease.png"))));
    eventsMenu.Append(MenuItem17);
    rootSizer->Fit(this);
    rootSizer->SetSizeHints(this);

    Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ObjectEditor::OnBitmapButton1Click);
    //*)


    Object* object = new Object();
    Bind(wxEVT_UPDATE_UI, [object](wxUpdateUIEvent& evt) {
        evt.Check(object->visible);
    }, ID_VISIBLECHECKBOX);
    Bind(wxEVT_COMMAND_CHECKBOX_CLICKED, [=](wxCommandEvent& evt) {
        object->visible = visibleCheckBox->IsChecked();
    }, ID_VISIBLECHECKBOX);
    // something like this?
    //wxDataBind(ID_VISIBLECHECKBOX, &object->visible, wxCheckBox::Set3StateValue, wxCheckBox::IsChecked);
}

ObjectEditor::~ObjectEditor()
{
    //(*Destroy(ObjectEditor)
    //*)
}

void ObjectEditor::OnBitmapButton1Click(wxCommandEvent& event)
{
    PopupMenu(&this->eventsMenu);
}

void ObjectEditor::OnvisibleCheckBoxClick(wxCommandEvent& event)
{
}
