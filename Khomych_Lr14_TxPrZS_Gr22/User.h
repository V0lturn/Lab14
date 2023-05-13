#pragma once
#include "General.h"
#include <cryptopp/cryptlib.h>
using namespace System::Collections::Generic;

ref class User													// ���� ��� ��������� ������������
{	
private:														// ���� �����
	System::String^ Login;
	System::String^ Password;

public:	
	List<Website^>^ UserWebsites;								// ���� ��� ��������� ����� �����
	List<BankCard^>^ UsersBankCards;

	User();														// ����������� �� �������������
	User(System::String^ _Login, System::String^ _Password);	// ����������� � �����������

	System::String^ GetLogin();									// ������� ��� �����
	System::String^ GetPassword();								// ������� ��� ������

	void SaveUserInFile();										// ����� ���������� � ����
};