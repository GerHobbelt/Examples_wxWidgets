#include <wx/wx.h>

class Frame : public wxFrame {
public:
  Frame() : wxFrame(nullptr, wxID_ANY, "GroupBox example", wxDefaultPosition) {
    SetClientSize(wxSize(640, 480));
  }
  
private:
  wxPanel* panel = new wxPanel(this);
  wxStaticBox* groupBox1 = new wxStaticBox(panel, wxID_ANY, "GroupBox 1", wxPoint(10, 10), wxSize(305, 460));
  wxStaticBox* groupBox2 = new wxStaticBox(panel, wxID_ANY, wxEmptyString, wxPoint(325, 10), wxSize(305, 460));
};

class Application : public wxApp {
  bool OnInit() override {(new Frame())->Show(); return true;}
};

wxIMPLEMENT_APP(Application);
