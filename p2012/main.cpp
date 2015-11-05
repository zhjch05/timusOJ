#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if ((240 - (12 - n) * 45) >= 0) {
        cout << "YES\n";
    }
    else cout << "NO\n";
    return 0;
}