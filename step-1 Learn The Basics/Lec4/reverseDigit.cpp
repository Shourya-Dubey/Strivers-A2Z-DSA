#include<bits/stdc++.h>
using namespace std;
main() {
int n = 478;
int reverse = 0;
while(n > 0){
    int ld = n % 10;
    reverse = (reverse * 10) + ld;
    n = n / 10;
}
cout<<reverse;
return 0;
}