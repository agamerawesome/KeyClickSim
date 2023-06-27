#include <iostream>
#define WINVER 0x0500
#include <windows.h>
using namespace std;
int main()
{
    int tempvalue, choose = 0, time = 500;
    // This structure will be used to create the keyboard
    // input event.
    cout << "Choose:\n1. 3hrs\n2. 1seconds\n\nMeow: ";
    cin >> choose;

    INPUT ip;

    // Pause for 5 seconds.
    Sleep(1000);
    if (choose == 1) {
        for (tempvalue = 20; tempvalue > 1; tempvalue = tempvalue + 0) {
            // Set up a generic keyboard event.
            ip.type = INPUT_KEYBOARD;
            ip.ki.wScan = 0; // hardware scan code for key
            ip.ki.time = 0;
            ip.ki.dwExtraInfo = 0;

            // Press the "Num Lock" key
            ip.ki.wVk = 0x90; // virtual-key code for the "a" key
            ip.ki.dwFlags = 0; // 0 for key press
            SendInput(1, &ip, sizeof(INPUT));

            // Release the "Num Lock" key
            ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
            SendInput(1, &ip, sizeof(INPUT));
            Sleep(10800000);
        }
    }

    if (choose == 2) {
        for (tempvalue = 20; tempvalue > 1; tempvalue = tempvalue + 0) {
            // Set up a generic keyboard event.
            ip.type = INPUT_KEYBOARD;
            ip.ki.wScan = 0; // hardware scan code for key
            ip.ki.time = 0;
            ip.ki.dwExtraInfo = 0;

            // Press the "Num Lock" key
            ip.ki.wVk = 0x90; // virtual-key code for the "a" key
            ip.ki.dwFlags = 0; // 0 for key press
            SendInput(1, &ip, sizeof(INPUT));

            // Release the "Num Lock" key
            ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
            SendInput(1, &ip, sizeof(INPUT));
            Sleep(1000);
        }
    }

    if (choose != 1 || choose != 2) {
        cout << "#==============================#\nWrong value inputed\nType in 1 or 2\nMeow Meow :3\n#==============================#";
        return 0;
    }

    // Exit normally
    return 0;
}