#include "MenuDeEjercicios.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Tarea1JulioAgustin1299720::MenuDeEjercicios mainform;
	Application::Run(% mainform);
	return 0;
}


