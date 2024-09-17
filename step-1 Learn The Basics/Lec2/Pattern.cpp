#include<iostream>
using namespace std;
void pattern1(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-j+1 ;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i = 0; i<n; i++){
        for(int j = n; j>=i; j--){
            cout<<n-j+1<<" ";
        }
        cout<<endl;
    }
}

main()
{
    int n = 5;
    pattern6(n);
    return 0;
}