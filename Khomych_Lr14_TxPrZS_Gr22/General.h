#pragma once						// ��������� ���� ��� ���������� ������������ �������
#include "BankCard.h";
#include "Website.h";
#include "User.h";

#include <fstream>
#include <Windows.h>
#include "cryptopp/sm3.h"
#include "cryptopp/hex.h"
#include <msclr/marshal_cppstd.h>   // ��� ������������� ����� System::String^ � std::string
#include <iostream>
using namespace std;

System::String^ GeneratePassword();												// ������� ��� ��������� ������		
string ConvertStr(System::String^ str);											// ������� ���������� String^ � string
System::String^ ConvertToCliStr(std::string str);								// ������� ���������� string � String^
string Sm3(const string& input);												// ������� ��������� ���������� SM3
System::String^ CheckPassword(System::String^ toCheck, System::Windows::Forms::Label^ label);	// �������� ������ �� ���������