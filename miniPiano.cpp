#include <iostream>
#include <conio.h>
#include <dos.h>
#include <windows.h>

using namespace std;

int main(){
    cout << "Go piano !";
    while (true){
        int ch = getch();
        switch (ch)
        {
        case 'a':
            Beep(262, 500);
            break;
        case 's':
            Beep(294, 500);
            break;
        case 'd':
            Beep(330, 500);
            break;
        case 'f':
            Beep(349, 500);
            break;
        case 'g':
            Beep(392, 500);
            break;
        case 'h':
            Beep(440, 500);
            break;
        case 'j':
            Beep(494, 500);
            break;
        case 'k':
            Beep(523, 500);
            break;
        case 'l':
            Beep(587, 500);
            break;
        case 'q':
            return 0;
            break;
        }
    }
    

 return 0;
}