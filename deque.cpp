#include<iostream>
#include<algorithm>
#include<deque>

// Deque - allow to insert the data from front and back and delete from both end
using namespace std;
int main(){
    deque<int> mynums;
    mynums.push_back(10);
    mynums.push_front(20);
    mynums.push_front(30);
    mynums.push_front(40);

    cout<<mynums.size() <<endl;
    cout<<mynums.at(3) <<endl; //at gives the access of the second position
    mynums.pop_back();

    for(auto n: mynums){
        cout<< n <<" "<<endl;
    }


    return 0;
}