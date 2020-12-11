#include <iostream>

using namespace std;

int main()
{
    int N, A, B, i;
    cout << "N > 2.N = ";
    cin >> N;

    cout << "A = ";
    cin >> A;

    cout << "B = ";
    cin >> B;

    int* mas = new int[N];
    mas[0] = A; 
    mas[1] = B;
    int sum = A + B;

    for (i = 2; i < N; i++)
    {
        mas[i] = sum;
        sum += mas[i];
    }
    for (i = 0; i < N; i++) {
        std::cout << mas[i] << " ";
    }

    return 0;
}