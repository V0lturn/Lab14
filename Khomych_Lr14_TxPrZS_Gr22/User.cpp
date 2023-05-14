#include "User.h"
using namespace System::Windows::Forms;

User::User()																					// ��������� ������������ ��� ���������
{
	Login = "";
	Password = "";
	UserWebsites = gcnew List<Website^>();
	UsersBankCards = gcnew List<BankCard^>();
}

User::User(System::String^ _Login, System::String^ _Password)									// ��������� ������������ � �����������
{
	Login = _Login;
	Password = _Password;
	UserWebsites = gcnew List<Website^>();
	UsersBankCards = gcnew List<BankCard^>();
}

System::String^ User::GetLogin()																// �������� �������� �����
{
	return Login;
}

System::String^ User::GetPassword()																// �������� �������� ��� ������
{
	return Password;
}

void User::SaveUserInFile()																		// ��������� ������ ������ ����� ����������� � ����
{
	try {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();								// ��������� ���� �������� ���� ��� ���������� �����
		//SaveFileDialog^ saveFileDialog1 = nullptr;											// ������ ����������
		saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";				// ������������ ������ ��� ������ ���� �����, �� ����� ��������
		saveFileDialog1->Title = "Save user";													// ������������ ��������� ���������� ����

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {				// ���� ���������� �������� ������ "OK" � ���������� ���
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);	// ��������� ��'��� StreamWriter ��� ������ � ����

			sw->WriteLine("User was autorized successfully");											// �������� ��������� ��� �����. ��� ������� ��������� �������� SM3 Cryptopp
			sw->WriteLine("\tUser login: " + ConvertToCliStr(Sm3(ConvertStr(GetLogin()))));				// ������� ��� � ������ string,���� �������� ��� ����������� ���������� � ����� �� �������� ���������. 
			sw->WriteLine("\tUser Password: " + ConvertToCliStr(Sm3(ConvertStr(GetPassword()))));		// ��� ������������ WriteLine ������� ������������ ������� �������� � String^

			sw->WriteLine("\nUser website data");
			int counter = 1;
			for each (Website ^ website in UserWebsites) {												// ��� ��� �� ����� �������� ���������
				sw->WriteLine("#" + counter + " " + website->GetLink());								
				sw->WriteLine("\t" + ConvertToCliStr(Sm3(ConvertStr(website->GetLogin()))));
				sw->WriteLine("\t" + ConvertToCliStr(Sm3(ConvertStr(website->GetPassword()))));

				counter++;
			}

			sw->WriteLine("\nUser bank data");
			counter = 1;
			for each (BankCard ^ bankcard in UsersBankCards) {											// ��� ��� �� ����� �������� ���������
				sw->WriteLine("#" + counter + " " + ConvertToCliStr(Sm3(ConvertStr(bankcard->GetCardNumber()))));
				sw->WriteLine("\t" + ConvertToCliStr(Sm3(ConvertStr(bankcard->GetExpirationDate()))));
				sw->WriteLine("\t" + ConvertToCliStr(Sm3(ConvertStr(bankcard->GetCVV()))));

				counter++;
			}
			sw->Close();																				// ��������� ��'��� StreamWriter											
			
		}
	}
	catch (System::NullReferenceException^ e) {					// ���� �������� FileName � ������� saveFileDialog1 �� �������� nullptr.
		MessageBox::Show("������� ������� ��� ������� �����", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
