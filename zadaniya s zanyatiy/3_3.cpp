﻿#include <iostream>
#include <cmath>               // сортировка ПУЗЫРЬКОМ(в дисе подробно)
using namespace std;
int main()
{
    const int n = 7;
    int tmp;
    int arr[n] = { 5, 2, 4, 6, 0, 1, 3 };

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}