#include <wchar.h>
#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");  // Required for Unicode support

    wprintf(L"Braille Test: ⠘⣿⠘⣿\n");

    getchar(); // Pause on Windows
    return 0;
}

