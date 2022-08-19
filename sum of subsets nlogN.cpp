#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void numsum(int arr[],int sum){
    int len = sizeof(arr);
    sort(arr,arr+len);
    int left =0;
    int right=len-1;
    while(left<right){
        int currentsum=arr[left]+arr[right];
        if(currentsum == sum){
            cout<<arr[left]<<" "<<arr[right]<<endl;
            return;
        }
        else if(currentsum < sum){
            left++;
        }
        else if(currentsum > sum){
            right--;
        }
    }
    return;
}

int main(){
    int array[] = {-4,-1,1,3,5,6,8,11};
    int k;
    cin>>k;
    numsum(array,k);
}
