#include<iostream>
using namespace std;
int main(){
    int n, reverse = 0, lastDigit;
    cout<<"Enter any number: ";
    cin>> n;
    while(n>0){
        lastDigit = n%10;
        reverse *= 10;
        reverse += lastDigit;
        n/=10;
    }
    cout<<reverse;
}