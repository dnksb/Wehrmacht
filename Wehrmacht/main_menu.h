#pragma once
#include "day_options.h"
#include "settings.h"
#include "InputNameSolder.h"
#include <Windows.h>

namespace Wehrmacht {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ main_menu
	/// </summary>
	public ref class main_menu : public System::Windows::Forms::Form
	{
	public:
		main_menu(void)
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;




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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(13, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(543, 536);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(565, 96);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"добавить дату";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &main_menu::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(565, 126);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"добавить солдата";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &main_menu::button2_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(565, 155);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"создать отчет";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &main_menu::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(565, 185);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"открыть день";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &main_menu::button3_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button5->Location = System::Drawing::Point(563, 513);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(109, 35);
			this->button5->TabIndex = 6;
			this->button5->Text = L"настройки рабочего места";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &main_menu::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(562, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"день";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown1->Location = System::Drawing::Point(565, 30);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 31, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(107, 20);
			this->numericUpDown1->TabIndex = 8;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown2->Location = System::Drawing::Point(565, 70);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(107, 20);
			this->numericUpDown2->TabIndex = 10;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &main_menu::numericUpDown2_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(562, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"мес€ц";
			// 
			// Column1
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle1;
			this->Column1->HeaderText = L"фамили€ и им€ солдата";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->ToolTipText = L"столбец с фамили€ми солдатов";
			// 
			// main_menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 561);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"main_menu";
			this->Text = L"main_menu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int amount_day = 0;
		int amount_solders = 0;
		int amount_tidy_solders = 3;
		int first_tidy_solder = 1;
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	}
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
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < amount_day; i++) {
		for (int j = 0; j < amount_solders; j++) {
			dataGridView1->Columns[i]->DefaultCellStyle->BackColor = Color::White;
		}
	}
	dataGridView1->Columns->Add(amount_day++.ToString(), numericUpDown1->Value.ToString() + "." + numericUpDown2->Value.ToString());
	dataGridView1->Rows[0]->ReadOnly = true;
	try {
		numericUpDown1->Value++;
	}
	catch (System::ArgumentOutOfRangeException^) {
		numericUpDown1->Value = 1;
		try {
			numericUpDown2->Value++;
		}
		catch (System::ArgumentOutOfRangeException^) {
			numericUpDown2->Value = 1;
		}
	}
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	day_options day;
	day.ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	settings window;
	window.ShowDialog();
}
private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	if (numericUpDown2->Value == 1) {
		numericUpDown1->Maximum = 31;
	}
	else if(numericUpDown2->Value == 2) {
		numericUpDown1->Maximum = 28;
	}
	else if (numericUpDown2->Value == 3) {
		numericUpDown1->Maximum = 31;
	}
	else if (numericUpDown2->Value == 4) {
		numericUpDown1->Maximum = 30;
	}
	else if (numericUpDown2->Value == 5) {
		numericUpDown1->Maximum = 31;
	}
	else if (numericUpDown2->Value == 6) {
		numericUpDown1->Maximum = 30;
	}
	else if (numericUpDown2->Value == 7) {
		numericUpDown1->Maximum = 31;
	}
	else if (numericUpDown2->Value == 8) {
		numericUpDown1->Maximum = 31;
	}
	else if (numericUpDown2->Value == 9) {
		numericUpDown1->Maximum = 30;
	}
	else if (numericUpDown2->Value == 10) {
		numericUpDown1->Maximum = 31;
	}
	else if (numericUpDown2->Value == 11) {
		numericUpDown1->Maximum = 30;
	}
	else if (numericUpDown2->Value == 12) {
		numericUpDown1->Maximum = 31;
	}
}
};
}
