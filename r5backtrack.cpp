#include<iostream>
using namespace std;
void loop(int i, int n){
    if(i<1) return;
    loop(i-1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    loop(n,n);
    cout<<endl;
    return 0;
}