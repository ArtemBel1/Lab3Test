#include "Game.h"

#pragma once

namespace Laba3Testing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ MainNameLabel;
	private: System::Windows::Forms::Button^ loginButton;

	private: System::Windows::Forms::Button^ aboutButton;
	private: System::Windows::Forms::Button^ exitMainButton;
	protected:


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->MainNameLabel = (gcnew System::Windows::Forms::Label());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->aboutButton = (gcnew System::Windows::Forms::Button());
			this->exitMainButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// MainNameLabel
			// 
			this->MainNameLabel->AutoSize = true;
			this->MainNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainNameLabel->Location = System::Drawing::Point(132, 35);
			this->MainNameLabel->Name = L"MainNameLabel";
			this->MainNameLabel->Size = System::Drawing::Size(203, 25);
			this->MainNameLabel->TabIndex = 0;
			this->MainNameLabel->Text = L"Password Storage";
			// 
			// loginButton
			// 
			this->loginButton->BackColor = System::Drawing::SystemColors::MenuText;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->loginButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->loginButton->Location = System::Drawing::Point(154, 93);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(170, 41);
			this->loginButton->TabIndex = 1;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = false;
			this->loginButton->Click += gcnew System::EventHandler(this, &MainForm::loginButton_Click);
			// 
			// aboutButton
			// 
			this->aboutButton->BackColor = System::Drawing::SystemColors::MenuText;
			this->aboutButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->aboutButton->Location = System::Drawing::Point(154, 140);
			this->aboutButton->Name = L"aboutButton";
			this->aboutButton->Size = System::Drawing::Size(170, 41);
			this->aboutButton->TabIndex = 3;
			this->aboutButton->Text = L"About";
			this->aboutButton->UseVisualStyleBackColor = false;
			this->aboutButton->Click += gcnew System::EventHandler(this, &MainForm::aboutButton_Click);
			// 
			// exitMainButton
			// 
			this->exitMainButton->BackColor = System::Drawing::SystemColors::MenuText;
			this->exitMainButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitMainButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->exitMainButton->Location = System::Drawing::Point(154, 187);
			this->exitMainButton->Name = L"exitMainButton";
			this->exitMainButton->Size = System::Drawing::Size(170, 41);
			this->exitMainButton->TabIndex = 4;
			this->exitMainButton->Text = L"Exit";
			this->exitMainButton->UseVisualStyleBackColor = false;
			this->exitMainButton->Click += gcnew System::EventHandler(this, &MainForm::exitMainButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(475, 285);
			this->Controls->Add(this->exitMainButton);
			this->Controls->Add(this->aboutButton);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->MainNameLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void aboutButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitMainButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
