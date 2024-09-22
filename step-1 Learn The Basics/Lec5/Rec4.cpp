#include<bits/stdc++.h>
using namespace std;

void reverseArr(int i, int arr[], int n){
    if(i > n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverseArr(i+1, arr, n);
}

void reverseArrTwoPointer(int st, int ls, int arr[]){
    if(st >= ls) return;
    swap(arr[st], arr[ls]);
    reverseArrTwoPointer(st+1, ls-1, arr);
}

main()
{
    int n;
    cout<<"Enter a number for size of array ";
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++) cin>>arr[i];
    // reverseArr(0, arr, n);
    // for(int i = 0; i<n; i++) cout<<arr[i]<<" ";

    reverseArrTwoPointer(0, n-1, arr);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}