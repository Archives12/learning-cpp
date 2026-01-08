/* Question3: Print the given pattern

Input1: 4

Output:

A B C D

1 2 3

A B

1

Input1: 5

Output:

1 2 3 4 5

A B C D

1 2 3

A B

1
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool useLetters = (n % 2 == 0);

    for (int i = n; i >= 1; i--) {
        if (useLetters) {
            for (int j = 0; j < i; j++) {
                cout << char('A' + j);
                if (j < i - 1) cout << " ";
            }
        } else {
            for (int j = 1; j <= i; j++) {
                cout << j;
                if (j < i) cout << " ";
            }
        }
        cout << endl;
        useLetters = !useLetters;
    }

    return 0;
}