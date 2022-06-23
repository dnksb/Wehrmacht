#pragma once
#include "day_options.h"
#include "settings.h"
#include "InputNameSolder.h"
#include "InputDay.h"
#include <Windows.h>
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
	/// Сводка для main_menu
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
		/// Освободить все используемые ресурсы.
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

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
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
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column1->HeaderText = L"фамилия и имя солдата";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->ToolTipText = L"столбец с фамилиями солдатов";
			this->Column1->Width = 104;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(763, 12);
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
			this->button2->Location = System::Drawing::Point(763, 42);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"добавить солдата";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &main_menu::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(763, 71);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"открыть день";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &main_menu::button3_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button5->Location = System::Drawing::Point(763, 524);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(110, 24);
			this->button5->TabIndex = 6;
			this->button5->Text = L"справка";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &main_menu::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(763, 101);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(110, 23);
			this->button6->TabIndex = 7;
			this->button6->Text = L"сохранить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &main_menu::button6_Click);
			// 
			// main_menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->MaximumSize = System::Drawing::Size(900, 600);
			this->MinimumSize = System::Drawing::Size(900, 600);
			this->Name = L"main_menu";
			this->Text = L"журнал старшины";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		int amount_day = 0;
		int amount_solders = 0;
		int amount_tidy_solders = 3;
		int first_tidy_solder = 1;
		//read and add items from DB
	public: void read_from_database() {
		tinyxml2::XMLDocument DB("Data_base.xml");
		if (DB.LoadFile("Data_base.xml") == tinyxml2::XML_SUCCESS) {
			tinyxml2::XMLElement* solder = DB.FirstChildElement("days");
			solder = solder->FirstChildElement("day");
			if (solder != NULL) {
				solder = solder->FirstChildElement("solder");
				if (solder != NULL) {
					while (solder != NULL) {
						std::string name = solder->Attribute("name");
						System::String^ s = gcnew System::String(name.c_str());
						add_solder(s);
						solder = solder->NextSiblingElement("solder");
					}
				}
			}
			tinyxml2::XMLElement* day = DB.FirstChildElement("days");
			day = day->FirstChildElement("day");
			int num_day = 1;
			if (day != NULL) {
				while (day != NULL) {
					std::string time = day->Attribute("date");
					System::String^ s = gcnew System::String(time.c_str());
					add_day(s);
					solder = day->FirstChildElement("solder");
					int num_solder = 0;
					if (solder != NULL) {
						while (solder != NULL) {
							std::string present = solder->Attribute("present");
							System::String^ s = gcnew System::String(present.c_str());
							add_pass(s, num_solder, num_day);
							num_solder++;
							solder = solder->NextSiblingElement("solder");
						}
					}
					num_day++;
					day = day->NextSiblingElement("day");
				}
			}
		}
	}
	private: void MarshalString(String^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	private: void add_pass(String^ str, int row, int column) {
		dataGridView1->Rows[row]->Cells[column]->Value = str;
		update_place();
	}
		//update place
	private: void update_place() {
		for (int i = 0; i < amount_day; i++) {
			for (int j = 0; j < amount_solders; j++) {
				dataGridView1->Columns[i]->DefaultCellStyle->BackColor = Color::White;
			}
		}
		for (int i = 0; i < amount_solders; i++) {
			for (int j = 0; j < amount_day + 1; j++) {
				if (Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value) == "о" ||
					Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value) == "О") {
					dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Red;
				}
			}
		}
	}
		//add day from DB
	private: void add_day(String^ day) {
		update_place();
		dataGridView1->Columns->Add(amount_day++.ToString(), day);
	}
		//add solder from file
	private: void add_solder(String^ solder) {
		update_place();
		dataGridView1->Rows->Add(solder);
		amount_solders++;
		dataGridView1->Sort(dataGridView1->Columns[0], ListSortDirection::Ascending);
	}
		//add solder
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		update_place();
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
		update_place();
		InputDay day;
		day.ShowDialog();
		if (day.day != 0 && day.month != 0) {
			int num_day = day.day;
			int num_month = day.month;
			switch (num_month)
			{
			case 1:
				if (num_day > 31) {
					MessageBox::Show("неправильно введен день");
					return;
				}
				break;
			case 2:
				if (num_day > 28) {
					MessageBox::Show("неправильно введен день");
					return;
				}
				break;
			case 3:
				if (num_day > 31) {
					MessageBox::Show("неправильно введен день");
					return;
				}
				break;
			case 4:
				if (num_day > 30) {
					MessageBox::Show("неправильно введен день");
					return;
				}
				break;
			case 5:
				if (num_day > 31) {
					MessageBox::Show("неправильно введен день");
					return;
				}
				break;
			case 6:
				if (num_day > 30) {
					MessageBox::Show("неправильно введен день");
					return;
				}
				break;
			case 7:
				if (num_day > 31) {
					MessageBox::Show("неправильно введен день");
					return;
				}
				break;
			case 8:
				if (num_day > 31) {
					MessageBox::Show("неправильно введен день");
					return;
				}
				break;
			case 9:
				if (num_day > 30) {
					MessageBox::Show("неправильно введен день");
					return;
				}
				break;
			case 10:
				if (num_day > 31) {
					MessageBox::Show("неправильно введен день");
					return;
				}
				break;
			case 11:
				if (num_day > 30) {
					MessageBox::Show("неправильно введен день");
					return;
				}
				break;
			case 12:
				if (num_day > 31) {
					MessageBox::Show("неправильно введен день");
					return;
				}
				break;
			default:
				MessageBox::Show("неправильно введен месяц");
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
					if (Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value) == "о" ||
						Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value) == "О") {
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Red;
					}
				}
			}
			dataGridView1->Columns->Add(amount_day++.ToString(), num_day.ToString() + "." + num_month.ToString());
		}
		else {
			MessageBox::Show("вы не ввели месяц или день");
		}
	}
		//day settings
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		update_place();
		tinyxml2::XMLDocument DB("Data_base.xml");
		if (DB.LoadFile("Data_base.xml") == tinyxml2::XML_SUCCESS) {
			tinyxml2::XMLElement* day = DB.FirstChildElement("days");
			for (int num_day = 1; num_day < amount_day + 1; num_day++) {
				day = day->FirstChildElement("day");
				bool found = false;
				while (day != NULL) {
					std::string time = day->Attribute("date");
					System::String^ s = gcnew System::String(time.c_str());
					if (Convert::ToString(dataGridView1->Columns[num_day]->HeaderCell->Value) == s) {
						found = true;
					}
					day = day->NextSiblingElement("day");
				}
				if (!found) {
					day = DB.FirstChildElement("days");
					day = day->InsertNewChildElement("day");
					std::string str_day;
					MarshalString(Convert::ToString(dataGridView1->Columns[num_day]->HeaderCell->Value), str_day);
					day->SetAttribute("date", str_day.c_str());
				}
				day = DB.FirstChildElement("days");
			}
			tinyxml2::XMLElement* solder = DB.FirstChildElement("days");
			day = solder->FirstChildElement("day");
			int num_day = 1;
			while (day != NULL) {
				for (int num_solder = 0; num_solder < amount_solders; num_solder++) {
					solder = day->FirstChildElement("solder");
					bool found = false;
					while (solder != NULL) {
						std::string name = solder->Attribute("name");
						System::String^ s = gcnew System::String(name.c_str());
						if (Convert::ToString(dataGridView1->Rows[num_solder]->Cells[0]->Value) == s) {
							found = true;
							std::string str_solder;
							MarshalString(Convert::ToString(dataGridView1->Rows[num_solder]->Cells[num_day]->Value), str_solder);
							solder->SetAttribute("present", str_solder.c_str());
						}
						solder = solder->NextSiblingElement("solder");
					}
					if (!found) {
						solder = day->InsertNewChildElement("solder");
						std::string str_solder;
						MarshalString(Convert::ToString(dataGridView1->Rows[num_solder]->Cells[0]->Value), str_solder);
						solder->SetAttribute("name", str_solder.c_str());
						MarshalString(Convert::ToString(dataGridView1->Rows[num_solder]->Cells[num_day]->Value), str_solder);
						solder->SetAttribute("present", str_solder.c_str());
						tinyxml2::XMLElement* hour;
						hour = solder->InsertNewChildElement("hour");
						hour->SetAttribute("date", "06:00");
						hour->SetAttribute("text", "");
						hour->SetAttribute("color", "");
						hour = solder->InsertNewChildElement("hour");
						hour->SetAttribute("date", "07:00");
						hour->SetAttribute("text", "завтрак");
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
						hour->SetAttribute("text", "обед");
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
						hour->SetAttribute("text", "ужин");
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
					}
				}
				num_day++;
				day = day->NextSiblingElement("day");
			}
		}
		DB.SaveFile("Data_base.xml");
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
				for (int solder = 0; solder < amount_solders; solder++) {
					day.dataGridView1->Rows->Add(this->dataGridView1->Rows[solder]->Cells[0]->Value);
					day.dataGridView1->Rows[solder]->Cells[2]->Value = "завтрак";
					day.dataGridView1->Rows[solder]->Cells[9]->Value = "обед";
					day.dataGridView1->Rows[solder]->Cells[14]->Value = "ужин";
					day.dataGridView1->Rows[solder]->Cells[2]->Style->BackColor = Color::Gold;
					day.dataGridView1->Rows[solder]->Cells[9]->Style->BackColor = Color::Khaki;
					day.dataGridView1->Rows[solder]->Cells[14]->Style->BackColor = Color::Orange;
				}
				day.date = (num_day.ToString() + "." + num_month.ToString())->ToString();
				this->Hide();
				tinyxml2::XMLElement* xml_day = DB.FirstChildElement("days");
				xml_day = xml_day->FirstChildElement("day");
				while (xml_day != NULL) {
					std::string time = xml_day->Attribute("date");
					System::String^ s = gcnew System::String(time.c_str());
					if ((num_day.ToString() + "." + num_month.ToString())->ToString() == s) {
						break;
					}
					xml_day = xml_day->NextSiblingElement("day");
				}
				day.read_for_DB(xml_day);
				for (int solder = 0; solder < amount_solders; solder++) {
					if (Convert::ToString(dataGridView1->Rows[solder]->Cells[choice_day]->Value) == "о" ||
						Convert::ToString(dataGridView1->Rows[solder]->Cells[choice_day]->Value) == "О") {
						day.dataGridView1->Rows[solder]->DefaultCellStyle->BackColor = Color::Red;
						for (int i = 1; i < 19; i++) {
							day.dataGridView1->Rows[solder]->Cells[i]->Value = "отсутсвует";
						}
					}
				}
				day.ShowDialog();
				this->Show();
				for (int solder = 0; solder < amount_solders; solder++) {
					dataGridView1->Rows[solder]->ReadOnly = false;
				}
			}
			else {
				MessageBox::Show("такой день не найден");
				return;
			}
		}
	}
		//settings
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		update_place();
		settings window;
		window.ShowDialog();
	}
		//save DB
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		update_place();
		tinyxml2::XMLDocument DB("Data_base.xml");
		if (DB.LoadFile("Data_base.xml") == tinyxml2::XML_SUCCESS) {
			tinyxml2::XMLElement* day = DB.FirstChildElement("days");
			for (int num_day = 1; num_day < amount_day + 1; num_day++) {
				day = day->FirstChildElement("day");
				bool found = false;
				while (day != NULL) {
					std::string time = day->Attribute("date");
					System::String^ s = gcnew System::String(time.c_str());
					if (Convert::ToString(dataGridView1->Columns[num_day]->HeaderCell->Value) == s) {
						found = true;
					}
					day = day->NextSiblingElement("day");
				}
				if (!found) {
					day = DB.FirstChildElement("days");
					day = day->InsertNewChildElement("day");
					std::string str_day;
					MarshalString(Convert::ToString(dataGridView1->Columns[num_day]->HeaderCell->Value), str_day);
					day->SetAttribute("date", str_day.c_str());
				}
				day = DB.FirstChildElement("days");
			}
			tinyxml2::XMLElement* solder = DB.FirstChildElement("days");
			day = solder->FirstChildElement("day");
			int num_day = 1;
			while (day != NULL) {
				for (int num_solder = 0; num_solder < amount_solders; num_solder++) {
					solder = day->FirstChildElement("solder");
					bool found = false;
					while (solder != NULL) {
						std::string name = solder->Attribute("name");
						System::String^ s = gcnew System::String(name.c_str());
						if (Convert::ToString(dataGridView1->Rows[num_solder]->Cells[0]->Value) == s) {
							found = true;
							std::string str_solder;
							MarshalString(Convert::ToString(dataGridView1->Rows[num_solder]->Cells[num_day]->Value), str_solder);
							solder->SetAttribute("present", str_solder.c_str());
						}
						solder = solder->NextSiblingElement("solder");
					}
					if (!found) {
						solder = day->InsertNewChildElement("solder");
						std::string str_solder;
						MarshalString(Convert::ToString(dataGridView1->Rows[num_solder]->Cells[0]->Value), str_solder);
						solder->SetAttribute("name", str_solder.c_str());
						MarshalString(Convert::ToString(dataGridView1->Rows[num_solder]->Cells[num_day]->Value), str_solder);
						solder->SetAttribute("present", str_solder.c_str());
						tinyxml2::XMLElement* hour;
						hour = solder->InsertNewChildElement("hour");
						hour->SetAttribute("date", "06:00");
						hour->SetAttribute("text", "");
						hour->SetAttribute("color", "");
						hour = solder->InsertNewChildElement("hour");
						hour->SetAttribute("date", "07:00");
						hour->SetAttribute("text", "завтрак");
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
						hour->SetAttribute("text", "обед");
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
						hour->SetAttribute("text", "ужин");
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
					}
				}
				num_day++;
				day = day->NextSiblingElement("day");
			}
		}
		DB.SaveFile("Data_base.xml");
		MessageBox::Show("сохранено успешно");
	}
};
}
