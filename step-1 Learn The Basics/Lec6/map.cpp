#include <bits/stdc++.h>
using namespace std;
main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i = 0 ; i<n; i++){
    cin>>arr[i];
   }

   map<int, int> mapp;
   for(int i = 0; i<n; i++){
    mapp[arr[i]]++;
   }

   for(auto it: mapp){
    cout<<it.first<<"-> "<<it.second<<endl;
   }

   int q;
   cin>>q;
   while(q--){
    int num;
    cin>>num;
    cout<<mapp[num]<<endl;
   }

}