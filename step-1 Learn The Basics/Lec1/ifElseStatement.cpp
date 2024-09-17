#include <bits/stdc++.h>

using namespace std;
main(){

    // int age;
    // cin>>age;
    // if(age >= 18){
    //     cout<<"You are an adult:";
    // }
    // else if(age < 18){
    //     cout<<"You are not an adult";
    // }


    // int marks;
    // cin>>marks;

    // if(marks<25){
    //     cout<<"F";
    // }
    // else if(marks <= 44){
    //     cout<<"E";
    // }
    // else if(marks <= 49){
    //     cout<<"D";
    // }
    // else if(marks <= 59){
    //     cout<<"C";
    // }
    // else if(marks <=79){
    //     cout<<"B";
    // }
    // else if(marks <= 100){
    //     cout<<"A";
    // }


    int age;
    cin>>age;

    // if(age<18){
    //     cout<<"not eligible for job";
    // }
    // else if(age<=54){
    //     cout<<"eligible for job";
    // }
    // else if(age<=57){
    //     cout<<"eligible for job, but retirement soon";
    // }else{
    //     cout<<"retirement time";
    // }
    
    
    if(age<18){
        cout<<"not eligible for job";
    }
    else if(age<=57){
        cout<<"eligible for job,";
        if(age >= 55){
            cout << "but retirement soon";
        }
    }else{
        cout<<"retirement time";
    }

    return 0;
}