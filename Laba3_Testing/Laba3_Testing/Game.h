
#include <iostream>
#include "../Laba3_Logic/Log.h"

#pragma once

namespace Laba3Testing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ GameNameLabel;
	protected:

	private: System::Windows::Forms::Button^ enterButton;
	private: System::Windows::Forms::TextBox^ answerTB;

	private: System::Windows::Forms::Button^ rulesButton;
	private: System::Windows::Forms::Label^ hiddenNumberLabel;
	private: System::Windows::Forms::Button^ exitGameButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ attemptsLabel;
	private: System::Windows::Forms::Label^ accuracyMinLabel;
	private: System::Windows::Forms::Label^ accuracyMaxLabel;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->GameNameLabel = (gcnew System::Windows::Forms::Label());
			this->enterButton = (gcnew System::Windows::Forms::Button());
			this->answerTB = (gcnew System::Windows::Forms::TextBox());
			this->rulesButton = (gcnew System::Windows::Forms::Button());
			this->hiddenNumberLabel = (gcnew System::Windows::Forms::Label());
			this->exitGameButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->attemptsLabel = (gcnew System::Windows::Forms::Label());
			this->accuracyMinLabel = (gcnew System::Windows::Forms::Label());
			this->accuracyMaxLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// GameNameLabel
			// 
			this->GameNameLabel->AutoSize = true;
			this->GameNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GameNameLabel->Location = System::Drawing::Point(92, 36);
			this->GameNameLabel->Name = L"GameNameLabel";
			this->GameNameLabel->Size = System::Drawing::Size(214, 25);
			this->GameNameLabel->TabIndex = 1;
			this->GameNameLabel->Text = L"Guess The Number";
			// 
			// enterButton
			// 
			this->enterButton->BackColor = System::Drawing::SystemColors::MenuText;
			this->enterButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enterButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->enterButton->Location = System::Drawing::Point(119, 137);
			this->enterButton->Name = L"enterButton";
			this->enterButton->Size = System::Drawing::Size(170, 41);
			this->enterButton->TabIndex = 2;
			this->enterButton->Text = L"Enter";
			this->enterButton->UseVisualStyleBackColor = false;
			this->enterButton->Click += gcnew System::EventHandler(this, &Game::enterButton_Click);
			// 
			// answerTB
			// 
			this->answerTB->Location = System::Drawing::Point(153, 111);
			this->answerTB->Name = L"answerTB";
			this->answerTB->Size = System::Drawing::Size(100, 20);
			this->answerTB->TabIndex = 3;
			// 
			// rulesButton
			// 
			this->rulesButton->BackColor = System::Drawing::SystemColors::MenuText;
			this->rulesButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rulesButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->rulesButton->Location = System::Drawing::Point(119, 184);
			this->rulesButton->Name = L"rulesButton";
			this->rulesButton->Size = System::Drawing::Size(170, 41);
			this->rulesButton->TabIndex = 4;
			this->rulesButton->Text = L"Rules";
			this->rulesButton->UseVisualStyleBackColor = false;
			this->rulesButton->Click += gcnew System::EventHandler(this, &Game::rulesButton_Click);
			// 
			// hiddenNumberLabel
			// 
			this->hiddenNumberLabel->AutoSize = true;
			this->hiddenNumberLabel->Location = System::Drawing::Point(341, 106);
			this->hiddenNumberLabel->Name = L"hiddenNumberLabel";
			this->hiddenNumberLabel->Size = System::Drawing::Size(0, 13);
			this->hiddenNumberLabel->TabIndex = 5;
			this->hiddenNumberLabel->Visible = false;
			// 
			// exitGameButton
			// 
			this->exitGameButton->BackColor = System::Drawing::SystemColors::MenuText;
			this->exitGameButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitGameButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->exitGameButton->Location = System::Drawing::Point(119, 231);
			this->exitGameButton->Name = L"exitGameButton";
			this->exitGameButton->Size = System::Drawing::Size(170, 41);
			this->exitGameButton->TabIndex = 6;
			this->exitGameButton->Text = L"Exit";
			this->exitGameButton->UseVisualStyleBackColor = false;
			this->exitGameButton->Click += gcnew System::EventHandler(this, &Game::exitGameButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(126, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Количество попыток:";
			// 
			// attemptsLabel
			// 
			this->attemptsLabel->AutoSize = true;
			this->attemptsLabel->Location = System::Drawing::Point(256, 61);
			this->attemptsLabel->Name = L"attemptsLabel";
			this->attemptsLabel->Size = System::Drawing::Size(13, 13);
			this->attemptsLabel->TabIndex = 8;
			this->attemptsLabel->Text = L"5";
			// 
			// accuracyMinLabel
			// 
			this->accuracyMinLabel->AutoSize = true;
			this->accuracyMinLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->accuracyMinLabel->Location = System::Drawing::Point(47, 82);
			this->accuracyMinLabel->Name = L"accuracyMinLabel";
			this->accuracyMinLabel->Size = System::Drawing::Size(322, 20);
			this->accuracyMinLabel->TabIndex = 9;
			this->accuracyMinLabel->Text = L"Неправильно, загаданное число меньше";
			this->accuracyMinLabel->Visible = false;
			// 
			// accuracyMaxLabel
			// 
			this->accuracyMaxLabel->AutoSize = true;
			this->accuracyMaxLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->accuracyMaxLabel->Location = System::Drawing::Point(47, 83);
			this->accuracyMaxLabel->Name = L"accuracyMaxLabel";
			this->accuracyMaxLabel->Size = System::Drawing::Size(321, 20);
			this->accuracyMaxLabel->TabIndex = 10;
			this->accuracyMaxLabel->Text = L"Неправильно, загаданное число больше";
			this->accuracyMaxLabel->Visible = false;
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(405, 285);
			this->Controls->Add(this->accuracyMaxLabel);
			this->Controls->Add(this->accuracyMinLabel);
			this->Controls->Add(this->attemptsLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exitGameButton);
			this->Controls->Add(this->hiddenNumberLabel);
			this->Controls->Add(this->rulesButton);
			this->Controls->Add(this->answerTB);
			this->Controls->Add(this->enterButton);
			this->Controls->Add(this->GameNameLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Game";
			this->Text = L"Game";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void rulesButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitGameButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void enterButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
