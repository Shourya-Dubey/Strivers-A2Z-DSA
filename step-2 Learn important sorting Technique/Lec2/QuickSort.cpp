#include<bits/stdc++.h>
using namespace std;

void quick_sort(int arr[], int low, int high){
    int pivot = low;
    int i = low; 
    int j = high;
    while(i<pivot){
        i++;
    }
    while(j>pivot){
        j++;
    }
    if(i>j){
        // swap
    }
}

main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) 
        cin>>arr[i];
    quick_sort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
        cout<< arr[i];
}