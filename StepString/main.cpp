#include <iostream>
#include "String.h"

using namespace std;

int main() {

	
	String str1("Arr");
	String str2("arrrr2");

	cout << str1.GetLength();


	cout << endl << str1.ToLower() << endl;

	cout << endl << str2.ToUpper() << endl;

	String str3("my name is hans");
	cout << "Substring " << str3.subString("hans");


	system("pause");
	return 0;
}