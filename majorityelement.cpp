#include<iostream>
using namespace std;
int majority(int arr[],int n){
    int ans = 0;
    int freq=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=arr[i];
            freq=1;

        }
        else if(ans==arr[i]){
            freq++;

        }
        else{
            freq--;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maj=majority(arr,n);
    cout<<maj;
    return 0;
}