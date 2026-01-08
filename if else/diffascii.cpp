#include<iostream>
using namespace std;
int main(){
    char x,y;
    cout<<"enter any two character";
    cin>>x>>y;
    int ascii1 = (int) x;
    int ascii2 = (int) y;
    cout<<"Difference between ascii value of " <<x <<"&"<<y << endl;
    cout<< (ascii2 - ascii1) <<endl;
    return 0;
    
}