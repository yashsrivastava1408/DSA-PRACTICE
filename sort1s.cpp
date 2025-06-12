#include<iostream>
#include<vector>
using namespace std;
void sorts(vector<int> &arr, int n){
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
            
        }
        else if(arr[mid]==1){
            mid++;


        }
        else{
            swap(arr[mid],arr[high]);
            high--;
            
        }
    }

}
int main(){
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    sorts(arr, arr.size());

    for(int num : arr){
        cout << num << " ";
    }
    return 0;
}
