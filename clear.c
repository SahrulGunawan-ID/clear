#include <stdio.h>

int main(int argc, char *argv[]) {
    // Jika user memasukkan --help, tampilkan informasi
    if (argc > 1 && strcmp(argv[1], "--help") == 0) {
        printf("Usage: clear [--help]\n");
        printf("A simple terminal screen clearing tool.\n");
        printf("Author: Sahrul Gunawan ID\n");
        printf("License: MIT\n");
        printf("Github : https://github.com/SahrulGunawan-ID\n");
        return 0;
    }

    // Bersihkan layar dengan escape sequence ANSI
    printf("\033c");

    return 0;
}
