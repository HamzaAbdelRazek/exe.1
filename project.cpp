#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    if (n > 2 && n % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

}