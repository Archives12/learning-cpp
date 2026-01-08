#include <iostream>
using namespace std;

// int main() {
// 	char c;
//     cin>>c;
//     int ascii=(int)c;
//     if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122))
//     {cout<<"True";
//     }
//     else{
//         cout<<"False";
//     }

// 	return 0;
// }


#include <cctype> // for isalpha

int main() {
    char c;
    cin >> c;

    if (isalpha(c)) {
    cout << "true" << endl;
    } else {
    cout << "false" << endl;
    }

    return 0;
}
