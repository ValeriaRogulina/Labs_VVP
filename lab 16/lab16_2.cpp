#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, A, D;
    cout << "N > 1. N = ";
    cin >> N;
    
    cout << "A = ";
    cin >> A;

    cout << "D = ";
    cin >> D;

    int* mas = new int[N];

    for (int i = 0; i < N; i++)
    {
        mas[i] = A * pow(D, i);
        std::cout << mas[i] << " ";
    }
    return 0;
}
