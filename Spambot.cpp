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
	Utilities utils;

	system("title Spambot v1.0");
	system("color 0f");

	utils.sendMessage("Spambot v1.0 has started. Initiating now...");

	utils.sendMessage("Enter path to file: ");

	string path;
	cin >> path;

	utils.setDirectory(path);

	utils.sendMessage("Enter file name: ");

	string fileName;
	cin >> fileName;

	utils.readFromFile(fileName);

	system("pause");
}
