#include <wx/wx.h>

class Form : public wxFrame {
public:
  Form() : wxFrame(nullptr, wxID_ANY, "CheckedListBox example", wxDefaultPosition, wxSize(300, 300)) {
    this->SetClientSize(200, 240);
    for (int i = 1; i <= 1000; ++i) {
      this->checkedListBox.Insert(wxString::Format("Item %d", i), i - 1);
      this->checkedListBox.Check(i - 1, i % 2 != 0);
      this->checkedListBox.EnsureVisible(0);
    }
    this->checkedListBox.SetSelection(0);
    this->Show();
  }
  
private:
  wxPanel panel {this};
  wxCheckListBox checkedListBox {&this->panel, wxID_ANY, wxPoint(20, 20), wxSize(160, 200)};
};

class Application : public wxApp {
  bool OnInit() override {new Form(); return true;}
};

wxIMPLEMENT_APP(Application);