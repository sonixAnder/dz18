#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) 
{
    if (num <= 1) 
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) 
    {
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int* deletePrimes(int* arr, int size) 
{
    int count = 0;
    for (int i = 0; i < size; i++) 
    {
        if (!isPrime(arr[i])) 
        {
            count++;
        }
    }

    int* newArr = new int[count];
    int index = 0;
    for (int i = 0; i < size; i++) 
    {
        if (!isPrime(arr[i])) 
        {
            newArr[index] = arr[i];
            index++;
        }
    }

    return newArr;
}

int main() 
{
    setlocale(LC_ALL, "ru");
    int size;
    cout << "Размер массива: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Элементы массива: ";
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }

    int* newArr = deletePrimes(arr, size);

    cout << "Массив с удаленными простыми числами: ";
    for (int i = 0; i < size - 1; i++) 
    {
        cout << newArr[i] << " ";
    }
    cout << newArr[size - 1] << endl;

    delete[] arr;
    delete[] newArr;

    return 0;
}