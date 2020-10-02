#include<iostream>

using namespace std;

int main(){

    int a[20] = {3,2,1,8,11};
    int i,pos,item;
    cout<<"Enter the Position";
    cin>>pos;
    for(int i=pos;i<=5;i++){
        a[i] = a[i+1];
    }
    cout<<"The array after deletion \n";
    for(i=0;i<4;i++){
        cout<<a[i];
    }
}