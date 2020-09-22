#include <iostream>
using namespace std;
#include <cmath>

int main() {
  char rasp;
  double x;

  rasp = 'd';
  while (rasp == 'd') {
    cout << "Introduceti gradele (x): ";
    cin >> x;
    cout << "sin(x) = " << sin(3.14159 * x / 180.) << endl;
    cout << "Mai continuati? (d/n) ";
    cin >> rasp;
  }
  

  return 0;
}