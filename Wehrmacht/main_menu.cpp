#include "main_menu.h"
#include <WinUser.h>
#include <Windows.h>
#include <cstdlib>
using namespace Wehrmacht;
using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Wehrmacht::main_menu form;
	Application::Run(% form);

}