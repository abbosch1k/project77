#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int n=rand()%3;

    if(n==0)
        cout << ":)";

    if(n==1)
        cout << ":D";

    if(n==2)
        cout << ":P";
}
