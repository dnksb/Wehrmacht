#pragma once

namespace Wehrmacht {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ AddNaryad
	/// </summary>
	public ref class AddNaryad : public System::Windows::Forms::Form
	{
	public:
		AddNaryad(void)
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
		~AddNaryad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"врем€ проведени€";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(128, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"например(09:00)";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 66);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(129, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"фамили€ и им€ солдата";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"суточный нар€д", L"гарнизонный нар€д", L"дежурство",
					L"другое(на весь день)", L"другое(до конца дн€)", L"другое(на 4 часа)"
			});
			this->comboBox1->Location = System::Drawing::Point(151, 25);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(148, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"выберите вид";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(151, 92);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddNaryad::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"ок";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddNaryad::button1_Click);
			// 
			// AddNaryad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 124);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"AddNaryad";
			this->Text = L"AddNaryad";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			String^ name = "";
			String^ time = "";
			int type = -1;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		name = Convert::ToString(textBox2->Text);
		time = Convert::ToString(textBox1->Text);
		type = Convert::ToInt32(comboBox1->SelectedIndex);
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	name = "";
	time = "";
	type = -1;
	this->Close();
}
};
}
