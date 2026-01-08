#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "No.Of Rows: ";
    cin>> n;
    int m;
    cout<< "No.Of Columns: ";
    cin>> m;

    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <=m; i++)
        {
            cout<< "*";
        }
        
        cout<< endl;
    }
    

}