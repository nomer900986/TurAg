#pragma once
#include "2FUNC.h"

namespace TurAg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::VisualBasic;

	/// <summary>
	/// Сводка для Form1
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;


	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label4;


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Linen;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->comboBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Турция", L"Абхазия", L"Финляндия", L"Испания"});
			this->comboBox1->Location = System::Drawing::Point(280, 27);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(340, 36);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(28, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Столица";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(30, 254);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(597, 37);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Регионы/Районы/Автономные сообщества";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(29, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 37);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Язык";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Linen;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(34, 127);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(221, 36);
			this->textBox1->TabIndex = 4;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Linen;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->listBox1->ItemHeight = 28;
			this->listBox1->Location = System::Drawing::Point(36, 293);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(584, 144);
			this->listBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Linen;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(35, 207);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(220, 36);
			this->textBox2->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Linen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(34, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(221, 37);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Предыдущая страна";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Linen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(645, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(221, 38);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Следующая страна";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Linen;
			this->button3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(645, 370);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(158, 67);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Выйти из программы";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(275, -2);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 26);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Выберите страну...";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Linen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(998, 469);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добро пожаловать!";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 TurAg::TurFunc^ sl = gcnew TurAg::TurFunc();
				 sl->selected_country(comboBox1, textBox1, textBox2, listBox1);
			 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				TurAg::TurFunc^ sl = gcnew TurAg::TurFunc();
				sl->prev_country(comboBox1);
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 TurAg::TurFunc^ sl = gcnew TurAg::TurFunc();
			 sl->next_country(comboBox1);
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult res = MessageBox::Show("Вы действительно хотите выйти из программы?", "Выход", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
			 if (res == ::DialogResult::Yes)
				 Application::Exit();
		 }

};
}

