#include<bits/stdc++.h>
using namespace std;

main() {
int n = 478;
int count = 0;
while(n>0){
    int digit = n % 10;
    count++;
    n = n / 10;
}
cout<<count;

return 0;
}