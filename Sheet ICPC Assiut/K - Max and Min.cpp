#include <iostream>
using namespace std;
 
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int minimum = a, maximum = a;
  if (b < minimum) {
    minimum = b;
  }
  if (c < minimum) {
    minimum = c;
  }
  if (b > maximum) {
    maximum = b;
  }
  if (c > maximum) {
    maximum = c;
  }
  cout << minimum << " " << maximum << endl;
  return 0;
}