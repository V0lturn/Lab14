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
using namespace System::Text::RegularExpressions;

System::String^ GeneratePassword();												// ������� ��� ��������� ������		
string ConvertStr(System::String^ str);											// ������� ���������� String^ � string
System::String^ ConvertToCliStr(std::string str);								// ������� ���������� string � String^
string Sm3(const string& input);												// ������� ��������� ���������� SM3
System::String^ CheckPassword(System::String^ toCheck, System::Windows::Forms::Label^ label);	// �������� ������ �� ���������
bool IsURLValid(System::String^ email);                                         // ������� ������� ���������    

class CaptchaException : public exception                                       // ���������� ���� ����� ������� �����������
{
public:
    CaptchaException(const string& message) : m_message(message) {}
    const char* what() const noexcept override { return m_message.c_str(); }

private:
    string m_message;
};

class NotAutorizedException : public exception                                  // ���������� ���� ����������� �� ��������
{
public:
    NotAutorizedException(const string& message) : m_message(message) {}
    const char* what() const noexcept override { return m_message.c_str(); }

private:
    string m_message;
};

   