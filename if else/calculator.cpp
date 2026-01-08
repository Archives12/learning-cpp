#include<iostream>
using namespace std;
int main(){
 int a,b;
 char ch;
 cout<<"enter the problem";
 cin>>a>>ch>>b;
//  if(ch=='+') cout<<a+b;
// if(ch=='-') cout<<a-b;
// if(ch=='*') cout<<a*b;
// if(ch=='/') cout<<a/b;

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
    cout<<a/b;
    break;
}
return 0;
}