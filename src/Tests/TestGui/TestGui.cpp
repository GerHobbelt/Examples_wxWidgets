#include "AppInitializer.h"
#include <wx/app.h>
#include <wx/button.h>
#include <wx/filedlg.h>
#include <wx/filename.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/stattext.h>

class wxFilePicker : public wxButton {
  static constexpr const char *file_picker_logo[] = {
  /* columns rows colors chars-per-pixel */
  "21 17 183 2 ",
  "   c None", ".  c #001C29", "X  c #1D282E", "o  c #232829", "O  c #232929", "+  c #252929", "@  c #25292B", "#  c #252B2D", "$  c #272B2D", "%  c #272D2F", "&  c #28292D", "*  c #434541", "=  c #484844", "-  c #514E45", ";  c #696252", ":  c #6F6453", ">  c #87785D", ",  c #8A795B", "<  c #8A795D", "1  c #8B7A5F", "2  c #8C7A5C", "3  c #877A63", "4  c #8A7B60", "5  c #897B63", "6  c #8A7C60", "7  c #8E7E63", "8  c #8A7C67", "9  c #958463", "0  c #9E8C6B", "q  c #9B8F72", "w  c #9E9074", "e  c #9D9278", "r  c #9F9278", "t  c #A28F6D", "y  c #B0996F", "u  c #A19377", "i  c #A99773", "p  c #AE9976", "a  c #A19379", "s  c #A1967C", "d  c #B69F77", "f  c #B8A175", "g  c #BDA67B", "h  c #BEA77E", "j  c #C0A87C", "k  c #C1A97D", "l  c #C0A87E", "z  c #C0A97E", "x  c #C1A97E", "c  c #C3AA7F", "v  c #9B988D", "b  c #9B988E", "n  c #979791", "m  c #989891", "M  c #989892", "N  c #989992", "B  c #999992", "V  c #A99E83", "C  c #ACA28C", "Z  c #B8A88A", "A  c #BFAA89", "S  c #BAAB8F", "D  c #BBBFB8", "F  c #C0AB83", "G  c #C2AB82", "H  c #C4AB80", "J  c #C0A987", "K  c #C0AA87", "L  c #C2AD86", "P  c #C3AD86", "I  c #C5AF86", "U  c #C3AD89", "Y  c #C2AD8A", "T  c #C2AC8B", "R  c #C4AE8A", "E  c #C1AC8C", "W  c #C1AF8E", "Q  c #C7B187", "!  c #C8B186", "~  c #C5B088", "^  c #C6B189", "/  c #C5B08B", "(  c #C7B28A", ")  c #C7B18D", "_  c #C5B28D", "`  c #C4B18F", "'  c #C6B18F", "]  c #C6B38E", "[  c #C6B48E", "{  c #C7B48F", "}  c #CAB289", "|  c #C8B28A", " . c #CBB48A", ".. c #CBB48B", "X. c #CDB58B", "o. c #C9B28D", "O. c #C9B48E", "+. c #C9B48F", "@. c #CFB78D", "#. c #CFB78E", "$. c #D0B88E", "%. c #D2BA8F", "&. c #C4B190", "*. c #C7B597", "=. c #C9B490", "-. c #C8B590", ";. c #C9B691",  ":. c #CBB690", ">. c #CAB792", ",. c #C8B496", "<. c #C9B597", "1. c #C8B699", "2. c #D2BB90", "3. c #D3BB90", "4. c #D2BB92", "5. c #D3BC91", "6. c #D1BC94", "7. c #D1C09F", "8. c #D1C0A0", "9. c #D2C2A1", "0. c #DCC6A5", "q. c #DEC7A4", "w. c #DCC7A7", "e. c #DFC8A5", "r. c #D6C7AE", "t. c #DBC6A9", "y. c #DCC8AC", "u. c #DCCBAF", "i. c #E1CAA9", "p. c #E2CBAA", "a. c #E2CCAB", "s. c #E5CFAF", "d. c #E2CEB0", "f. c #E6CFB1", "g. c #E6CFB2", "h. c #E6D0B2", "j. c #E7D1B4", "k. c #E7D2B5", "l. c #E8D2B5", "z. c #E8D3B8", "x. c #E9D4B9", "c. c #E9D4BA", "v. c #EAD5BA", "b. c #E8D7BB", "n. c #EAD6BB", "m. c #EED9BF", "M. c #C6C7C3", "N. c #C4C8C1", "B. c #C5C9C2", "V. c #C8C9CA", "C. c #C8CACA", "Z. c #CBCCCB", "A. c #CDCFD0", "S. c #D1D3D4", "D. c #D2D3D4", "F. c #EBDBC3", "G. c #EBDCC7", "H. c #EDDDC7", "J. c #E5DCCC", "K. c #ECDDC8", "L. c #ECDDC9", "P. c #EDDFCB", "I. c #EBDECC", "U. c #EEE0CD", "Y. c #EEE0CE", "T. c #EFE2D1", "R. c #EFE5D5", "E. c #E3E3DF", "W. c #E4E3DF", "Q. c #F0E3D2", "!. c #F2E5D4", "~. c #F2E6D7", "^. c #F3E9D8", "/. c #E7E6E3", "(. c #E7E7E4", "). c #E8E7E4", "_. c #EEEEEC", "`. c #EEEFED", "'. c #F4F4F4", "]. c #F6F6F6", "[. c #F9F8F6", "{. c #FBFBF9", "}. c #FEFEFE",
  /* pixels */
  "                                          ", "%       ; i H l l l c 0 =                 ", "%       y 5.9.7.9.9.8.;.9 *               ", "%       f 5.;.^ ^ | O.O.H g l l l j l t - ", "$       f 2.+.I ~ L A L _ _ { _ _ ;.;.| , ", "$       f 2.+.Q Z v v m m m m m m b S @.1 ", "$       f 2.+...w C.}.'.].].].].}.V.a $., ", "$       f 2.{ ..w D._.D B.B.B.D `.S.r $., ", "&       d 2.=...w A.{.E.)././.W.[.Z.a @., ", "$       f 3.=.} w B.J.W 1.*.*.,.,.&.W O.7 ", "@       f %.O.! V C u.I.T.U.U.U.K.K.K.y.1 ", "@       l 3._ W Y r.R.H.z.x.x.x.x.x.x.w.1 ", "@       d b.^.R.~.!.F.j.k.k.k.k.l.k.x.w.5 ", "O       p d.m.k.l.j.h.g.g.h.g.h.g.s.x.t., ", "O       5 E i.a.p.p.p.p.p.p.p.p.p.p.q.A : ", "o       . 5 J U U L U U U U Y Y Y L A 5 X ", "                                          "
  };
public:
  wxFilePicker(wxWindow* parent, wxWindowID id, const wxString& message = wxFileSelectorPromptStr, const wxString& defaultDir = wxEmptyString, const wxString& defaultFile = wxEmptyString, const wxString& wildCard = wxFileSelectorDefaultWildcardStr, const wxPoint& pos = wxDefaultPosition, const wxSize& size = {125, 25}, long style = wxBU_LEFT, const wxValidator& validator = wxDefaultValidator, const wxString& name = wxButtonNameStr) : wxButton(parent, id, wxEmptyString, pos, size, style, validator, name), message_(message), defaultDir_(defaultDir), defaultFile_(defaultFile), wildCard_(wildCard) {
    SetBitmap(wxImage(file_picker_logo));
    SetBitmapPosition(wxDirection::wxRIGHT);
    SetLabel("(none)");
    
    Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) {
      wxFileDialog openFileDialog(this, message_, defaultDir_, defaultFile_, wildCard_, wxFD_OPEN|wxFD_FILE_MUST_EXIST);
      if (openFileDialog.ShowModal() == wxID_OK) {
        path_ = openFileDialog.GetPath();
        wxFileName fn(path_);
        SetLabelText(wxString::Format("%s.%s", fn.GetName(), fn.GetExt()));
        wxCommandEvent ev(event);
        ev.SetEventType(wxEVT_TEXT);
        this->GetEventHandler()->ProcessEvent(ev);
        event.SetWillBeProcessedAgain();
      }
    });
  }
  
  const wxString& GetPath() const {return path_;}
  void SetPath(const wxString& value) {
    if (path_ != value) {
      path_ = value;
      SetLabel(value.empty() ? "(none)" : value);
    }
  }

private:
  wxString message_;
  wxString defaultDir_;
  wxString defaultFile_;
  wxString wildCard_;
  wxString path_;
};

int main(int argc, char* argv[]) {
  AppInitializer appInitializer;
  wxFrame* form1 = new wxFrame(nullptr, wxID_ANY, "TestGui", wxDefaultPosition, {400, 250});

  wxPanel* panelMain = new wxPanel(form1);
 
  wxFilePicker* filePicker = new wxFilePicker(panelMain, wxID_ANY, wxEmptyString, "", "", "Text Files (*.txt)|*.txt|All Files (*.*)|*.*", {10, 10});
  wxStaticText* staticText = new wxStaticText(panelMain, wxID_ANY, "File = ", {10, 50});

  filePicker->Bind(wxEVT_TEXT, [&](wxCommandEvent& event) {
    //filePicker->GetEventHandler()->ProcessEvent(event);
    staticText->SetLabel(wxString::Format("File = %s", filePicker->GetPath()));
  });
  
  form1->Show();

  wxTheApp->OnRun();
}
