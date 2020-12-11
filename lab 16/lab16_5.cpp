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
        for (int i = 1; i <= N; i += 2) {
            std::cout << A[i] << " ";
        }
        for (int i = N; i >= 2; i -= 2) {
            std::cout << A[i] << " ";
        }
    }

    if (N % 2 != 0) {
        for (int i = 1; i <= N; i += 2) {
            std::cout << A[i] << " ";
        }
        for (int i = N-1; i >= 2; i -= 2) {
            std::cout << A[i] << " ";
        }
    }

    return 0;
}
