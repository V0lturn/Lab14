#pragma once

namespace KhomychLr14TxPrZSGr22 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;







	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ button4;






	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;





	protected:



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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabControl1->Location = System::Drawing::Point(66, 32);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(486, 604);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->ForeColor = System::Drawing::Color::White;
			this->tabPage1->Location = System::Drawing::Point(4, 37);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabPage1->Size = System::Drawing::Size(478, 563);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"�����������";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(3, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(472, 91);
			this->label1->TabIndex = 2;
			this->label1->Text = L"�������� ������";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Location = System::Drawing::Point(4, 37);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(478, 563);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"���������";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::PaleGreen;
			this->button4->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button4->Location = System::Drawing::Point(63, 456);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(359, 68);
			this->button4->TabIndex = 13;
			this->button4->Text = L"��������������";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(3, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(472, 91);
			this->label4->TabIndex = 9;
			this->label4->Text = L"�������� ������";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox4->Location = System::Drawing::Point(223, 142);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(199, 32);
			this->textBox4->TabIndex = 0;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox5->Location = System::Drawing::Point(223, 206);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(199, 32);
			this->textBox5->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::LightGray;
			this->label2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label2->Location = System::Drawing::Point(105, 281);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 60);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button1->Location = System::Drawing::Point(294, 281);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 60);
			this->button1->TabIndex = 4;
			this->button1->Text = L"��������\r\n����";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox6->Location = System::Drawing::Point(307, 369);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(115, 32);
			this->textBox6->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(73, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 32);
			this->label5->TabIndex = 7;
			this->label5->Text = L"����:";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(73, 206);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 32);
			this->label6->TabIndex = 8;
			this->label6->Text = L"������:";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label7->Location = System::Drawing::Point(73, 369);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(180, 32);
			this->label7->TabIndex = 9;
			this->label7->Text = L"����� �����:";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(73, 369);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(180, 32);
			this->label3->TabIndex = 21;
			this->label3->Text = L"����� �����:";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Location = System::Drawing::Point(73, 206);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 32);
			this->label8->TabIndex = 20;
			this->label8->Text = L"������:";
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label9->Location = System::Drawing::Point(73, 142);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(130, 32);
			this->label9->TabIndex = 19;
			this->label9->Text = L"����:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox1->Location = System::Drawing::Point(307, 369);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(115, 32);
			this->textBox1->TabIndex = 18;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PaleGreen;
			this->button3->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button3->Location = System::Drawing::Point(294, 281);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 60);
			this->button3->TabIndex = 17;
			this->button3->Text = L"��������\r\n����";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::LightGray;
			this->label10->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label10->Location = System::Drawing::Point(105, 281);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(126, 60);
			this->label10->TabIndex = 16;
			this->label10->Text = L"label10";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox2->Location = System::Drawing::Point(223, 206);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(199, 32);
			this->textBox2->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox3->Location = System::Drawing::Point(223, 142);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(199, 32);
			this->textBox3->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button2->Location = System::Drawing::Point(63, 456);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(359, 68);
			this->button2->TabIndex = 14;
			this->button2->Text = L"��������������";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(615, 698);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Khomych Lab14";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
