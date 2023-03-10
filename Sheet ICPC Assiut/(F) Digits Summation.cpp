#include <iostream>
using namespace std;
 
int main() {
    long long n, m;
    cin >> n >> m;
    int lastDigitN = n % 10;
    int lastDigitM = m % 10;
    cout << lastDigitN + lastDigitM << endl;
    return 0;
}