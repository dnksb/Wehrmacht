#pragma once
#include "AddNaryad.h"
#include "tinyxml2.h"
#include <iostream>

namespace Wehrmacht {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� day_options
	/// </summary>
	public ref class day_options : public System::Windows::Forms::Form
	{
	public:
		day_options(void)
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
		~day_options()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->dataGridView1->Size = System::Drawing::Size(743, 536);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"������ � ��� �������";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column2->HeaderText = L"06:00";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 59;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column3->HeaderText = L"07:00";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 59;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column4->HeaderText = L"08:00";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 59;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column5->HeaderText = L"09:00";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 59;
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column6->HeaderText = L"10:00";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 59;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column7->HeaderText = L"11:00";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 59;
			// 
			// Column8
			// 
			this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column8->HeaderText = L"12:00";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 59;
			// 
			// Column9
			// 
			this->Column9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column9->HeaderText = L"13:00";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 59;
			// 
			// Column10
			// 
			this->Column10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column10->HeaderText = L"14:00";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Width = 59;
			// 
			// Column11
			// 
			this->Column11->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column11->HeaderText = L"15:00";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Width = 59;
			// 
			// Column12
			// 
			this->Column12->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column12->HeaderText = L"16:00";
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			this->Column12->Width = 59;
			// 
			// Column13
			// 
			this->Column13->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column13->HeaderText = L"17:00";
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			this->Column13->Width = 59;
			// 
			// Column14
			// 
			this->Column14->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column14->HeaderText = L"18:00";
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			this->Column14->Width = 59;
			// 
			// Column15
			// 
			this->Column15->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column15->HeaderText = L"19:00";
			this->Column15->Name = L"Column15";
			this->Column15->ReadOnly = true;
			this->Column15->Width = 59;
			// 
			// Column16
			// 
			this->Column16->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column16->HeaderText = L"20:00";
			this->Column16->Name = L"Column16";
			this->Column16->ReadOnly = true;
			this->Column16->Width = 59;
			// 
			// Column17
			// 
			this->Column17->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column17->HeaderText = L"21:00";
			this->Column17->Name = L"Column17";
			this->Column17->ReadOnly = true;
			this->Column17->Width = 59;
			// 
			// Column18
			// 
			this->Column18->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column18->HeaderText = L"22:00";
			this->Column18->Name = L"Column18";
			this->Column18->ReadOnly = true;
			this->Column18->Width = 59;
			// 
			// Column19
			// 
			this->Column19->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column19->HeaderText = L"23:00";
			this->Column19->Name = L"Column19";
			this->Column19->ReadOnly = true;
			this->Column19->Width = 59;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(762, 13);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 36);
			this->button4->TabIndex = 8;
			this->button4->Text = L"�������� �����������";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &day_options::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(762, 55);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 47);
			this->button3->TabIndex = 9;
			this->button3->Text = L"��������� ���������� � �����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &day_options::button3_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(763, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 60);
			this->button1->TabIndex = 10;
			this->button1->Text = L"�������� ��� ���������� ��������� �������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &day_options::button1_Click_1);
			// 
			// day_options
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->MaximumSize = System::Drawing::Size(900, 600);
			this->MinimumSize = System::Drawing::Size(900, 600);
			this->Name = L"day_options";
			this->Text = L"������� ��������� ���";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		public:
			String^ date;
	private: void MarshalString(String^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
			//add event
	public: void read_for_DB(tinyxml2::XMLElement* day) {
		tinyxml2::XMLElement* solder = day->FirstChildElement("solder");
		while (solder!=NULL) {
			std::string name = solder->Attribute("name");
			System::String^ s = gcnew System::String(name.c_str());
			for (int num_solder = 0; num_solder < dataGridView1->RowCount; num_solder++) {
				if (Convert::ToString(dataGridView1->Rows[num_solder]->Cells[0]->Value) == s) {
					tinyxml2::XMLElement* hour = solder->FirstChildElement("hour");
					if(hour != NULL) {
						for (int num_hour = 1; num_hour < 19; num_hour++) {
							std::string str_hour = hour->Attribute("text");
							System::String^ s = gcnew System::String(str_hour.c_str());
							dataGridView1->Rows[num_solder]->Cells[num_hour]->Value = s;
							if ((std::string)hour->Attribute("color") == "�������") {
								dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor = Color::Green;
							}
							else if ((std::string)hour->Attribute("color") == "�����") {
								dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor = Color::Silver;
							}
							else if ((std::string)hour->Attribute("color") == "����������������") {
								dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor = Color::IndianRed;
							}
							else if ((std::string)hour->Attribute("color") == "�����-�������") {
								dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor = Color::YellowGreen;
							}
							else if ((std::string)hour->Attribute("color") == "�������") {
								dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor = Color::Cyan;
							}
							else if ((std::string)hour->Attribute("color") == "�������") {
								dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor = Color::Gold;
							}
							else if ((std::string)hour->Attribute("color") == "����") {
								dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor = Color::Khaki;
							}
							else if ((std::string)hour->Attribute("color") == "����������") {
								dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor = Color::Orange;
							}
							else if ((std::string)hour->Attribute("color") == "�������" || 
								(std::string)hour->Attribute("color") == "����������") {
								dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor = Color::Red;
							}
							hour = hour->NextSiblingElement("hour");
						}
						break;
					}
				}
			}
			solder = solder->NextSiblingElement("solder");
		}
	}
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
					if (Convert::ToString(dataGridView1->Rows[solder]->Cells[0]->Value) == name) {
						found = true;
						num = solder;
						break;
					}
				}
				if (found) {
					for (int hour = 1; hour < 19; hour++) {
						if (Convert::ToString(dataGridView1->Rows[num]->Cells[hour]->Value) == "") {
							dataGridView1->Rows[num]->Cells[hour]->Style->BackColor = Color::Cyan;
							dataGridView1->Rows[num]->Cells[hour]->Value = "�����. ���������";
						}
					}
				}
				else {
					MessageBox::Show("����� ������ �� ������");
					return;
				}
				break;
				}
			case 1: {
				bool found = false;
				int num;
				for (int solder = 0; solder < dataGridView1->RowCount; solder++) {
					if (Convert::ToString(dataGridView1->Rows[solder]->Cells[0]->Value) == name) {
						found = true;
						num = solder;
						break;
					}
				}
				if (found) {
					int choice_hour;
					bool found_hour = false;
					for (int i = 0; i < 19; i++) {
						if (Convert::ToString(dataGridView1->Columns[i]->HeaderCell->Value) == time) {
							choice_hour = i;
							found_hour = true;
							break;
						}
					}
					if (found_hour) {
						for (int hour = choice_hour; hour < choice_hour + 4 && hour < 19; hour++) {
							if (Convert::ToString(dataGridView1->Rows[num]->Cells[hour]->Value) == "") {
								dataGridView1->Rows[num]->Cells[hour]->Style->BackColor = Color::YellowGreen;
								dataGridView1->Rows[num]->Cells[hour]->Value = "��������";
							}
						}
					}
					else {
						MessageBox::Show("�� ��������� ������� �����");
						return;
					}
				}
				else {
					MessageBox::Show("����� ������ �� ������");
					return;
				}
				break;
				}
			case 2:{
				bool found = false;
				int num;
				for (int solder = 0; solder < dataGridView1->RowCount; solder++) {
					if (Convert::ToString(dataGridView1->Rows[solder]->Cells[0]->Value) == name) {
						found = true;
						num = solder;
						break;
					}
				}
				if (found) {
					int choice_hour;
					bool found_hour = false;
					for (int i = 0; i < 19; i++) {
						if (Convert::ToString(dataGridView1->Columns[i]->HeaderCell->Value) == time) {
							choice_hour = i;
							found_hour = true;
							break;
						}
					}
					if (found_hour) {
						for (int hour = choice_hour; hour < choice_hour + 4 && hour < 19; hour++) {
							if (Convert::ToString(dataGridView1->Rows[num]->Cells[hour]->Value) == "") {
								dataGridView1->Rows[num]->Cells[hour]->Style->BackColor = Color::IndianRed;
								dataGridView1->Rows[num]->Cells[hour]->Value = "���������";
							}
						}
					}
					else {
						MessageBox::Show("�� ��������� ������� �����");
						return;
					}
				}
				else {
					MessageBox::Show("����� ������ �� ������");
					return;
				}
				break;
				}
			case 3:{
				bool found = false;
				int num;
				for (int solder = 0; solder < dataGridView1->RowCount; solder++) {
					if (Convert::ToString(dataGridView1->Rows[solder]->Cells[0]->Value) == name) {
						found = true;
						num = solder;
						break;
					}
				}
				if (found) {
					for (int hour = 1; hour < 19; hour++) {
						if (Convert::ToString(dataGridView1->Rows[num]->Cells[hour]->Value) == "") {
							dataGridView1->Rows[num]->Cells[hour]->Style->BackColor = Color::Silver;
							dataGridView1->Rows[num]->Cells[hour]->Value = "������ 24 �.";
						}
					}
				}
				else {
					MessageBox::Show("����� ������ �� ������");
					return;
				}
				break;
				}
			case 4:{
				bool found = false;
				int num;
				for (int solder = 0; solder < dataGridView1->RowCount; solder++) {
					if (Convert::ToString(dataGridView1->Rows[solder]->Cells[0]->Value) == name) {
						found = true;
						num = solder;
						break;
					}
				}
				if (found) {
					int choice_hour;
					bool found_hour = false;
					for (int i = 0; i < 19; i++) {
						if (Convert::ToString(dataGridView1->Columns[i]->HeaderCell->Value) == time) {
							choice_hour = i;
							found_hour = true;
							break;
						}
					}
					if (found_hour) {
						for (int hour = choice_hour; hour < 19; hour++) {
							if (Convert::ToString(dataGridView1->Rows[num]->Cells[hour]->Value) == "") {
								dataGridView1->Rows[num]->Cells[hour]->Style->BackColor = Color::Silver;
								dataGridView1->Rows[num]->Cells[hour]->Value = "������ �� ����� ���";
							}
						}
					}
					else {
						MessageBox::Show("�� ��������� ������� �����");
						return;
					}
				}
				else {
					MessageBox::Show("����� ������ �� ������");
					return;
				}
				break;
				}
			case 5:{
				bool found = false;
				int num;
				for (int solder = 0; solder < dataGridView1->RowCount; solder++) {
					if (Convert::ToString(dataGridView1->Rows[solder]->Cells[0]->Value) == name) {
						found = true;
						num = solder;
						break;
					}
				}
				if (found) {
					int choice_hour;
					bool found_hour = false;
					for (int i = 0; i < 19; i++) {
						if (Convert::ToString(dataGridView1->Columns[i]->HeaderCell->Value) == time) {
							choice_hour = i;
							found_hour = true;
							break;
						}
					}
					if (found_hour) {
						for (int hour = choice_hour; hour < choice_hour + 4 && hour < 19; hour++) {
							if (Convert::ToString(dataGridView1->Rows[num]->Cells[hour]->Value) == "") {
								dataGridView1->Rows[num]->Cells[hour]->Style->BackColor = Color::Silver;
								dataGridView1->Rows[num]->Cells[hour]->Value = "������ 4 �.";
							}
						}
					}
					else {
						MessageBox::Show("�� ��������� ������� �����");
						return;
					}
				}
				else {
					MessageBox::Show("����� ������ �� ������");
					return;
				}
				break;
				}
			default:
				MessageBox::Show("��� ����������� ������ �� ���������");
				return;
				break;
			}
		}
		else {
			MessageBox::Show("�����-�� �������� �� �������/�������");
			return;
		}
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		for (int x = 1; x < 19; x++) {
			for (int y = 0; y < dataGridView1->RowCount; y++) {
				if (dataGridView1->Rows[y]->Cells[x]->Selected &&
					Convert::ToString(dataGridView1->Rows[y]->Cells[x]->Value) != "" &&
					dataGridView1->Rows[y]->Cells[x]->Style->BackColor != Color::PaleGreen) {
					if (dataGridView1->Rows[y]->Cells[x]->Style->BackColor != Color::Red && 
						Convert::ToString(dataGridView1->Rows[y]->Cells[x]->Value) != "����������") {
						dataGridView1->Rows[y]->Cells[x]->Style->BackColor = Color::PaleGreen;
						dataGridView1->Rows[y]->Cells[x]->Value = Convert::ToString(dataGridView1->Rows[y]->Cells[x]->Value) + ", ��������";
					}
				}
			}
		}
	}
		//save DB
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		tinyxml2::XMLDocument DB("Data_base.xml");
		if (DB.LoadFile("Data_base.xml") == tinyxml2::XML_SUCCESS) {
			tinyxml2::XMLElement* day = DB.FirstChildElement("days");
			day = day->FirstChildElement("day");
			while (day != NULL) {
				std::string time = day->Attribute("date");
				System::String^ s = gcnew System::String(time.c_str());
				if (date == s) {
					tinyxml2::XMLElement* solder = day->FirstChildElement("solder");
					while (solder != NULL) {
						std::string name = solder->Attribute("name");
						System::String^ s = gcnew System::String(name.c_str());
						for (int num_solder = 0; num_solder < dataGridView1->RowCount; num_solder++) {
							if (Convert::ToString(dataGridView1->Rows[num_solder]->Cells[0]->Value) == s) {
								tinyxml2::XMLElement* hour = solder->FirstChildElement("hour");
								if (hour != NULL) {
									for (int num_hour = 1; num_hour < 19; num_hour++) {
										std::string str_solder;
										MarshalString(Convert::ToString(dataGridView1->Rows[num_solder]->Cells[num_hour]->Value), str_solder);
										hour->SetAttribute("text", str_solder.c_str());
										if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::Green) {
											str_solder = "�������";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::Silver) {
											str_solder = "�����";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::IndianRed) {
											str_solder = "����������������";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::YellowGreen) {
											str_solder = "�����-�������";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::Cyan) {
											str_solder = "�������";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::Gold) {
											str_solder = "�������";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::Khaki) {
											str_solder = "����";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::Orange) {
											str_solder = "����������";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::Red) {
											str_solder = "�������";
										}
										hour->SetAttribute("color", str_solder.c_str());
										hour = hour->NextSiblingElement("hour");
									}
									break;
								}
								else {
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "06:00");
									hour->SetAttribute("text", "");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "07:00");
									hour->SetAttribute("text", "�������");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "08:00");
									hour->SetAttribute("text", "");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "09:00");
									hour->SetAttribute("text", "");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "10:00");
									hour->SetAttribute("text", "");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "11:00");
									hour->SetAttribute("text", "");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "12:00");
									hour->SetAttribute("text", "");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "13:00");
									hour->SetAttribute("text", "");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "14:00");
									hour->SetAttribute("text", "����");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "15:00");
									hour->SetAttribute("text", "");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "16:00");
									hour->SetAttribute("text", "");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "17:00");
									hour->SetAttribute("text", "");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "18:00");
									hour->SetAttribute("text", "");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "19:00");
									hour->SetAttribute("text", "����");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "20:00");
									hour->SetAttribute("text", "");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "21:00");
									hour->SetAttribute("text", "");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "22:00");
									hour->SetAttribute("text", "");
									hour->SetAttribute("color", "");
									hour = solder->InsertNewChildElement("hour");
									hour->SetAttribute("date", "23:00");
									hour->SetAttribute("text", "");
									hour->SetAttribute("color", "");
									hour = solder->FirstChildElement("hour");
									for (int num_hour = 1; num_hour < 19; num_hour++) {
										std::string str_solder;
										MarshalString(Convert::ToString(dataGridView1->Rows[num_solder]->Cells[num_hour]->Value), str_solder);
										hour->SetAttribute("text", str_solder.c_str());
										if(dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::Green) {
											str_solder = "�������";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::Silver) {
											str_solder = "�����";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::IndianRed) {
											str_solder = "����������������";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::YellowGreen) {
											str_solder = "�����-�������";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::Cyan) {
											str_solder = "�������";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::Gold) {
											str_solder = "�������";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::Khaki) {
											str_solder = "����";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::Orange) {
											str_solder = "����������";
										}
										else if (dataGridView1->Rows[num_solder]->Cells[num_hour]->Style->BackColor == Color::Red) {
											str_solder = "�������";
										}
										hour->SetAttribute("color", str_solder.c_str());
										hour = hour->NextSiblingElement("hour");
									}
									break;
								}
							}
						}
						solder = solder->NextSiblingElement("solder");
					}
					break;
				}
				day = day->NextSiblingElement("day");
			}
		}
		DB.SaveFile("Data_base.xml");
		MessageBox::Show("��������� �������");
		this->Close();
	}
};
}
