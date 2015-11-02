#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, k, s = 1;
    char f[21];
    cin >> n;
    cin >> f;
    k = strlen(f);
    while (n > k) {
        s *= n;
        n -= k;
    }
    s *= n;
    cout << s << endl;
    return 0;
}