#include<iostream>
using namespace std;
void loop(int i, int n){
    if(i>n) return;
    loop(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    loop(1,n);
    cout<<endl;
    return 0;
}