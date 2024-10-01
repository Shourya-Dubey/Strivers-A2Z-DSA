#include<bits/stdc++.h>
using namespace std;

string isPresent(int arr[], int n , int target){
    int left = 0;
    int right = n-1;
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return "Present";
        }
        else if(sum < target) left++;
        else right--;
    }

    return "Not Present";
}

main()
{
    int arr[5] = {2,5,6,8,10};
    int target = 14;
    string ans = isPresent(arr, 5, target);

    cout<<"Number is "<<ans;

    return 0;
}