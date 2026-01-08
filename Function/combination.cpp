/* #include<iostream>
using namespace std;

int fact(int x){
    int f = 1;
    for (int i = 2; i <= f; i++)
    {
       f *= i;
    }
    return f;
    
}

int main(){
    int n, r;
    cout<<"enter n : ";
    cin>> n;
    cout<<"enter r : ";
    cin>>r;
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);

    int ncr = nfact / (rfact * nrfact);
    cout <<ncr;
}
*/

#include<iostream>
using namespace std;

int fact(int x){
    int f = 1;
    for (int i = 2; i <= f; i++)
    {
       f *= i;
    }
    return f;
    
}

int combination(int n, int r){
 int ncr = fact(n) / (fact(r) * fact(n-r));
}
int main(){
    int n, r;
    cout<<"enter n : ";
    cin>> n;
    cout<<"enter r : ";
    cin>>r;
    int ncr = combination(n,r);
    cout <<ncr;
}


