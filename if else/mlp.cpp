#include <iostream>
using namespace std;

int main() {
	int a,b;
    char ch;
    cin>>a>>ch>>b;
    switch (ch)
    {
    case '+':
    cout<<a+b;
    break;

    case '-':
    cout<<a-b;
    break;

    case '*':
    cout<<a*b;
    break;

    case '/':
    if(b!=0){
    cout<<a/b;
    }
    else{
        cout<<"Division by 0 is not undefined hence refrain from giving that input";
    }
    break;

    default:
    cout<<"Invalid operator. Please enter one of +, -,*, /";
    break;
}
return 0;
}