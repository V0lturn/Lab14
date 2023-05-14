#pragma once
#include "General.h"

namespace KhomychLr14TxPrZSGr22 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// ������ ��� MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	private:
		User^ CurrentUser;
	public:
		MyForm4(User^ u)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//

			this->CurrentUser = u;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(29, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(647, 55);
			this->label1->TabIndex = 8;
			this->label1->Text = L"����������� ����� ������";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(111, 92);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series1->ChartArea = L"ChartArea1";
			series1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(482, 330);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button1->Location = System::Drawing::Point(214, 442);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(269, 60);
			this->button1->TabIndex = 10;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(711, 531);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
		Dictionary<int, int>^ cardCountByYear = gcnew Dictionary<int, int>();	// ������� ���� ����������������� ��� ���������� ���������� ��� ������� ������ �� ����� ��, 
																				// �� ���� - ��, � �������� - ������� ������, �� ����������� � ����� ����.
		for each (BankCard ^ bankcard in CurrentUser->UsersBankCards)			// ��������� ����� ����� ������ ����������� � ���� UsersBankCards ��������� �����������
		{						  // �������� ���� ��������� ������ 䳿 ����� � ��'���� bankcard �� ������������ �� � ��'��� DateTime � ������������� ParseExact()
			DateTime cardDate = DateTime::ParseExact(bankcard->GetExpirationDate(), "yy/MM", System::Globalization::CultureInfo::InvariantCulture);
			int year = cardDate.Year;											// �������� �� � ���� �����
			if (cardCountByYear->ContainsKey(year))								// ����������, �� ��� ������ ������� cardCountByYear ���� � �������� �����
			{
				cardCountByYear[year]++;
			}
			else																// ���� ���� �� ����, ������ ���� � ������� � ��������� 1 ��� ����� ����
			{
				cardCountByYear->Add(year, 1);
			}
		}

		chart1->Series->Clear();												// ������� ��'��� �������
		chart1->Series->Add("����� 䳿 �����");
		chart1->ChartAreas[0]->AxisX->Title = "г�";
		chart1->ChartAreas[0]->AxisY->Title = "ʳ������";
		chart1->Series[0]->ChartType = DataVisualization::Charting::SeriesChartType::Column;
		chart1->ChartAreas[0]->AxisY->Interval = 1;

		for each (KeyValuePair<int, int> kvp in cardCountByYear)					// ������ ���� � �������
		{																			// ��������� �� ������ ��� ����-�������� � �������� cardCountByYear
			DataPoint^ point = gcnew DataPoint();									// ��������� ��'��� DataPoint ��� ��������� �� �������
			point->AxisLabel = kvp.Key.ToString();									// ������������ �������� ���� �� �� X
			point->YValues[0] = kvp.Value;											// ������������ �������� �� �� Y	
			chart1->Series[0]->Points->Add(point);									// ������ ����� �� ��� �������
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {	// �����
	Close();
}
};
}
