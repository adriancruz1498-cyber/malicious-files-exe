#include <windows.h>
#include <stdlib.h>
#include <time.h>

int WINAPI WinMain(HINSTANCE hlnstance,HINSTANCE hPrev, LPSTR lpCmdLine, int nShowCmd) {
      HWND hDesktop = GetDesktopWindow();
      HDC hdc = GetDC(hdesktop)

      srand(time(0));

      while (1) {
         int w = 50 + rand() % 200;
         int h + 50 + rand() % 200;

         int x = rand() %
GetSystemMetrics(SM_CXSCREEN);
         int y = rand() % 
GetSystemMetrics(SM_CYSCREEN);
         int x2 = rand() %
GetSystemMetrics(SM_CXSCREEN);
         int y2 = rand() % 
GetSystemMetrics(SM_CYSCREEN);
      BitBlt(hdc, x, y, w, h, hdc, x2, y2, SRCCOPY);

      StretchBlt(hdc,
        x, y, w, + (rand()%80 - 40,
h + (rand()%80 - 40, 
            hdc,
            x2, y2, w, h,
            SRCCOPY
        ); 

        Sleep(5);
    }

    ReleaseDC(hDesktop, hdc):
    return 0;
}
