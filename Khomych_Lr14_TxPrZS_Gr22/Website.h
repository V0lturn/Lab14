#pragma once

public ref class Website                            // ���� ��� ���������� ����� ��� ����� �� �������
{
private:                                            // ���� �����
	System::String^ Link;
	System::String^ Login;
	System::String^ Password;

public:
	Website();                                      // ����������� �� �������������
	Website(System::String^ _Link, System::String^ _Login, System::String^ _Password);     // ����������� � �����������

	System::String^ GetLink();						// ������� ��� ��������� ���������
	System::String^ GetLogin();						// ������� ��� ��������� �����
	System::String^ GetPassword();					// ������� ��� ��������� ������
};

