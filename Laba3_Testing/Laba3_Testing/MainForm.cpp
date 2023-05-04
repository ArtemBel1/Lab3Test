#include "MainForm.h"

System::Void Laba3Testing::MainForm::aboutButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("This program is designed to store passwords from websites and credit cards.", "About programm", MessageBoxButtons::OK);

	return System::Void();
}

System::Void Laba3Testing::MainForm::loginButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game^ gameform = gcnew Game;
	gameform->Show();
	this->Hide();

	return System::Void();
}

System::Void Laba3Testing::MainForm::exitMainButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	
	return System::Void();
}
