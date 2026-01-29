/*
// SWAPPING TWO NUMBERS USING PASS BY VALUE

#include<iostream>
using namespace std;
int swap(int* x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return temp;
}
int main(){
    int a = 3, b = 4;
    swap(&a, &b);
    cout << a <<" " <<b;
}

*/

// SWAPPING TWO NUMBERS USING PASS BY REFERENCE

#include<iostream>
using namespace std;
int swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return temp;
}
int main(){
    int a = 3, b = 4;
    swap(a,b);
    cout << a <<" " <<b;
}