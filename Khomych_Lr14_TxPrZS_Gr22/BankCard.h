#pragma once

ref class BankCard															// ���� ��� ��������� ���������� ����
{																			
private:																	// ���� �����
	System::String^ CardNumber;
	System::String^ ExpirationDate;
	System::String^ CVV;

public:																		// ������ �����
	BankCard();																// ����������� �� �������������
	BankCard(System::String^ _CardNumber, System::String^ _ExpirationDate, System::String^ _CVV);	// ����������� � �����������
};

