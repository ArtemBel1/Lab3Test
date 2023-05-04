#include "Game.h";

using namespace System;
using namespace System::Windows::Forms;
using namespace Laba3Testing;

[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Laba3Testing::Game form;
	Application::Run(% form);
}