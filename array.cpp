#include<iostream>

// Insertion in array 
using namespace std;

int main(){
    int a[20] = {3,2,1,8,11};
    int i,pos,item;
    cout<<"Enter the element of an array";
    cin>>pos>>item;
    for(int i= 4;i>=pos;i--){
        a[i+1] = a[i];
    }
    a[pos] = item;
    cout<<"the array after insertion is ";
    for(i=0;i<6;i++){
        cout<<a[i];
    }
    return 0;
}