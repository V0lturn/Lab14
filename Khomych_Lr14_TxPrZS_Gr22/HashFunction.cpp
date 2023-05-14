#include "General.h"

string ConvertStr(System::String^ str) {				// ������� ���������� String^ � string
	msclr::interop::marshal_context context;
	return context.marshal_as<std::string>(str);
}

System::String^ ConvertToCliStr(std::string str) {		// ������� ���������� string � String^
	return gcnew System::String(str.c_str());
}

string Sm3(const string& input) {						// ������� ��������� ���������� SM3
	CryptoPP::SM3 hash;
	CryptoPP::HexEncoder encoder;
	string output;
	byte digest[CryptoPP::SM3::DIGESTSIZE];
	hash.CalculateDigest(digest, reinterpret_cast<const
		byte*>(input.c_str()), input.length());
	encoder.Attach(new CryptoPP::StringSink(output));
	encoder.Put(digest, sizeof(digest));
	encoder.MessageEnd();
	return output;
}