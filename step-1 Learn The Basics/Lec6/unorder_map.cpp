#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int> map;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        map[arr[i]]++;
    }

    for(auto it: map){
        cout<<it.first<<" "<<it.second<<endl;
    }


    return 0;
}