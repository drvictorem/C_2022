#include <stdio.h>
#include <iostream>
using namespace std ;



int main() {

  // #1
  for (int a = 0; a <= 100; a++) {

    if (a % 3 > 0 ) {
      continue;
    }
    printf("Число %d делится на 3 \n", a);
  }

  // #2

  int b = 1;
  int sum = 0;
  do {

    b = b + 4;
    int f ;
    f = b % 7;

    switch (b) {
      case 1001: continue;
    }
    switch (f) {
      case 0: sum = sum + b;
    }


  } while (b < 1000);

  printf("Сумма чисел = %d\n", sum);
  return 0;
}
