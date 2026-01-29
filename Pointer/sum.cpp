#include<iostream>
using namespace std;
int main(){
    /*
    //output
    int x = 6, y = 7;
    int* ptr1 = &x;
    int* ptr2 = &y;

    cout<< * ptr1 + * ptr2 <<endl;
    */

    
    //input

    int x, y;
    int* ptr1 = &x;
    int* ptr2 = &y;

    cout<<"Enter first number"<<endl;
    cin >> * ptr1;
    cout<<"Enter second number"<<endl;
    cin >> * ptr2;

    cout<< *ptr1 + *ptr2;
}

