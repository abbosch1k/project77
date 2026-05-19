#include <iostream>
using namespace std;

int main() {

    int c;

    cout << "1 Launch\n2 Abort\n";
    cin >> c;

    switch(c) {

        case 1:
            cout << "Rocket Launch!";
            break;

        case 2:
            cout << "Mission Aborted";
            break;
    }
}
