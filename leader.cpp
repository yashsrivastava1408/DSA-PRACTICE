#include<iostream>
using namespace std;
vector<int>leader(int arr[],int n){
    vector<int> ans;
    int maxi=INT_MIN;
    for(int i =n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi=arr[i];

        }
     
    }
    reverse(ans.begin(),ans.end());
    return ans;

    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leader(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}