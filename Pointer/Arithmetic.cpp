#include<iostream>
using namespace std;

int main(){
    /*
    int x = 3;                      
    int* ptr = &x;
    cout<<ptr<<endl; // 0x61ff08
    ptr++;
    cout<<ptr<<endl; // 0x61ff0c

    //int-> 4 bytes
    // hexadecimal no.s -->> 0 1 2 3 4 5 6 7 8 9 a b c d e f

    //0x61ff08 -->> 08 + 4 bytes -->> 0c

    */

    bool flag = true;                      
    bool* ptr = &flag;
    cout<<ptr<<endl; // 0x61ff0b
    ptr++;
    cout<<ptr<<endl; // 0x61ff0c


}