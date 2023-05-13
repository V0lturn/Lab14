#include "User.h"

User::User()													// ��������� ������������ ��� ���������
{
	Login = "";
	Password = "";
	UserWebsites = gcnew List<Website^>();
	BankCards = gcnew List<BankCard^>();
}

User::User(System::String^ _Login, System::String^ _Password)	// ��������� ������������ � �����������
{
	Login = _Login;
	Password = _Password;
	UserWebsites = gcnew List<Website^>();
	BankCards = gcnew List<BankCard^>();
}

System::String^ User::GetLogin()								// �������� �������� �����
{
	return Login;
}

System::String^ User::GetPassword()								// �������� �������� ��� ������
{
	return Password;
}