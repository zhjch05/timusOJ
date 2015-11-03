/*
from 1 to 4	    few
from 5 to 9	    several
from 10 to 19	pack
from 20 to 49	lots
from 50 to 99	horde
from 100 to 249	throng
from 250 to 499	swarm
from 500 to 999	zounds
from 1000	    legion
 */
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 1000) {
        cout << "legion" << endl;
    }
    else if (n >= 500) {
        cout << "zounds" << endl;
    }
    else if (n >= 250) {
        cout << "swarm" << endl;
    }
    else if (n >= 100) {
        cout << "throng" << endl;
    }
    else if (n >= 50) {
        cout << "horde" << endl;
    }
    else if (n >= 20) {
        cout << "lots" << endl;
    }
    else if (n >= 10) {
        cout << "pack" << endl;
    }
    else if (n >= 5) {
        cout << "several" << endl;
    }
    else {
        cout << "few" << endl;
    }
    return 0;
}