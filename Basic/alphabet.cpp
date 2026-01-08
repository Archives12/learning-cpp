#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character";
    cin>>ch;
    int asci= (int)ch;
    if((asci>=65 && asci<= 90) || (asci>=97 && asci<=122))
    {
        cout<<"The character is alphabet";
    }
    else{
        cout<<"the character is not an alphabet";
    }

return 0;
}