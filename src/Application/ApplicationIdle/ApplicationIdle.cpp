#include <chrono>
#include <wx/wx.h>

using namespace std::chrono_literals;

class Frame : public wxFrame {
public:
  Frame() : wxFrame(nullptr, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(300, 300)) {}
  
  void OnApplicationIdle() {
    SetLabel(wxString::Format("%d", ++counter));
  }
  
private:
  wxPanel* panel = new wxPanel(this);
  int counter = 0;
};

class Application : public wxApp {
  bool OnInit() override {return (form = new Frame())->Show();}
 
  bool ProcessIdle() override {
    if (!form->IsVisible()) return wxApp::ProcessIdle();

    static std::chrono::high_resolution_clock::time_point lastIdleTime;
    std::chrono::high_resolution_clock::duration elapsedTime = std::chrono::high_resolution_clock::now() - lastIdleTime;
    if (elapsedTime >= 100ms) {
      form->OnApplicationIdle();
      lastIdleTime = std::chrono::high_resolution_clock::now();
    }

    wxApp::ProcessIdle();
    return true;
    ;
  }

  Frame* form = nullptr;
};

wxIMPLEMENT_APP(Application);
