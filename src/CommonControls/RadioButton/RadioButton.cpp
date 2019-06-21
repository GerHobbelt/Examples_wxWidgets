#include <wx/wx.h>

class Form : public wxFrame {
public:
  Form() : wxFrame(nullptr, wxID_ANY, "RadioButton example", wxDefaultPosition, wxSize(300, 300)) {
    this->radioButton1.SetValue(true);
    this->Show();
  }
  
private:
  wxPanel panel {this};
  wxRadioButton radioButton1 {&this->panel, wxID_ANY, "radioButton 1", wxPoint(30, 30)};
  wxRadioButton radioButton2 {&this->panel, wxID_ANY, "radioButton 2", wxPoint(30, 60)};
  wxRadioButton radioButton3 {&this->panel, wxID_ANY, "radioButton 3", wxPoint(30, 90)};
};

class Application : public wxApp {
  bool OnInit() override {new Form(); return true;}
};

wxIMPLEMENT_APP(Application);