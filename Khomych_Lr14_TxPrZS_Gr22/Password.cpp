#include "General.h"

System::String^ GeneratePassword()
{
	System::Random^ random = gcnew System::Random();													// ��'��� ��� ��������� ���������� �����
	System::String^ psw = "";																			// ������� ��� ��������� ������

	for (int i = 0; i < 12; i++) {
		char symbol = char(33 + random->Next(94));														// ������� ASCII ������� �� 33 �� 126
		System::String^ symbol_str = gcnew System::String(symbol, 1);
		psw = System::String::Concat(psw, symbol_str);
	}

	return psw;
}

System::String^ CheckPassword(System::String^ toCheck, System::Windows::Forms::Label^ label) {			// ��������� ������� ��� �������� ������ �� ���������
	bool capital_letter = false, small_letter = false, number = false, special_char = false, length = false;

	if (toCheck->Length >= 8) {
		length = true;
	}

	for (int i = 0; i < toCheck->Length; i++) {
		if (toCheck[i] >= 65 && toCheck[i] <= 90) {														// �������� �� ������ �����
			capital_letter = true;
		}
		if (toCheck[i] >= 97 && toCheck[i] <= 122) {													// �������� �� �������� �����
			small_letter = true;
		}
		if (toCheck[i] >= 48 && toCheck[i] <= 57) {														// �������� �� �����
			number = true;
		}
		if ((toCheck[i] >= 33 && toCheck[i] <= 47) || (toCheck[i] >= 58 && toCheck[i] <= 64) ||			// �������� �� ����. ������
			(toCheck[i] >= 91 && toCheck[i] <= 96) || (toCheck[i] >= 123 && toCheck[i] <= 126)) {
			special_char = true;
		}
	}

	if (((small_letter && !capital_letter && !number && !special_char) ||								// ������ ������ ����� ������� �����
		(!small_letter && capital_letter && !number && !special_char) ||								// ������ ������ ����� ����� �����
		(!small_letter && !capital_letter && number && !special_char) ||								// ������ ������ ����� �����
		(!small_letter && !capital_letter && !number && special_char)) &&								// ������ ������ ����� ����. �������
		!(small_letter && capital_letter && number && special_char)										// ������ ������ ��������� ������� ���� �������
		|| !length) { 
		label->ForeColor = System::Drawing::Color::Red;
		return "������� ������";
	}
	else if (capital_letter && small_letter && number && special_char && length) {
		label->ForeColor = System::Drawing::Color::Green;
		return "�������� ������";
	}
	else {
		label->ForeColor = System::Drawing::Color::Orange;
		return "������� ������";
	}
}