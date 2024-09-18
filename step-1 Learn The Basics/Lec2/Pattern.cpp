#include<bits/stdc++.h>
using namespace std;

void printPatter1(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void printPatter2(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void printPatter3(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void printPatter4(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void printPatter5(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void printPatter6(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void printPatter7(int n){
    for(int i = 0; i<n; i++){
        // space
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        // star
        for(int j = 0; j<2*i+1; j++){
            cout<<"*";
        }
        // space
        for(int j = 0;  j<n-i-1; j++){
            cout<<" ";
        }
        cout << endl;
    }
}

void printPatter8(int n){
    for(int i = 0; i<n; i++){
        //space
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        //star
        for(int j = 0; j<2*n - (2*i+1); j++ ){
            cout<<"*";
        }
        //space
        for (int j = 0; j <i; j++){
            cout << " ";
        }
        cout<<endl;
    }
}

void printPatter11(int n){
    for(int i = 0; i<n; i++){
        int start;
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j<=i; j++){
            cout<<start;
            start = 1 - start;
        }
        cout<<endl;
    }
}

void printPatter12(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j;
        }
        for(int j = 1; j<=2*n-(2*i); j++){
            cout<<" ";
        }
        for (int j = i; j >= 1; j--){
            cout << j;
        }
        cout<<endl;
    }
}

void printPatter13(int n){
    int number = 1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<number;
            number++;
        }
        cout<<endl;
    }
}

void printPatter14(int n){
    for(int i = 0; i<n; i++){
        for(char ch = 'A'; ch<= 'A' + i; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void printPatter15(int n){
    for(int i = 0; i<n; i++){
       for(char ch = 'A'; ch<= 'A' + (n-i+1); ch++){
        cout<<ch;
       }
       cout<<endl;
    }
}

main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        printPatter15(n);
    }

    return 0;
}