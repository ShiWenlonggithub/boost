// boost.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;


bool is_pass_word()
{
	char pass_word[12];
	cin >> pass_word;
	return 0 == strcmp(pass_word, "goodpass");
}



int main()
{
	bool pass_status;
	cout << "enter passwd:";
	pass_status = is_pass_word();
	if (!pass_status) {
		cout << "access denied" << endl;
	}
	else {
		cout << "access granted" << endl;
	}
	system("pause");
    return 0;
}

