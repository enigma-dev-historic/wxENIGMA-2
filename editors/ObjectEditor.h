/***************************************************************
 * Name:      ObjectEditor.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2017-09-02
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef OBJECTEDITOR_H
#define OBJECTEDITOR_H

//(*Headers(ObjectEditor)
#include <wx/treectrl.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/listbox.h>
#include <wx/panel.h>
#include <wx/bmpbuttn.h>
//*)

class ObjectEditor: public wxPanel
{
    public:

        ObjectEditor(wxWindow* parent,wxWindowID id = -1);
        virtual ~ObjectEditor();

    private:

        //(*Handlers(ObjectEditor)
        void OnBitmapButton1Click(wxCommandEvent& event);
        void OnvisibleCheckBoxClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(ObjectEditor)
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL1;
        static const long ID_VISIBLECHECKBOX;
        static const long ID_CHECKBOX2;
        static const long ID_CHECKBOX3;
        static const long ID_CHECKBOX4;
        static const long ID_LISTBOX1;
        static const long ID_BITMAPBUTTON1;
        static const long ID_BITMAPBUTTON6;
        static const long ID_BITMAPBUTTON2;
        static const long ID_BITMAPBUTTON3;
        static const long ID_BITMAPBUTTON4;
        static const long ID_BITMAPBUTTON5;
        static const long ID_TREECTRL1;
        static const long ID_MENUITEM1;
        static const long ID_MENUITEM2;
        static const long ID_MENUITEM3;
        static const long ID_MENUITEM5;
        static const long ID_MENUITEM7;
        static const long ID_MENUITEM9;
        static const long ID_MENUITEM11;
        static const long ID_MENUITEM13;
        static const long ID_MENUITEM15;
        static const long ID_MENUITEM17;
        //*)

        //(*Declarations(ObjectEditor)
        wxMenuItem* MenuItem7;
        wxBitmapButton* pasteEventButton;
        wxMenu eventsMenu;
        wxMenuItem* MenuItem5;
        wxMenuItem* MenuItem2;
        wxMenuItem* MenuItem1;
        wxMenuItem* MenuItem11;
        wxCheckBox* visibleCheckBox;
        wxBitmapButton* addEventButton;
        wxTreeCtrl* actionTreeCtrl;
        wxBitmapButton* cutEventButton;
        wxMenuItem* MenuItem15;
        wxCheckBox* persistentCheckBox;
        wxStaticText* nameLabel;
        wxMenuItem* MenuItem17;
        wxMenuItem* MenuItem13;
        wxCheckBox* solidCheckBox;
        wxBitmapButton* deleteEventButton;
        wxListBox* eventList;
        wxTextCtrl* nameTextCtrl;
        wxMenuItem* MenuItem3;
        wxBitmapButton* editEventButton;
        wxBitmapButton* copyEventButton;
        wxCheckBox* usePhysicsCheckBox;
        wxMenuItem* MenuItem9;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // OBJECTEDITOR_H
