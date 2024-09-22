#include<bits/stdc++.h>
using namespace std;

void func(int i, int sum){
    if(i < 1){
        cout<<"Sum -> "<<sum;
        return;
    }
    func(i-1, sum+i);
}

int func2(int n){
    if(n == 0) return 0;
    else return n + func2(n-1);
}

int factorial(int n)
{
    if(n == 1) return 1;
    else
       return n *factorial(n - 1);
}

main()
{
    int n = 3;
    int sum = 0;
    // func(n, sum); //parameterised

    // cout<<func2(n); //functional Recursion

    cout<<factorial(n);  //factorial
}