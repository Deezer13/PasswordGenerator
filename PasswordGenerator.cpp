#include "PasswordGenerator.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	PasswordGenerator::PasswordGenerator form;
	Application::Run(% form);
}