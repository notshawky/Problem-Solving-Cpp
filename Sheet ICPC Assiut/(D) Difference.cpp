#include <iostream>
using namespace std;
 
int main() {
    int a, c;
    long long b, d;
    cin >> a >> b >> c >> d;
    long long s ;
    s = (a * b) - (c * d);
    cout << "Difference = " << s << endl;
    return 0;
}