#include<iostream>
using namespace std;
void loop(int i, int n) {
    if(i>n) return ;
    cout<<"yash"<<endl;
    loop(i+1,n);
    
}
int main(){
    int n;
    cin>>n;
    loop(1,n);
    cout<<endl;
    return 0;
}