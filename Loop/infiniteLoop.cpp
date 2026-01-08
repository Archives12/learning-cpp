#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<< "Enter any number: ";
    // cin>>n;
    // while (int i=10)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    int x = 4, y = 0, z;
    while(x>=0){
        x--;
        y++;

        if (x == y)
          continue;
        else
          cout<< x << " " << y <<endl;
    }

}

//continue bas skip krwata h uske niche wale code ko
