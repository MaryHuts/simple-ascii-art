#include <stdio.h>

int main() 
{
    char znak;
    int wysokosc = 8; // Możemy określić, jak duży ma być trójkąt

    printf("Podaj znak do narysowania trojkata: ");
    scanf(" %c", &znak);

    // Pętla zewnętrzna steruje wierszami (od góry do dołu)
    for (int i = 1; i <= wysokosc; i++) {
        
        // Pętla wewnętrzna rysuje spacje (żeby przesunąć trójkąt w prawo)
        for (int j = 1; j <= wysokosc - i; j++) {
            printf(" ");
        }
        
        // Druga pętla wewnętrzna rysuje nasze znaki
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("%c", znak);
        }
        
        // Na koniec każdego wiersza przechodzimy do nowej linii
        printf("\n");
    }

    return 0;
}