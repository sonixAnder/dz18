#include "ext.h"

int main() 
{
    setlocale(LC_ALL, "ru");
    int M, N;
    cout << "Размер массива A: ";
    cin >> M;

    cout << "Размер массива B:  ";
    cin >> N;

    vector<int> A(M);
    cout << "Элементы массива A: ";
    for (int i = 0; i < M; i++) 
    {
        std::cin >> A[i];
    }

    vector<int> B(N);
    cout << "Элементы массива B: ";
    for (int i = 0; i < N; i++) 
    {
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    vector<int> C;
    set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), std::back_inserter(C));

    sort(C.begin(), C.end());
    C.erase(unique(C.begin(), C.end()), C.end());

    cout << "Массив C: ";
    for (int i = 0; i < C.size(); i++) 
    {
        cout << C[i] << " ";
    }

    return 0;
}
