#include <stdio.h>
#include <string.h>

int main(void)
{
    int O;
    char C;
    printf("Enter course: ");
    scanf_s("%c", &C);
    printf("Operation: ");
    scanf_s("%d", &O);

    switch (C) {
    case 'N':
        switch (O) {
        case 1:
            printf("W"); //West (запад)
            break;
        case 0:
            printf("N"); //North (север)
            break;
        case -1:
            printf("E"); //East (восток)
            break;
        }
        break;
    case 'E':
        switch (O) {
        case 1:
            printf("N");
            break;
        case 0:
            printf("E");
            break;
        case -1:
            printf("S"); //South (юг)
            break;
        }
    case 'S':
        switch (O) {
        case 1:
            printf("E");
            break;
        case 0:
            printf("S");
            break;
        case -1:
            printf("W");
            break;
        }
        break;
    case 'W':
        switch (O) {
        case 1:
            printf("S");
            break;
        case 0:
            printf("W");
            break;
        case -1:
            printf("N");
            break;
        }
    }

    return 0;
}
