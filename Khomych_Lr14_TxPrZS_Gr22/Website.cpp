#include "Website.h"

Website::Website() {									// ��������� ������������ ��� ���������
	Link = "";
	Login = "";
	Password = "";
}

Website::Website(System::String^ _Link,System::String^ _Login, System::String^ _Password){	// ��������� ������������ � �����������
	Link = _Link;
	Login = _Login;
	Password = _Password;
}

System::String^ Website::GetLogin()
{
	return Login;
}