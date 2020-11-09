#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "Russian");
    int N;
    printf("1984<=N Введите N: ");
    scanf_s("%d", &N);

    switch ((((N - 1984) % 60) / 12) + 1)
    {
    case 1:
        printf("Год зелён");
        break;
    case 2:
        printf("Год красн");
        break;
    case 3:
        printf("Год жёлт");
        break;
    case 4:
        printf("Год бел");
        break;
    case 5:
        printf("Год чёрн");
        break;
    }
    switch (((N - 1984) % 60) % 12)
    {
    case 0:
    case 1:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        printf("ой ");
        break;
    case 2:
    case 3:
    case 4:
        printf("ого ");
        break;
    }
    switch (((N - 1984) % 60) % 12)
    {
    case 0:
        printf("крысы");
        break;
    case 1:
        printf("коровы");
        break;
    case 2:
        printf("тигра");
        break;
    case 3:
        printf("зайца");
        break;
    case 4:
        printf("дракона");
        break;
    case 5:
        printf("змеи");
        break;
    case 6:
        printf("лошади");
        break;
    case 7:
        printf("овцы");
        break;
    case 8:
        printf("обезьяны");
        break;
    case 9:
        printf("курицы");
        break;
    case 10:
        printf("собаки");
        break;
    case 11:
        printf("свиньи");
        break;
    }

    return 0;
}

