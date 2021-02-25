#include "Utils.h"

#include <iostream>
#include <stdlib.h>
#include <string>

#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <fstream>

#include "ClipboardXX.h"

using namespace std;

class Utilities {
public:
	void sendMessage(string message) {
		cout << message << endl;
	}

	 void setDirectory(string dir) {
		string command = "cd " + dir;
		try {
			system(command.c_str());
			sendMessage("Path set successfully.\n");
		}
		catch (...) {
			system("color 0c");
			sendMessage("Error: Could not find specified directory. File may not read.");
			system("pause");
		}
	}

	void readFromFile(string fileName) {
		ifstream file;
		try {
			file.open(fileName);

			ifstream file;
			file.open(fileName);

			string content;

			sendMessage("Will start spamming in 5 seconds...");

			Sleep(5000);
			while (getline(file, content)) {
				CClipboardXX clipboard;
				clipboard << content;
				clipboard >> content;
			}
		}
		catch (...) {
			system("color 0c");
			sendMessage("Error: Could not find specified file.");
			system("pause");
		}
	}
};
