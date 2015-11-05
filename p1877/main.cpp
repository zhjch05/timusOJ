#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main() {
    char a[5], b[5];
    //input
    cin.getline(a, sizeof(a));
    cin.getline(b, sizeof(b));
    //parsing to int
    int m = atoi(a);
    int n = atoi(b);

    int s = 0;
    int c = m;
    if(s == c){
        cout<<"yes\n";
        return 0;
    }
    while (s < n || s < m) {
        s++;
        if(c == m){
            c = n;
        }
        else {
            c = m;
        }
        if(s == c){
            cout<<"yes\n";
            return 0;
        }
    }
    cout<<"no\n";
    return 0;
}