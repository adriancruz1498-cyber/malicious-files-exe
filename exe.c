#include <windows.h>

int main() {
    HDC hDesktop = GetDC(NULL);

    int sw = GetSystemMetrics(SM_CXSCREEN);
    int sh = GetSystemMetrics(SM_CYSCREEN);

    while (1) {
        // Efecto visual simple usando StretchBlt
        StretchBlt(
            hDesktop,          // destino
            10, 10, sw-20, sh-20, // tamaño destino
            hDesktop,          // origen
            0, 0, sw, sh,      // tamaño origen
            SRCCOPY            // modo
        );

        Sleep(50); // 50ms
    }

    ReleaseDC(NULL, hDesktop);
    return 0;
}
