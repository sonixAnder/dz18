#include <iostream>
using namespace std;

void distributeElements(int* arr, int size) 
{
    int* positiveArr = new int[size];
    int* negativeArr = new int[size];
    int* zeroArr = new int[size];

    int posIndex = 0;
    int negIndex = 0;
    int zeroIndex = 0;

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] > 0) 
        {
            positiveArr[posIndex] = arr[i];
            posIndex++;
        }
        else if (arr[i] < 0) 
        {
            negativeArr[negIndex] = arr[i];
            negIndex++;
        }
        else 
        {
            zeroArr[zeroIndex] = arr[i];
            zeroIndex++;
        }
    }

    cout << "Положительные элементы: ";
    for (int i = 0; i < posIndex; i++) 
    {
        cout << positiveArr[i] << " ";
    }
    cout << std::endl;

    cout << "Отрицательные элементы: ";
    for (int i = 0; i < negIndex; i++) 
    {
        cout << negativeArr[i] << " ";
    }
    cout << endl;

    cout << "Элемент ноль: ";
    for (int i = 0; i < zeroIndex; i++) 
    {
        cout << zeroArr[i] << " ";
    }
    cout << endl;

}

int main() 
{
    setlocale(LC_ALL, "ru");
    int arr[] = { 1, -2, 0, 4, -5, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);

    distributeElements(arr, size);

    return 0;
}