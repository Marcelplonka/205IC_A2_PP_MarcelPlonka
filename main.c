#include <stdio.h>

int main()
{
    char imie [30], nazwisko[30];
    printf("Podaj swoje dane [Imie i nazwisko]\n");
    scanf("%s %s", imie, nazwisko);
    printf("Witaj, %s %s", nazwisko, imie);
    return 0;
}
