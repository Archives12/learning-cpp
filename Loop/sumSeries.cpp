#include<iostream>
using namespace std;
int main(){
    //1-2+3-4+5-6+7-8.........n sum of this series upto n terms
    int n, sum = 0;
    cout << "Enter any number: ";
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i%2!=0)
    //     {
    //         sum +=i;
    //     }
    //     else
    //     {
    //         sum-=i;
    //     }   
    // }
    // cout<< sum;   

    /* Pair up krke nikalne prr even ke liye -n / 2 and odd ke liye -n/2 + n*/

    if(n%2==0)
    {
        sum = -n/2;
    }
    else{
        sum = -n/2 + n;
    }

    cout << sum;
}