#include <stdio.h>

int main() 
{
    char znak;

    // 1. Pytamy użytkownika o znak
    printf("Wpisz jeden znak (np. *, @, +), ktorym mam narysowac serce: ");
    scanf(" %c", &znak); // Spacja przed %c ignoruje ewentualne białe znaki (np. Enter)

    printf("\nOto Twoje serce zrobione ze znaku '%c':\n\n", znak);

    // 2. Rysujemy serce linijka po linijce za pomocą printf
    // Używamy spacji dla pustych miejsc i wczytanego znaku dla kształtu
    printf("   %c%c     %c%c\n", znak, znak, znak, znak);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c\n", znak, znak, znak, znak, znak, znak, znak, znak, znak, znak, znak, znak);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", znak, znak, znak, znak, znak, znak, znak, znak, znak, znak, znak, znak, znak, znak, znak);
    printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c\n", znak, znak, znak, znak, znak, znak, znak, znak, znak, znak, znak, znak, znak);
    printf("   %c%c%c%c%c%c%c%c%c\n", znak, znak, znak, znak, znak, znak, znak, znak, znak);
    printf("     %c%c%c%c%c\n", znak, znak, znak, znak, znak);
    printf("       %c\n", znak);

    return 0;
}