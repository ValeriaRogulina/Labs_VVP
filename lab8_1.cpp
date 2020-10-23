#include <stdio.h>

int main()
{
    int byte, kilobyte;

    printf("byte = ");
    scanf_s("%d", &byte);

    kilobyte = byte / 1024;

    printf("kilobyte = %d\n", kilobyte);

    return 0;
}