#include "main_menu.h"
#include <WinUser.h>
#include <Windows.h>
#include <cstdlib>
using namespace Wehrmacht;
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Wehrmacht::main_menu form;
	form.read_from_database();
	Application::Run(% form);
}
