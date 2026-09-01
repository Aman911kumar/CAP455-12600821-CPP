#include <stdio.h>
#include <conio.h>
#include <ctype.h> 
#include <windows.h>

int main()
{
    int ch;

    printf("Press A, B, C, D to play notes. Press Q to quit.\n");

    while (1)
    {
        ch = toupper(_getch());

        switch (ch)
        {
        case 'A':
            Beep(440, 300);
            break;
        case 'B':
            Beep(494, 300);
            break;
        case 'C':
            Beep(523, 300);
            break;
        case 'D':
            Beep(587, 300);
            break;
        case 'Q':
            return 0;
        }
    }
}
