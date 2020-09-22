#include <iostream>
using namespace std;
#include <cmath>

int main() {
  char rasp;
  int x;
  int i;

  for(i = 0; i < 100; i++){

    cout << "Introduceti gradele (x): ";
    cin >> x;
    cout << "sin(x) = " << sin(3.14159 * x / 180.) << endl;
    cout << "Mai continuati? (d/n)";
    cin >> rasp;
    if(toupper(rasp) != 'D')
      break;

      }
      
  return 0;
}