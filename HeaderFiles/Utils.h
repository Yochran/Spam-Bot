#pragma once

#include <iostream>
#include <stdlib.h>
#include <string>

#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <fstream>

#include "ClipboardXX.h"

class Utils {
public:
	void U_PRINT(std::string I_MSG) {
		std::cout << I_MSG << std::endl;
	}

	void U_SETDIR(std::string F_DIR) {
		std::string CMD_STR = "cd " + F_DIR;
		try {
			system(CMD_STR.c_str());
			U_PRINT("Path set successfully.\n");
		}
		catch (...) {
			system("color 0c");
			U_PRINT("Error: Could not find specified directory. File may not read.");
			system("pause");
		}
	}

	void U_READFROMFILE(std::string F_FNAME_STR) {
		try {
			std::ifstream IF_STREAM;
			IF_STREAM.open(F_FNAME_STR);
			std::string F_CONTENT;

			U_PRINT("Will start spamming in 5 seconds...");

			Sleep(5000);

			U_PRINT("Spamming now...");
			while (getline(IF_STREAM, F_CONTENT)) {
				Sleep(250);
				CClipboardXX U_CLIPBOARD;
				U_CLIPBOARD << F_CONTENT;

				Sleep(250);

				keybd_event(0x11, 0, 0, 0);
				keybd_event(0x56, 0, 0, 0);

				Sleep(1);

				keybd_event(0x56, 0, 2, 0);
				keybd_event(0x11, 0, 2, 0);
			}

			U_PRINT("Finished spamming.");
			system("pause");
		}
		catch (...) {
			system("color 0c");
			U_PRINT("Error: Could not find specified file.");
			system("pause");
		}
	}
};
