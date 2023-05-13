#include "BankCard.h"

BankCard::BankCard()																						// ��������� ������������ ��� ���������
{
	CardNumber = "";
	ExpirationDate = "";
	CVV = "";
}

BankCard::BankCard(System::String^ _CardNumber, System::String^ _ExpirationDate, System::String^ _CVV)		// ��������� ������������ � �����������
{
	CardNumber = _CardNumber;
	ExpirationDate = _ExpirationDate;
	CVV = _CVV;
}

System::String^ BankCard::GetCardNumber()				// ��������� �������� ��� ��������� ������ �����
{
	return CardNumber;
}

System::String^ BankCard::GetExpirationDate()			// ��������� �������� ��� ��������� ������ 䳿 �����
{
	return ExpirationDate;
}

System::String^ BankCard::GetCVV()						// ��������� �������� ��� ��������� CVV �����
{
	return CVV;
}
