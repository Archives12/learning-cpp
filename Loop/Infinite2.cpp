#include<iostream>
using namespace std;
int main(){
    /*int x = 4, y = 0 , z;
    while(x >= 0)
    {
        if(x==y){
            break;
        }
        else
        {
        cout<< x << " " << y << endl;
        }
        x--;
        y++;

    }
}
//break pura loop se exit krwa dega
*/
int t = 10;
while(t/=2)                
    cout<< "Hello World" <<endl;
}
/*
10/2 = 5
5/2 = 2
2/2 = 1
1/2 = 0
0 = false 
loop exits
*/