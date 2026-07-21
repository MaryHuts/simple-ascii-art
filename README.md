# ASCII Art Generator w C 🎨

Kolekcja programów konsolowych napisanych w języku C do generowania wzorów i liter z wybranych przez użytkownika znaków (np. `*`, `+`, `@`). 

Projekt stworzony w ramach nauki podstaw programowania, struktur danych oraz pracy z pamięcią w C.

---

## 🛠️ Zawartość projektu

1. **Rysowanie kształtów (`heart-art.c`, `triangle-art.c`)**
   * Proste programy wykorzystujące pętle zagnieżdżone do rysowania figur geometrycznych i symboli.

2. **Generator Imion w ASCII Art (`ascii art/`)**
   * Wersja modułowa z podziałem na plik nagłówkowy (`litery.h`) oraz implementację (`alfabet.c`, `main.c`, `name.c`).
   * **Przetwarzanie napisów:** Program pobiera imię użytkownika (max 10 znaków) i przechodzi po nim za pomocą **wskaźników (`char *p`)** aż do znaku końca napisu `'\0'`, rysując po kolei każdą literę.

---

## 🚀 Jak uruchomić program (Linux / GCC)?

Przejdź do folderu z modułowym generatorem i skompiluj kod:

```bash
cd "ascii art"
gcc main.c alfabet.c name.c -o generator
./generator



