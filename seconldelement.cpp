#include<iostream>
using namespace std;
void secondelement(int arr[],int n){
    int largest = arr[0];
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];

        }
        while (arr[i]<largest &&arr[i]>slargest)
        {
            slargest=arr[i];
            /* code */
        }
        
    }
}