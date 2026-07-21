// alfabet.c
#include <stdio.h>
#include "litery.h" // Dołączamy nasz spis treści

void rysuj_A(char znak) 
{
    // Prosty wzór litery A
    printf(" %c%c%c\n", znak, znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c%c%c%c%c\n", znak, znak, znak, znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c   %c\n", znak, znak);
}

void rysuj_B(char znak) 
{
    //Prosty wzór litery B
    printf("%c%c%c%c\n", znak, znak, znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c%c%c%c\n", znak, znak, znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c%c%c%c\n", znak, znak, znak, znak);

}

void rysuj_C(char znak)
{
    //Prosty wzór litery C
    printf(" %c%c%c\n", znak, znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c\n", znak);
    printf("%c   %c\n", znak, znak);
    printf(" %c%c%c\n", znak, znak, znak);
}

void rysuj_D(char znak)
{
    //Prosty wzór litery D
    printf("%c%c%c%c\n", znak, znak, znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c%c%c%c\n", znak, znak, znak, znak);
}

void rysuj_E(char znak)
{
    //Prosty wzór litery E
    printf("%c%c%c%c\n", znak, znak, znak, znak);
    printf("%c\n", znak);
    printf("%c%c%c%c\n", znak, znak, znak, znak);
    printf("%c\n", znak);
    printf("%c%c%c%c\n", znak, znak, znak, znak);
}

void rysuj_F(char znak)
{
    //Prosty wzór litery F
    printf("%c%c%c%c\n", znak, znak, znak, znak);
    printf("%c\n", znak);
    printf("%c%c%c%c\n", znak, znak, znak, znak);
    printf("%c\n", znak);
    printf("%c\n", znak);
}

void rysuj_G(char znak)
{
    //Prosty wzór litery G
    printf(" %c%c%c\n", znak, znak, znak);
    printf("%c\n", znak);
    printf("%c %c%c\n", znak, znak, znak);
    printf("%c   %c\n", znak, znak);
    printf(" %c%c%c\n", znak, znak, znak);
}

void rysuj_H(char znak)
{
    //Prosty wzór litery H
    printf("%c   %c\n", znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c%c%c%c%c\n", znak, znak, znak, znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c   %c\n", znak, znak);
}

void rysuj_I(char znak)
{
    //Prosty wzór litery I
    printf("%c%c%c\n", znak, znak, znak);
    printf(" %c \n", znak);
    printf(" %c \n", znak);
    printf(" %c \n", znak);
    printf("%c%c%c\n", znak, znak, znak);
}

void rysuj_J(char znak)
{
    //Prosty wzór litery J
    printf(" %c%c%c\n", znak, znak, znak);
    printf("  %c\n", znak);
    printf("  %c\n", znak);
    printf("%c %c\n", znak, znak);
    printf(" %c%c\n", znak, znak);
}

void rysuj_K(char znak)
{
    //Prosty wzór litery K
    printf("%c  %c\n", znak, znak);
    printf("%c %c\n", znak, znak);
    printf("%c%c\n", znak, znak);
    printf("%c %c\n", znak, znak);
    printf("%c  %c\n", znak, znak);
}

void rysuj_L(char znak)
{
    //Prosty wzór litery L
    printf("%c\n", znak);
    printf("%c\n", znak);
    printf("%c\n", znak);
    printf("%c\n", znak);
    printf("%c%c%c%c\n", znak, znak, znak, znak);
}

void rysuj_M(char znak)
{
    //Prosty wzór litery M
    printf("%c   %c\n", znak, znak);
    printf("%c%c %c%c\n", znak, znak, znak, znak);
    printf("%c %c %c\n", znak, znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c   %c\n", znak, znak);
}

void rysuj_N(char znak)
{
    //Prosty wzór litery N
    printf("%c   %c\n", znak, znak);
    printf("%c%c  %c\n", znak, znak, znak);
    printf("%c %c %c\n", znak, znak, znak);
    printf("%c  %c%c\n", znak, znak, znak);
    printf("%c   %c\n", znak, znak);
}

void rysuj_O(char znak)
{
    //Prosty wzór litery O
    printf(" %c%c%c\n", znak, znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c   %c\n", znak, znak);
    printf(" %c%c%c\n", znak, znak, znak);
}

void rysuj_P(char znak)
{
    //Prosty wzór litery P
    printf("%c%c%c\n", znak, znak, znak);
    printf("%c  %c\n", znak, znak);
    printf("%c%c%c\n", znak, znak, znak);
    printf("%c\n", znak);
    printf("%c\n", znak);
}

void rysuj_Q(char znak)
{
    //Prosty wzór litery Q
    printf("  %c%c\n", znak, znak);
    printf(" %c  %c\n", znak, znak);
    printf("%c %c %c\n", znak, znak, znak);
    printf(" %c %c%c\n", znak, znak, znak);
    printf("  %c%c %c\n", znak, znak, znak);
}

void rysuj_R(char znak)
{
    //Prosty wzór litery R
    printf("%c%c%c\n", znak, znak, znak);
    printf("%c  %c\n", znak, znak);
    printf("%c%c%c\n", znak, znak, znak);
    printf("%c %c\n", znak, znak);
    printf("%c  %c\n", znak, znak);
}

void rysuj_S(char znak)
{
    //Prosty wzór litery S
    printf(" %c%c%c\n", znak, znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c\n", znak);
    printf(" %c%c%c\n", znak, znak, znak);
    printf("    %c\n", znak);
    printf("%c   %c\n", znak, znak);
    printf(" %c%c%c\n", znak, znak, znak); 
}

void rysuj_T(char znak)
{
    //Prosty wzór litery T
    printf("%c%c%c%c%c\n", znak, znak, znak, znak, znak);
    printf("  %c\n", znak);
    printf("  %c\n", znak);
    printf("  %c\n", znak);
    printf("  %c\n", znak);
}

void rysuj_U(char znak)
{
    //Prosty wzór litery U
    printf("%c   %c\n", znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c   %c\n", znak, znak);
    printf("%c   %c\n", znak, znak);
    printf(" %c%c%c\n", znak, znak, znak);
}

void rysuj_V(char znak)
{
    //Prosty wzór litery V
    printf("%c   %c\n", znak, znak);
    printf("%c   %c\n", znak, znak);
    printf(" %c %c\n", znak, znak);
    printf(" %c %c\n", znak, znak);
    printf("  %c\n", znak);
}

void rysuj_W(char znak)
{
    //Prosty wzór litery W
    printf("%c   %c\n", znak, znak);
    printf("%c %c %c\n", znak, znak, znak);
    printf(" %c%c%c\n", znak, znak, znak);
    printf(" %c %c\n", znak, znak);
}

void rysuj_X(char znak)
{
    //Prosty wzór litery X
    printf("%c   %c\n", znak, znak);
    printf(" %c %c\n", znak, znak);
    printf("  %c\n", znak);
    printf(" %c %c\n", znak, znak);
    printf("%c   %c\n", znak, znak);
}

void rysuj_Y(char znak)
{
    //Prosty wzór litery Y
    printf("%c   %c\n", znak, znak);
    printf(" %c %c\n", znak, znak);
    printf("  %c\n", znak);
    printf("  %c\n", znak);
    printf("  %c\n", znak);
}

void rysuj_Z(char znak)
{
    //Prosty wzór litery Z
    printf("%c%c%c%c\n", znak, znak, znak, znak);
    printf("   %c\n", znak);
    printf("  %c\n", znak);
    printf(" %c\n", znak);
    printf("%c\n", znak);
    printf("%c%c%c%c\n", znak, znak, znak, znak);
}
