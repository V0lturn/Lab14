#include "BankCard.h"

BankCard::BankCard()																// ��������� ������������ ��� ���������
{
	CardNumber = "";
	ExpirationDate = "";
	CVV = "";
}

BankCard::BankCard(String^ _CardNumber, String^ _ExpirationDate, String^ _CVV)		// ��������� ������������ � �����������
{
	CardNumber = _CardNumber;
	ExpirationDate = _ExpirationDate;
	CVV = _CVV;
}