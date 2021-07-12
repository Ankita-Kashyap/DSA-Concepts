#include <iostream>

using namespace std;

void wavesort(int arr[], int n)
{
    // Traverse all even elements
    for (int i = 0; i < n; i+=2)
    {
        // If current even element is smaller than previous
        if (i>0 && arr[i-1] > arr[i] )
            swap(arr[i], arr[i-1]);

        // If current even element is smaller than next
        if (i<n-1 && arr[i] < arr[i+1] )
            swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    n = sizeof(arr)/sizeof(arr[0]);
     for (int i=0; i<n; i++){
    cin >> arr[i];}
    wavesort(arr, n);
    for (int i=0; i<n; i++){
       cout << arr[i] << " ";}
    return 0;
}
