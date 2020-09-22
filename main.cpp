#include <iostream>
using namespace std;
#include <cmath>

int main() {
  char rasp;
  double x;
  do{
    cout << "Introduceti gradele (x): ";
    cin >> x;
    cout << "sin(x) = " << sin(3.14159 * x / 180.) << endl;
    cout << "Mai continuati? (d/n)";
    cin >> rasp;
  }
  while (rasp == 'd');
  return 0;
}