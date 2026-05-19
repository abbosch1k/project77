#include <iostream>
using namespace std;

int main() {

    int battery;

    cin >> battery;

    if(battery<15)
        cout << "Low Battery";
    else
        cout << "Battery OK";
}
