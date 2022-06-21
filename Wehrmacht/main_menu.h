#pragma once
#include "day_options.h"
#include "settings.h"
#include "InputNameSolder.h"
#include "InputDay.h"
#include <Windows.h>

namespace Wehrmacht {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� main_menu
	/// </summary>
	public ref class main_menu : public System::Windows::Forms::Form
	{
	public:
		main_menu(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~main_menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;














	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(13, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(744, 536);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(763, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"�������� ����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &main_menu::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(763, 42);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"�������� �������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &main_menu::button2_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(763, 71);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"������� �����";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &main_menu::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(763, 101);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"������� ����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &main_menu::button3_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button5->Location = System::Drawing::Point(763, 513);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(109, 35);
			this->button5->TabIndex = 6;
			this->button5->Text = L"��������� �������� �����";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &main_menu::button5_Click);
			// 
			// Column1
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle1;
			this->Column1->HeaderText = L"������� � ��� �������";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->ToolTipText = L"������� � ��������� ��������";
			// 
			// main_menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->MaximumSize = System::Drawing::Size(900, 600);
			this->MinimumSize = System::Drawing::Size(900, 600);
			this->Name = L"main_menu";
			this->Text = L"������ ��������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		int amount_day = 0;
		int amount_solders = 0;
		int amount_tidy_solders = 3;
		int first_tidy_solder = 1;
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	}
		   //add solder
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		InputNameSolder window;
		window.ShowDialog();
		if (window.name != "") {
			dataGridView1->Rows->Add(window.name);
			amount_solders++;
			dataGridView1->Sort(dataGridView1->Columns[0], ListSortDirection::Ascending);
		}
		else {
			return;
		}
	}
		   //add day
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	InputDay day;
	day.ShowDialog();
	if (day.day != 0 && day.month != 0) {
		int num_day = day.day;
		int num_month = day.month;
		switch (num_month)
		{
		case 1:
			if (num_day > 31) {
				MessageBox::Show("����������� ������ ����");
				return;
			}
			break;
		case 2:
			if (num_day > 28) {
				MessageBox::Show("����������� ������ ����");
				return;
			}
			break;
		case 3:
			if (num_day > 31) {
				MessageBox::Show("����������� ������ ����");
				return;
			}
			break;
		case 4:
			if (num_day > 30) {
				MessageBox::Show("����������� ������ ����");
				return;
			}
			break;
		case 5:
			if (num_day > 31) {
				MessageBox::Show("����������� ������ ����");
				return;
			}
			break;
		case 6:
			if (num_day > 30) {
				MessageBox::Show("����������� ������ ����");
				return;
			}
			break;
		case 7:
			if (num_day > 31) {
				MessageBox::Show("����������� ������ ����");
				return;
			}
			break;
		case 8:
			if (num_day > 31) {
				MessageBox::Show("����������� ������ ����");
				return;
			}
			break;
		case 9:
			if (num_day > 30) {
				MessageBox::Show("����������� ������ ����");
				return;
			}
			break;
		case 10:
			if (num_day > 31) {
				MessageBox::Show("����������� ������ ����");
				return;
			}
			break;
		case 11:
			if (num_day > 30) {
				MessageBox::Show("����������� ������ ����");
				return;
			}
			break;
		case 12:
			if (num_day > 31) {
				MessageBox::Show("����������� ������ ����");
				return;
			}
			break;
		default:
			MessageBox::Show("����������� ������ �����");
			return;
			break;
		}
		for (int i = 0; i < amount_day; i++) {
			for (int j = 0; j < amount_solders; j++) {
				dataGridView1->Columns[i]->DefaultCellStyle->BackColor = Color::White;
			}
		}
		for (int i = 0; i < amount_solders; i++) {
			for (int j = 0; j < amount_day + 1; j++) {
				if (Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value) == "�"|| 
					Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value) == "�") {
					dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Red;
				}
			}
		}
		dataGridView1->Columns->Add(amount_day++.ToString(), num_day.ToString() + "." + num_month.ToString());
	}
	else {
		MessageBox::Show("�� �� ����� ����� ��� ����");
	}
}
	   //day settings
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	InputDay choice;
	choice.ShowDialog();
	if (choice.day != 0 && choice.month != 0) {
		int num_day = choice.day;
		int num_month = choice.month;
		bool found = false;
		int choice_day;
		for (int i = 0; i < amount_day + 1; i++) {
			if (Convert::ToString(dataGridView1->Columns[i]->HeaderCell->Value) == 
				(num_day.ToString() + "." + num_month.ToString())->ToString()) {
				choice_day = i;
				found = true;
				break;
			}
		}
		if (found) {
			day_options day;
			this->Hide();
			for (int solder = 0; solder < amount_solders; solder++) {
				day.dataGridView1->Rows->Add(this->dataGridView1->Rows[solder]->Cells[0]->Value);
				if (Convert::ToString(dataGridView1->Rows[solder]->Cells[choice_day]->Value) == "�" || 
					Convert::ToString(dataGridView1->Rows[solder]->Cells[choice_day]->Value) == "�") {
					day.dataGridView1->Rows[solder]->DefaultCellStyle->BackColor = Color::Red;
				}
			}
			for (int solder = 0; solder < amount_solders; solder++) {
				day.dataGridView1->Rows[solder]->Cells[2]->Value = "�������";
				day.dataGridView1->Rows[solder]->Cells[9]->Value = "����";
				day.dataGridView1->Rows[solder]->Cells[14]->Value = "����";
				day.dataGridView1->Rows[solder]->Cells[2]->Style->BackColor = Color::Gold;
				day.dataGridView1->Rows[solder]->Cells[9]->Style->BackColor = Color::Khaki;
				day.dataGridView1->Rows[solder]->Cells[14]->Style->BackColor = Color::Orange;
			}
			day.ShowDialog();
			this->Show();
			for (int solder = 0; solder < amount_solders; solder++) {
				dataGridView1->Rows[solder]->ReadOnly = false;
			}
		}
		else {
			MessageBox::Show("����� ���� �� ������");
			return;
		}
	}
}
	   //settings
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	settings window;
	window.ShowDialog();
}
};
}
