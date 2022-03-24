#include <stdio.h>
#include <iostream>

using namespace std ;


float SquaredSum (float numberOne, float numberTwo) {
  return (numberOne * numberOne) + (numberTwo * numberTwo);

}

void Sort(int elm[], int len) {

  for (int j = 0; j < len - 1; j++) {
    for (int k = j + 1; k < len; k++) {
      if (elm[j] < elm[k]) {
        int a = elm[k];
        elm[k] = elm[j];
        elm[j] = a;
      }
    }
  }
}


int main () {

////////1
  float firstNum, secondNum;
  cout << "First task" << '\n';
  cout << '\n';
  cout << "The sum of the squares of two number." << '\n' << '\n';

  cout << "Input first number: " << '-' << ' ';
  cin >> firstNum;
  cout << "Input second number: " << '-' << ' ';
  cin >> secondNum;
  cout << '\n';

  cout << "Result - " << SquaredSum(firstNum, secondNum) << '\n' << '\n';


//////////2

  cout << "Second task" << '\n';
  cout << '\n';
  cout << "Input 10 array elements:" << '\n';

  int len = 10;
  int numArr[len];


  for (int i = 0; i < len; i++) {
    cout << i + 1 << '.' << ' ';
    cin >> numArr[i];
  }
  cout << "Sorted array" << '\n';

  Sort(numArr, len);


  for (int k = 0; k < len; k++ ) {
    cout << numArr[k] << ' ';
  }
  cout << '\n';
  return 0;



  }
