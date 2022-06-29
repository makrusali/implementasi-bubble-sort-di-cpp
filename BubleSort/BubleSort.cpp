// BubleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printArr(int* arr, size_t size) {

    cout << "[ ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i != size - 1) {
            cout << " , ";
        }
    }
    cout << " ]" << endl;
}

void swap(int* arr, int iLeft, int iRight) {
    int temp = arr[iLeft];
    arr[iLeft] = arr[iRight];
    arr[iRight] = temp;
}

/**
    Bubble Sort adalah algoritma sorting dengan membandingkan kedua elemen antara i dan i + 1 sampai semuanya
    jika bertemu dengan el[i] > el[i+1] maka swap ( tukar ) kedua elemen tersebut 
    iterasi akan terus berjalan sampai tidak ada operasi swap ( tukar )
**/

void bubbleSort(int* arr,size_t size) {
    
    int iLeft = 0;
    int iRight = 0;
    int indexOfLastUnsortedElement = size;
    bool swapped = false;

    do {
        swapped = false;

        for (int i = 0; i < indexOfLastUnsortedElement - 1; ++i) {
            iLeft = i;
            iRight = i + 1;
            
            cout << "Index iLeft = " << i << ", Index iRight = " << i + 1;
            
            if (arr[iLeft] > arr[iRight]) {
                cout << " ";
                printArr(arr, size);

                swap(arr, iLeft, iRight);
                swapped = true;

                cout << " -> Swapped = [ " << arr[iLeft] << " , " << arr[iRight] << " ]" << endl;
            }
            else {
                cout << endl;
            }
        }

        indexOfLastUnsortedElement--;

    } while (swapped == true);
}

int main()
{
    int arr[] = { 6,7,42,45,44,35,47};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr,size);
    bubbleSort(arr,size);
    printArr(arr,size);

    return 0;
}
