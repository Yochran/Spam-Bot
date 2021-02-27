#include "Utils.h"

#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <string>

#include <fstream>
#include <istream>
#include <ostream>

using namespace std;

int main()
{
	Utils _Utils;

	system("title Spambot v1.0");
	system("color 0f");

	_Utils.U_PRINT("Spambot v1.0 has started. Initiating now...");
	_Utils.U_PRINT("Enter path to file: ");

	string FILE_DIR;
	cin >> FILE_DIR;
	_Utils.U_PRINT(FILE_DIR);

	_Utils.U_PRINT("Enter file name: ");

	string F_NAME_STR;
	cin >> F_NAME_STR;

	_Utils.U_PRINT(F_NAME_STR);

	system("pause");
}
