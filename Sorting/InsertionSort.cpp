//Insert an element from unsorted array to its correct position in sorted array
// Assume first element is sorted or at correct position
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

//TC -> Shift items & iterations 

//Time complexity Best case - O(n) -->Sorted array -->o(1) & o(n)
// Worst case - o(n^2) ----> Descending Order --->o(n) & o(n)
