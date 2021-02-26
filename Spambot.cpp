#include "Utils.cpp"

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
	Utilities UTILS;

	system("title Spambot v1.0");
	system("color 0f");

	UTILS.sendMessage("Spambot v1.0 has started. Initiating now...");
	UTILS.sendMessage("Enter path to file: ");

	string F_DIR;
	cin >> F_DIR;

	UTILS.setDirectory(F_DIR);

	UTILS.sendMessage("Enter file name: ");

	string F_NAME_STR;
	cin >> F_NAME_STR;

	UTILS.readFromFile(F_NAME_STR);

	system("pause");
}
