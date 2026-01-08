#include<iostream>
using namespace std;
int main(){
    cout<<90 % (-4)<<endl;
    cout<<(-90) % 4<<endl;//this is due to heirarchy of operator
    cout<<(-90) % (-4)<<endl; 
}