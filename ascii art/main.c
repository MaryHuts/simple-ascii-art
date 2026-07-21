// main.c
#include <stdio.h>
#include "litery.h" // Dzięki temu main wie o istnieniu funkcji rysuj_A

int main() {
    char wybor_litery;
    char znak;

    printf("Jaką literę chcesz narysować?: ");
    scanf(" %c", &wybor_litery);

    printf("Jakiego znaku użyć do rysowania? (np. *, +, @): ");
    scanf(" %c", &znak);

    printf("\nWynik:\n\n");

    // Decydujemy, co uruchomić
    switch (wybor_litery) {
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
            printf("Niestety, nie potrafię jeszcze narysować litery '%c'.\n", wybor_litery);
    }

    return 0;
}