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
	void sendMessage(string MESSAGE) {
		cout << MESSAGE << endl;
	}

	 void setDirectory(string F_DIR) {
		string CMD_STR = "cd " + F_DIR;
		try {
			system(CMD_STR.c_str());
			sendMessage("Path set successfully.\n");
		}
		catch (...) {
			system("color 0c");
			sendMessage("Error: Could not find specified directory. File may not read.");
			system("pause");
		}
	}

	void readFromFile(string F_FNAME_STR) {
		try {
			ifstream IF_STREAM;

			IF_STREAM.open(F_FNAME_STR);

			string F_CONTENT;

			sendMessage("Will start spamming in 5 seconds...");

			Sleep(5000);
			while (getline(IF_STREAM, F_CONTENT)) {
				CClipboardXX clipboard;
				clipboard << F_CONTENT;
				Sleep(100);
				clipboard >> F_CONTENT;
			}
		}
		catch (...) {
			system("color 0c");
			sendMessage("Error: Could not find specified file.");
			system("pause");
		}
	}
};
