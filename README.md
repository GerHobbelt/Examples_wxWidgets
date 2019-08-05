# wxWidgets Examples

Shows how to use wxWidgets controls only by programming code (c++17).

## Hello World

["Hello World"](src/HelloWorld/HelloWorld) The classic first application HelloWorld with wxStaticText.

## Application and messages

[Application](src/Application/Application) Shows how to create a simple wxWidgets application with wxApp.

[ApplicationAndMain](src/Application/ApplicationAndMain) Shows how to create a wxWidgets application and main method with wxApp.

[ApplicationIcon](src/Application/ApplicationIcon) Shows how to create a wxWidgets application and icon with wxApp.

[ApplicationIdle](src/Application/ApplicationIdle) Shows how to create an application and Idle event with wxApp.

## Common Controls

[Button](src/CommonControls/Button) Shows how to create a wxWidgets Button and Event Click with wxButton.

[CheckBox](src/CommonControls/CheckBox) Shows how to create a wxWidgets CheckBox with wxCheckBox.

[CheckedListBox](src/CommonControls/CheckedListBox) Shows how to create a wxWidgets CheckListBox with wxCheckListButton.

[ComboBox](src/CommonControls/ComboBox) Shows how to create a wxWidgets ComboBox with wxComboBox.

[Control](src/CommonControls/Control) Shows how to create a wxWidgets Control with wwxControl.

[DateTimePicker](src/CommonControls/DateTimePicker) Shows how to create a wxWidgets DateTimePicker with wxDatePicker.

[DomainUpDown](src/CommonControls/DomainUpDown) Shows how to create a wxWidgets DomainUpDown with own [wxDomainSpinCtrl](src/CommonControls/DomainUpDown/wxDomainSpinCtrl.h) (wxPanel with wxTextCtrl and wxSpinButton).

[HScrollBar](src/CommonControls/HScrollBar) Shows how to create a wxWidgets HScrollBar with wxScrollBar.

[Label](src/CommonControls/Label) Shows how to create a wxWidgets Label with wxStaticText.

[LinkLabel](src/CommonControls/LinkLabel) Shows how to create a wxWidgets LinkLabel with wxHyperLinkCtrl.

[ListBox](src/CommonControls/ListBox) Shows how to create a wxWidgets ListBox with wxListBox.

[ListView](src/CommonControls/ListView) Shows how to create a wxWidgets ListView with wxListCtrl.

[MonthCalendar](src/CommonControls/MonthCalendar) Shows how to create a wxWidgets MonthCalendar with wxCalendarCtrl.

[NotifyIcon](src/CommonControls/NotifyIcon) Shows how to create a wxWidgets NotifyIcon with own [wxNotifyIcon](src/CommonControls/NotifyIcon/wxNotifyIcon.h) (wxTaskBarIcon).

[ProgressBar](src/CommonControls/ProgressBar) Shows how to create a wxWidgets ProgressBar with wxGauge.

[RadioButton](src/CommonControls/RadioButton) Shows how to create a wxWidgets RadioButton with wxRadioButton.

[TextBox](src/CommonControls/TextBox) Shows how to create a wxWidgets TextBox with wxTextEntry.

[TrackBar](src/CommonControls/TrackBar) Shows how to create a wxWidgets TrackBar with wxSlider.

## Containers

[Form](src/Form) Shows how to create a simple wxWidgets Form with wxFrame.

[GroupBox](src/GroupBox) Shows how to create a simple wxWidgets GroupBox with wxRadioBox.

[Panel](src/Panel) Shows how to create a simple wxWidgets Panel with wxPanel.

[TabControl](src/TabControl) Shows how to create a simple wxWidgets TabControl with TabPages with wxNotebook.

## Menus and toolbars

[MainMenu](src/MainMenu) Shows how to create a wxWidgets MainMenu with wxMenu.

## Components

[Timer](src/Timer) Shows how to create a simple wxWidgets Timer with wxTimer.

## Dialogs

[ColorDialog](src/ColorDialog) Shows how to create a ColorDialog with wxColourDialog.

[MessageBox](src/MessageBox) Shows how to create a MessageBox with wxMessageBox.

## Download

``` shell
git clone https://github.com/gammasoft71/Examples.wxWidgets Examples.wxWidgets
```

## Generate and build

To build this project, open "Terminal" and type following lines:

### Windows
``` cmake
mkdir build
cd build
cmake ..
open Examples.wxWidgets.sln
```

### macOS :

``` cmake
mkdir build
cd build
cmake .. -G "Xcode"
open ./Examples.wxWidgets.xcodeproj
```


### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
```

## Remarks

This project run with [wxWidgets](https://www.wxwidgets.org) and [CMake](https://cmake.org).
