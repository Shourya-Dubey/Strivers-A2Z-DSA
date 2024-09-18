#include <bits/stdc++.h>
using namespace std;

//pass by Value
void doSomething(int num){
    num = num + 5;
    cout<<"Inside doSomething function -> "<<num<<endl;
}

//pass by reference
void passByReference(string &s){
    s[0] = 't';
    cout << "Inside the passByReference function "<<s<<endl;
}

void printArray(int arr[], int n)
{
    arr[0] += 100;
    cout<<"Printing inside array function"<<arr[0]<<endl;
}

main()
{
    int num = 10;
    doSomething(num);
    cout<<num<<endl;

    string s = "raj";
    passByReference(s);
    cout<<s<<endl;

    int n = 5;
    int arr[n];

    cout<<"Taking input for Array ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    printArray(arr, n);
    cout<<"Printing in main"<<arr[0]<<endl;

    return 0;
}