#pragma once
#include "AddNaryad.h"

namespace Wehrmacht {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ day_options
	/// </summary>
	public ref class day_options : public System::Windows::Forms::Form
	{
	public:
		day_options(void)
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
		~day_options()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;

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
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(19) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11, this->Column12, this->Column13, this->Column14, this->Column15, this->Column16, this->Column17, this->Column18,
					this->Column19
			});
			this->dataGridView1->Location = System::Drawing::Point(13, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(543, 536);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"фамили и им€ солдата";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"06:00";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"07:00";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"08:00";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"09:00";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"10:00";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"11:00";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"12:00";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"13:00";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"14:00";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"15:00";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"16:00";
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"17:00";
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"18:00";
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"19:00";
			this->Column15->Name = L"Column15";
			this->Column15->ReadOnly = true;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"20:00";
			this->Column16->Name = L"Column16";
			this->Column16->ReadOnly = true;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"21:00";
			this->Column17->Name = L"Column17";
			this->Column17->ReadOnly = true;
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"22:00";
			this->Column18->Name = L"Column18";
			this->Column18->ReadOnly = true;
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"23:00";
			this->Column19->Name = L"Column19";
			this->Column19->ReadOnly = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(562, 52);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"нар€д";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &day_options::button4_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(562, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 34);
			this->button1->TabIndex = 6;
			this->button1->Text = L"добавить меропри€тие";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &day_options::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(562, 81);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 34);
			this->button3->TabIndex = 9;
			this->button3->Text = L"сохранить расписание";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &day_options::button3_Click);
			// 
			// day_options
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 561);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"day_options";
			this->Text = L"day_options";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		public:
			String^* solders;
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		AddNaryad naryad;
		naryad.ShowDialog();
		if (naryad.name != "" && naryad.time != "" && naryad.type != -1) {
			String^ name = naryad.name;
			String^ time = naryad.time;
			int selected = naryad.type;
			switch (selected)
			{
			case 0:{
				bool found = false;
				int num;
				for (int solder = 0; solder < dataGridView1->RowCount; solder++) {
					if (Convert::ToString(dataGridView1->Rows[solder]->Cells[0]->Value) == "name") {
						found = true;
						num = solder;
					}
				}
				if (found) {

				}
				else {
					MessageBox::Show("такой солдат не найден");
					return;
				}
				break;
				}
			case 1:{
				bool found = false;
				int num;
				for (int solder = 0; solder < dataGridView1->RowCount; solder++) {
					if (Convert::ToString(dataGridView1->Rows[solder]->Cells[0]->Value) == "name") {
						found = true;
						num = solder;
					}
					if (found) {

					}
					else {
						MessageBox::Show("такой солдат не найден");
						return;
					}
				}
				break;
				}
			case 2:{
				bool found = false;
				int num;
				for (int solder = 0; solder < dataGridView1->RowCount; solder++) {
					if (Convert::ToString(dataGridView1->Rows[solder]->Cells[0]->Value) == "name") {
						found = true;
						num = solder;
					}
				}
				if (found) {

				}
				else {
					MessageBox::Show("такой солдат не найден");
					return;
				}
				break;
				}
			case 3:{
				bool found = false;
				int num;
				for (int solder = 0; solder < dataGridView1->RowCount; solder++) {
					if (Convert::ToString(dataGridView1->Rows[solder]->Cells[0]->Value) == "name") {
						found = true;
						num = solder;
					}
				}
				if (found) {

				}
				else {
					MessageBox::Show("такой солдат не найден");
					return;
				}
				break;
				}
			case 4:{
				bool found = false;
				int num;
				for (int solder = 0; solder < dataGridView1->RowCount; solder++) {
					if (Convert::ToString(dataGridView1->Rows[solder]->Cells[0]->Value) == "name") {
						found = true;
						num = solder;
					}
				}
				if (found) {

				}
				else {
					MessageBox::Show("такой солдат не найден");
					return;
				}
				break;
				}
			case 5:{
				bool found = false;
				int num;
				for (int solder = 0; solder < dataGridView1->RowCount; solder++) {
					if (Convert::ToString(dataGridView1->Rows[solder]->Cells[0]->Value) == "name") {
						found = true;
						num = solder;
					}
				}
				if (found) {

				}
				else {
					MessageBox::Show("такой солдат не найден");
					return;
				}
				break;
				}
			default:
				MessageBox::Show("тип меропри€ти€ выбран не правильно");
				return;
				break;
			}
		}
		else {
			MessageBox::Show("какие-то значени€ не выбраны/введены");
			return;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
