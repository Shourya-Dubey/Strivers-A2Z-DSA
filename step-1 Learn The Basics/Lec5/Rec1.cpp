#include<bits/stdc++.h>
using namespace std;
int num = 0;
void func()
{
    if (num == 3)return;
    
    cout << num << " ";
    num++;
    func();
}

main()
{
    func();
}