#pragma once

namespace Laba3Testing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ StorageForm
	/// </summary>
	public ref class StorageForm : public System::Windows::Forms::Form
	{
	public:
		StorageForm(void)
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
		~StorageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ exitStorageButton;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;





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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->exitStorageButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 59);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(435, 175);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Login(card number)";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 240;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Password";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// exitStorageButton
			// 
			this->exitStorageButton->BackColor = System::Drawing::SystemColors::MenuText;
			this->exitStorageButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitStorageButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->exitStorageButton->Location = System::Drawing::Point(150, 12);
			this->exitStorageButton->Name = L"exitStorageButton";
			this->exitStorageButton->Size = System::Drawing::Size(170, 41);
			this->exitStorageButton->TabIndex = 3;
			this->exitStorageButton->Text = L"Exit";
			this->exitStorageButton->UseVisualStyleBackColor = false;
			this->exitStorageButton->Click += gcnew System::EventHandler(this, &StorageForm::exitStorageButton_Click);
			// 
			// StorageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 246);
			this->Controls->Add(this->exitStorageButton);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"StorageForm";
			this->Text = L"StorageForm";
			this->Load += gcnew System::EventHandler(this, &StorageForm::StorageForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: System::Void StorageForm_Load(System::Object^ sender, System::EventArgs^ e);
	public: System::Void exitStorageButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
