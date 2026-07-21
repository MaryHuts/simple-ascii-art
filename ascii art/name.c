//name.c
#include <stdio.h>
#include "litery.h"

int main()
{
    // Miejsce na max 10 liter + 1 miejsce na znak końca napisu '\0'
    char imie[11];
    char znak;

    printf("Jak masz na imie? (max 10 liter): ");
    scanf(" %10s", imie); //%10s zabezpiecza przed wpisaniem zbyt długiego tekstu

    printf("Jakim znakiem rysowac? (np. *, @, +): ");
    scanf(" %c", &znak);

    printf("\n--- OTO TWOJE IMIE W ASCII ART ---\n\n");

    // Tworzymy wskaźnik wskazujący na początek tablicy
    char *p = imie;

    // Pętla wykonuje się tak długo, aż wskaźnik natrafi na znak '\0'
    while (*p != '\0') 
    {
        // Wywołujemy odpowiednią funkcję dla znaku, na który obecnie wskazuje *p
        switch (*p)
        {
        case 'A':
        case 'a':
            rysuj_A(znak);
            break;
        case 'B':
        case 'b':
            rysuj_B(znak);
            break;
        case 'C':
        case 'c':
            rysuj_C(znak);
            break;
        case 'D':
        case 'd':
            rysuj_D(znak);
            break;
        case 'E':
        case 'e':
            rysuj_E(znak);
            break;
        case 'F':
        case 'f':
            rysuj_F(znak);
            break;
        case 'G':
        case 'g':
            rysuj_G(znak);
            break;
        case 'H':
        case 'h':
            rysuj_H(znak);
            break;
        case 'I':
        case 'i':
            rysuj_I(znak);
            break;
        case 'J':
        case 'j':
            rysuj_J(znak);
            break;
        case 'K':
        case 'k':
            rysuj_K(znak);
            break;
        case 'L':
        case 'l':
            rysuj_L(znak);
            break;
        case 'M':
        case 'm':
            rysuj_M(znak);
            break;
        case 'N':
        case 'n':
            rysuj_N(znak);
            break;
        case 'O':
        case 'o':
            rysuj_O(znak);
            break;
        case 'P':
        case 'p':
            rysuj_P(znak);
            break;
        case 'Q':
        case 'q':
            rysuj_Q(znak);
            break;
        case 'R':
        case 'r':
            rysuj_R(znak);
            break;
        case 'S':
        case 's':
            rysuj_S(znak);
            break;
        case 'T':
        case 't':
            rysuj_T(znak);
            break;
        case 'U':
        case 'u':
            rysuj_U(znak);
            break;
        case 'V':
        case 'v':
            rysuj_V(znak);
            break;
        case 'W':
        case 'w':
            rysuj_W(znak);
            break;
        case 'X':
        case 'x':
            rysuj_X(znak);
            break;
        case 'Y':
        case 'y':
            rysuj_Y(znak);
            break;
        case 'Z':
        case 'z':
            rysuj_Z(znak);
            break;
        default:
            printf("[Niestety, nie potrafię jeszcze narysować litery '%c'.]\n", *p);
        }

        printf("\n"); // Odstęp między literami imienia
        *p++; // Przesuwamy wskaźnik na kolejną komórkę pamięci
    }
    
    return 0;
}
