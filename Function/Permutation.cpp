/*#include<iostream>
using namespace std;

int fact (int x){
    int f = 1;
    for (int i = 2; i <= f; i++)
    {
        f *= i;
    }
    return f;
}

int main(){
    int n,r;
    cout <<"Enter n : ";
    cin>> n;
    cout<< "Enter r : ";
    cin>> r;

    int nfact = fact(n);
    int nrfact = fact(n-r);
    int npr = nfact/nrfact;
    cout<< npr;
    
}
*/
#include<iostream>
using namespace std;

int fact (int x){
    int f = 1;
    for (int i = 2; i <= f; i++)
    {
        f *= i;
    }
    return f;
}
int permutation(int n, int r){
    int npr = fact(n)/fact(n-r);
}

int main(){
    int n,r;
    cout <<"Enter n : ";
    cin>> n;
    cout<< "Enter r : ";
    cin>> r;

    int npr = permutation(n,r);
    cout<< npr;
    
}