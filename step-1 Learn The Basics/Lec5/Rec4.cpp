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

bool palindrom(int i, string &s){
    if(i >= (s.size()-1) / 2) return true;
    else if(s[i] != s[s.size()-i-1]) return false;
    return palindrom(i+1, s);
}

int fibonaci(int n){
    if(n <= 1) return n;
    int last = fibonaci(n - 1);
    int sLast = fibonaci(n - 2);
    return last + sLast; 
}

main()
{
    // int n;
    // cout<<"Enter a number for size of array ";
    // cin>>n;

    // int arr[n];
    // for(int i = 0; i<n; i++) cin>>arr[i];
    // reverseArr(0, arr, n);
    // for(int i = 0; i<n; i++) cout<<arr[i]<<" ";

    // reverseArrTwoPointer(0, n-1, arr);
    // for (int i = 0; i < n; i++) cout << arr[i] << " ";

    // string s = "madsm";
    // cout<<palindrom(0, s);

    int f = 4;
    cout<<fibonaci(f);

    return 0;
}