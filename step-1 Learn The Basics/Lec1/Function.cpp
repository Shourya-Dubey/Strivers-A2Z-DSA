#include<bits/stdc++.h>
using namespace std;

//void
void printName(){
    cout<<"Hey Striver"<<endl;
}

//parameterised
void printName2(string name){
    cout<<"Hey !"<<name<<endl;
}

//return 
int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}

int maxi(int num1, int num2){
    if(num1 >= num2){
        return num1;
    } 
    
    return num2;
}

main()
{
    printName();

    // string name;
    // cin>>name;
    // printName2(name);

    // int num1, num2;
    // cin>>num1 >> num2;
    // int res = sum(num1, num2);
    // cout<<res<<endl;


    int num3,num4;
    cin>>num3>>num4;
    int maximum = max(num3, num4);
    int minimum = min(num3, num4);
    cout<<"Maximum -> "<<maximum<<endl;
    cout<<"Minimum -> "<<minimum<<endl;

    cout<<"Maximum number is => "<<maxi(num3, num4);

    return 0;
}