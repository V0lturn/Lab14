#include "Website.h"

Website::Website() {									// ��������� ������������ ��� ���������
	Login = "";
	Password = "";
}

Website::Website(String^ _Login, String^ _Password){	// ��������� ������������ � �����������
	Login = _Login;
	Password = _Password;
}