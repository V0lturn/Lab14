#pragma once
using namespace System;

public ref class Website                            // ���� ��� ���������� ����� ��� ����� �� �������
{
private:                                            // ���� �����
	String^ Login;
	String^ Password;

public:
	Website();                                      // ����������� �� �������������
	Website(String^ _Login, String^ _Password);     // ����������� � �����������
};

