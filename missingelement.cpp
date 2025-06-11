#include<iostream>
using namespace std;
int  missing(int n,int arr[]){
    int totalsum=(n*(n+1))/2;
    int s2=0;
    for(int i =0;i<n-1;i++){
        s2+=arr[i];
        
    }
    return totalsum - s2;
}
int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
   cout<<missing(n,arr);
    return 0;
}