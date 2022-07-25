#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    while (true)
    {

        if (GetAsyncKeyState(0x01))
        {
            cout << "Left Mouse Button" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x02))
        {
            cout << "Right Mouse Button" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x03))
        {
            cout << "Control-break Processing" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x04))
        {
            cout << "Middle mouse button" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x05))
        {
            cout << "X1 mouse button" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x06))
        {
            cout << "X2 mouse button" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x07))
        {
            cout << "Undefined key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x08))
        {
            cout << "BACKSPACE key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x09))
        {
            cout << "TAB key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x0A))
        {
            cout << "Reserved key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x0B))
        {
            cout << "Reserved key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x0C))
        {
            cout << "CLEAR key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x0D))
        {
            cout << "ENTER key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x0E))
        {
            cout << "Undefined key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x0F))
        {
            cout << "Undefined key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x10))
        {
            cout << "SHIFT key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x11))
        {
            cout << "CTRL key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x12))
        {
            cout << "ALT key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x13))
        {
            cout << "PAUSE key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x14))
        {
            cout << "CAPSLOCK key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x15))
        {
            cout << "IME Kana mode" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x16))
        {
            cout << "IME on" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x17))
        {
            cout << "IME Junja mode" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x18))
        {
            cout << "IME Final mode" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x19))
        {
            cout << "IME Kanji mode" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x1A))
        {
            cout << "IME Off" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x1B))
        {
            cout << "ESC" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x1C))
        {
            cout << "IME convert" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x1D))
        {
            cout << "IME nonconvert" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x1E))
        {
            cout << "IME accept" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x1F))
        {
            cout << "IME mode change request" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x20))
        {
            cout << "SPACEBAR Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x21))
        {
            cout << "PAGE UP Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x22))
        {
            cout << "PAGE DOWN Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x24))
        {
            cout << "HOME Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x25))
        {
            cout << "LEFT ARROW Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x26))
        {
            cout << "UP ARROW Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x27))
        {
            cout << "RIGHT ARROW Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x28))
        {
            cout << "DOWN ARROW Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x29))
        {
            cout << "SELECT Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x2A))
        {
            cout << "PRINT Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x2B))
        {
            cout << "EXECUTE Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x2C))
        {
            cout << "PRINT SCREEN Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x2D))
        {
            cout << "INS Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x2E))
        {
            cout << "DEL Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x2F))
        {
            cout << "HELP Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x30))
        {
            cout << "0 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x31))
        {
            cout << "1 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x32))
        {
            cout << "2 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x33))
        {
            cout << "3 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x34))
        {
            cout << "4 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x35))
        {
            cout << "5 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x36))
        {
            cout << "6 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x37))
        {
            cout << "7 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x38))
        {
            cout << "8 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x39))
        {
            cout << "9 Key" << endl;
            Sleep(200);
        }
        /*Letras Abecedario***********************/
        if (GetAsyncKeyState(0x41))
        {
            cout << "A Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x42))
        {
            cout << "B Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x43))
        {
            cout << "C Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x44))
        {
            cout << "D Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x45))
        {
            cout << "E Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x46))
        {
            cout << "F Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x47))
        {
            cout << "G Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x48))
        {
            cout << "H Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x49))
        {
            cout << "I Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x4A))
        {
            cout << "J Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x4B))
        {
            cout << "K Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x4C))
        {
            cout << "L Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x4D))
        {
            cout << "M Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x4E))
        {
            cout << "N Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x4F))
        {
            cout << "O Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x50))
        {
            cout << "P Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x51))
        {
            cout << "Q Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x52))
        {
            cout << "R Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x53))
        {
            cout << "S Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x54))
        {
            cout << "T Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x55))
        {
            cout << "U Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x56))
        {
            cout << "V Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x57))
        {
            cout << "W Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x58))
        {
            cout << "X Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x59))
        {
            cout << "Y Pressed" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x5A))
        {
            cout << "Z Pressed" << endl;
            Sleep(200);
        }
        /*Letras Abecedario***********************/
        if (GetAsyncKeyState(0x5B))
        {
            cout << "Left Windows key (Natural keyboard)" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x5C))
        {
            cout << "Right Windows key (Natural keyboard)" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x5D))
        {
            cout << "Applications key (Natural keyboard)" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x5E))
        {
            cout << "Reserved" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x5F))
        {
            cout << "Computer Sleep Key" << endl;
            Sleep(200);
        }

        /*NumPad*********************************/
        if (GetAsyncKeyState(0x60))
        {
            cout << "Numeric Keypad 0 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x61))
        {
            cout << "Numeric Keypad 1 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x62))
        {
            cout << "Numeric Keypad 2 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x63))
        {
            cout << "Numeric Keypad 3 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x64))
        {
            cout << "Numeric Keypad 4 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x65))
        {
            cout << "Numeric Keypad 5 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x66))
        {
            cout << "Numeric Keypad 6 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x67))
        {
            cout << "Numeric Keypad 7 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x68))
        {
            cout << "Numeric Keypad 8 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x69))
        {
            cout << "Numeric Keypad 9 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x6A))
        {
            cout << "Numeric Keypad Multiply Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x6B))
        {
            cout << "Numeric Keypad Add Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x6C))
        {
            cout << "Numeric Keypad Separator Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x6D))
        {
            cout << "Numeric Keypad Subtract Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x6E))
        {
            cout << "Numeric Keypad Decimal Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x6F))
        {
            cout << "Numeric Keypad Divide Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x90))
        {
            cout << "Numeric Keypad NUMLOCK Key" << endl;
            Sleep(200);
        }
        /*NumPad*********************************/
        /*Function Key (F1, F2)******************/
        if (GetAsyncKeyState(0x70))
        {
            cout << "F1 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x71))
        {
            cout << "F2 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x72))
        {
            cout << "F3 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x73))
        {
            cout << "F4 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x74))
        {
            cout << "F5 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x75))
        {
            cout << "F6 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x76))
        {
            cout << "F7 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x77))
        {
            cout << "F8 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x78))
        {
            cout << "F9 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x79))
        {
            cout << "F10 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x7A))
        {
            cout << "F11 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x7B))
        {
            cout << "F12 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x7C))
        {
            cout << "F13 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x7D))
        {
            cout << "F14 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x7E))
        {
            cout << "F15 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x7F))
        {
            cout << "F16 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x80))
        {
            cout << "F17 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x81))
        {
            cout << "F18 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x82))
        {
            cout << "F19 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x83))
        {
            cout << "F20 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x84))
        {
            cout << "F21 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x85))
        {
            cout << "F22 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x86))
        {
            cout << "F23 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x87))
        {
            cout << "F24 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x88))
        {
            cout << "Unassigned Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x89))
        {
            cout << "Unassigned Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x8A))
        {
            cout << "Unassigned Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x8B))
        {
            cout << "Unassigned Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x8C))
        {
            cout << "Unassigned Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x8D))
        {
            cout << "Unassigned Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x8E))
        {
            cout << "Unassigned Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0x8F))
        {
            cout << "Unassigned Key" << endl;
            Sleep(200);
        }
        /*Function Key (F1, F2)******************/
        if (GetAsyncKeyState(0xA0))
        {
            cout << "LEFT SHIFT Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xA1))
        {
            cout << "RIGHT SHIFT Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xA2))
        {
            cout << "LEFT CONTROL Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xA3))
        {
            cout << "RIGHT CONTROL Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xA4))
        {
            cout << "ALT Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xA5))
        {
            cout << "RIGHT ALT Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xA6))
        {
            cout << "BROWSER BACK Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xA7))
        {
            cout << "BROWSER FORWARD Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xA8))
        {
            cout << "BROWSER REFRESH Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xA9))
        {
            cout << "BROWSER STOP Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xAA))
        {
            cout << "BROWSER SEARCH Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xAB))
        {
            cout << "BROWSER FAVORITES Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xAC))
        {
            cout << "BROWSER START AND HOME Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xAD))
        {
            cout << "VOLUME MUTE Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xAE))
        {
            cout << "VOLUME DOWN Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xAF))
        {
            cout << "VOLUME UP Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xB0))
        {
            cout << "NEXT TRACK Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xB1))
        {
            cout << "PREVIOUS TRACK Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xB2))
        {
            cout << "STOP MEDIA Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xB3))
        {
            cout << "PLAY/PAUSE MEDIA Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xB4))
        {
            cout << "START MAIL Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xB5))
        {
            cout << "SELECT MEDIA Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xB6))
        {
            cout << "START APPLICATION 1 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xB7))
        {
            cout << "START APPLICATION 1 Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xB8))
        {
            cout << "RESERVED" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xB9))
        {
            cout << "RESERVED" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xBA))
        {
            cout << "Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the ';:' key 0xBA" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xBB))
        {
            cout << "For any country/region, the '+' key 0xBB" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xBC))
        {
            cout << "For any country/region, the ',' key 0xBC" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xBD))
        {
            cout << "For any country/region, the '-' key 0xBD" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xBE))
        {
            cout << "For any country/region, the '.' key 0xBE" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xBF))
        {
            cout << "Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the '/?' key 0xBF" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xC0))
        {
            cout << "Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the '`~' key" << endl;
            Sleep(200);
        }
        

        if (GetAsyncKeyState(0xFE))
        {
            cout << "Clear Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xF9))
        {
            cout << "Erase EOF Key" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xDF))
        {
            cout << "Used for miscellaneous characters Key 0xDF" << endl;
            Sleep(200);
        }
        if (GetAsyncKeyState(0xDE))
        {
            cout << "Used for miscellaneous characters Key 0xDE" << endl;

            Sleep(200);
        }
        if (GetAsyncKeyState(0xDD))
        {
            cout << "Used for miscellaneous characters Key 0xDD" << endl;

            Sleep(200);
        }
        if (GetAsyncKeyState(0xDC))
        {
            cout << "Used for miscellaneous characters Key 0xDC" << endl;

            Sleep(200);
        }
        if (GetAsyncKeyState(0xDB))
        {
            cout << "Used for miscellaneous characters Key 0xDB" << endl;

            Sleep(200);
        }
        if (GetAsyncKeyState(0xC1))
        {
            cout << "Reserved Key 0xc1" << endl;

            Sleep(200);
        }
    }
    getch();
}

