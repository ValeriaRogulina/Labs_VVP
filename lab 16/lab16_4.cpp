#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "N = ";
    cin >> N;

    int* A = new int[N];

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    if (N % 2 == 0) {
        for (int i = 1; i <= (N / 2); i++)
        {
            std::cout << A[i] << " ";
            std::cout << A[(N - i) + 1] << " ";
        }
    }
    if (N % 2 != 0) {
        for (int i = 1; i <= (N / 2); i++)
        {
            std::cout << A[i] << " ";
            std::cout << A[(N - i) + 1] << " ";
        }
        std::cout << A[(N/2)+1] << " ";
    }
    return 0;
}
