#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

int main() {
  char rasp;
  double x;

  do {
    cout << "Introduceti gradele (x): ";
    cin >> x;
    cout << "sin(x) = " << sin(3.14159 * x / 180.) << endl;
    cout << "Mai continuati? (d/n) ";
    cin >> rasp;
  }
  while (tolower(rasp) == 'd'); 
  //sau while (toupper(rasp) == 'D'); ... este acelasi lucru

  return 0;
}