#include "Game.h"

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
    
    return System::Void();
}

System::Void Laba3Testing::Game::enterButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    
    return System::Void();
}
