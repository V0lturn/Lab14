#pragma once
using namespace System;

ref class BankCard															// ���� ��� ��������� ���������� ����
{																			
private:																	// ���� �����
	String^ CardNumber;
	String^ ExpirationDate;
	String^ CVV;

public:																		// ������ �����
	BankCard();																// ����������� �� �������������
	BankCard(String^ _CardNumber, String^ _ExpirationDate, String^ _CVV);	// ����������� � �����������

	
};

