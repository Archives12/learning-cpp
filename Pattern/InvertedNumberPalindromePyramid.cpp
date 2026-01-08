/*  1234321
     12321
      121
       1
*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number of rows:";
    cin>>n;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<k;
        }
        for(int q=i-1; q>=1; q--){
            cout<<q;
        }
        cout<<endl;
    }

}