#include "StorageForm.h"    
#include "MainForm.h"
#include <fstream>
#include <string>
#include <vector>

System::Void Laba3Testing::StorageForm::StorageForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    Log* log = new Log();
    vector<string>* lines = log->fromFile("data.txt");
    String^ line;
    for each (string str in *lines)
    {
        line = gcnew String(str.c_str());
        DataGridViewRow^ row = gcnew DataGridViewRow();
        row->CreateCells(dataGridView1);
        for (int i = 0; i < line->Split(L' ')->Length; i++) {
            row->Cells[i]->Value = line->Split(L' ')[i];
        }          
        dataGridView1->Rows->Add(row);
    }

    return System::Void();
}

System::Void Laba3Testing::StorageForm::exitStorageButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ mainform = gcnew MainForm;
    this->Hide();
    mainform->Show();

    return System::Void();
}
