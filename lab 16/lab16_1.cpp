#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int N;
    cout << "N > 0. N = ";
    cin >> N;

    int* mas = new int[N];

    for (int i = 0; i < N; i++) 
    {
        mas[i] = (i * 2) + 1;
        std::cout << mas[i] << " ";
    }
    return 0;
}
