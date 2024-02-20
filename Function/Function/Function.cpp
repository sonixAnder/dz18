#include <iostream>
using namespace std;

int* allocateMemory(int size) 
{
	int* arr = new int[size];
	return arr;
}

// Функция инициализации динамического массива
void initializeArray(int* arr, int size) 
{
	for (int i = 0; i < size; i++) 
	{
		arr[i] = 0;
	}
}

// Функция печати динамического массива
void printArray(int* arr, int size) 
{
	for (int i = 0; i < size; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

// Функция удаления динамического массива
void deleteArray(int* arr) 
{
	delete[] arr;
}

// Функция добавления элемента в конец массива
void addElement(int*& arr, int& size, int element) 
{
	int* newArr = new int[size + 1];
	for (int i = 0; i < size; i++) 
	{
		newArr[i] = arr[i];
	}
	newArr[size] = element;
	size++;
	delete[] arr;
	arr = newArr;
}

// Функция вставки элемента по указанному индексу
void insertElement(int*& arr, int& size, int index, int element) 
{
	int* newArr = new int[size + 1];
	for (int i = 0; i < index; i++) 
	{
		newArr[i] = arr[i];
	}
	newArr[index] = element;
	for (int i = index; i < size; i++) 
	{
		newArr[i + 1] = arr[i];
	}
	size++;
	delete[] arr;
	arr = newArr;
}

// Функция удаления элемента по указанному индексу
void deleteElement(int*& arr, int& size, int index) 
{
	int* newArr = new int[size - 1];
	for (int i = 0; i < index; i++) 
	{
		newArr[i] = arr[i];
	}
	for (int i = index + 1; i < size; i++) 
	{
		newArr[i - 1] = arr[i];
	}
	size--;
	delete[] arr;
	arr = newArr;
}