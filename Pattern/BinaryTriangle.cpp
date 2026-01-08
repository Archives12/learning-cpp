// 1
// 01
// 101
// 0101

#include<iostream>
using namespace std;
/* //method 1 using extra variable
int main(){
    int n;
    cout<<"enter no of rows: ";
    cin>> n;
    int a = 5;
    for (int i = 1; i <= n ; i++)
    {   if (i%2 != 0){
        a = 1;
    }else{
        a = 0;
    }
        for (int j = 1; j <= i ; j++)
        {
           cout <<a;
           //flipping
           if(a==1){
            a = 0;
           } 
           else{ 
            a = 1;
           }
        }
        cout<<endl;
        
    }
    
} */

//Method 2
//i==j -> 1  
//if i & j both odd -> 1 || both even -> 1 ------------> agar dono odd h ya  even h add krne prr humesa even milega so --> i+j %2==0 cout<< 1
int main(){
    int n;
    cout<< "Enter no of rows: ";
    cin>>n;

    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j)%2 == 0){
                cout<< 1;
            }
            else
            {
                cout<<0;
            }
            
        }
        cout<<endl;
        
    }
    
}