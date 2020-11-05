#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, a1, a2, a3;

    printf("A = ");
    scanf_s("%d", &A);

    a1 = A / 100;
    a2 = (A / 10) % 10;
    a3 = A % 10;

    if (((a1 < a2) & (a2 < a3)) | ((a1 > a2) & (a2 > a3))) {
        printf("Цифры данного числа образуют возрастающую или убывающую последовательность");
    }
    else {
        printf("Цифры числа не образуют последовательность");
    }

    return 0;
}
