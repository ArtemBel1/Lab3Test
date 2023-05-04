#include "Game.h"
#include "MainForm.h"
#include "StorageForm.h"

System::Void Laba3Testing::Game::Game_Load(System::Object^ sender, System::EventArgs^ e)
{
    int x;
    Log* log = new Log();
    x = log->randomNumber();
    hiddenNumberLabel->Text = Convert::ToString(x);

    return System::Void();
}

System::Void Laba3Testing::Game::rulesButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("A number from 1 to 20 inclusive is guessed. Your task is to guess this number in 5 attempts.", "Rules of the game", MessageBoxButtons::OK);

    return System::Void();
}

System::Void Laba3Testing::Game::exitGameButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ mainform = gcnew MainForm;
    this->Hide();
    mainform->Show();

    return System::Void();
}

System::Void Laba3Testing::Game::enterButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    Log* log = new Log();
    int x = log->comparison(Convert::ToInt64(answerTB->Text), Convert::ToInt64(hiddenNumberLabel->Text));

    int att;

    accuracyMaxLabel->Visible = false;
    accuracyMinLabel->Visible = false;
    if (x == 3) {
        StorageForm^ storageform = gcnew StorageForm;
        this->Hide();
        storageform->Show();
    }
    else {
        if (x == 1) {
            accuracyMaxLabel->Visible = true;
            att = Convert::ToInt64(attemptsLabel->Text) - 1;
            attemptsLabel->Text = Convert::ToString(att);
        }
        else {
            accuracyMinLabel->Visible = true;
            att = Convert::ToInt64(attemptsLabel->Text) - 1;
            attemptsLabel->Text = Convert::ToString(att);
        }
    }
    if (Convert::ToInt64(attemptsLabel->Text) == 0) {
        enterButton->Enabled = false;
        MessageBox::Show("All attempts were spent. Go to the main menu.", "Draw", MessageBoxButtons::OK);
    }
    return System::Void();
}
