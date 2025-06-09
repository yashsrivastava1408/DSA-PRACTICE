#include<iostream>
using namespace std;
void mergsor(vector <int> &arr, int low,int high,int mid){
    vector<int> temp;
    int left=low;
    int right= mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;

        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
            left++;

    }
    while(right<=high){
        temp.push_back(arr[right]);
            right++;

    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }

}
void merge(vector <int> &arr, int low, int high){
    if(low==high) return;
    int mid = (low+high)/2;
    merge(arr,low,mid);
    merge(arr,mid+1,high);
    mergsor(arr,low,mid,high);
 }

void ms(vector<int> &arr, int n){
    merge(arr,0,n-1);
}