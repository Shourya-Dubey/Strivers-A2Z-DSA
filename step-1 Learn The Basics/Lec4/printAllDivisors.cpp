#include <bits/stdc++.h>
using namespace std;
main()
{
   int n = 36;
   vector<int> ls;
   for(int i = 1; i*i<=n; i++){
    if(n%i == 0){
        ls.push_back(i);

        if(n/i != i){
            ls.push_back(i);
        }
    }
   }
   sort(ls.begin(), ls.end());
   for (auto it : ls)
   {
       cout << it << " ";
   }
    return 0;
}