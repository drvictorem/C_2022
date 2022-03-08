#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std ;


int main () {
///№1
  int firstNum, secondNum;

  printf("Please, input A:\n");
  scanf("%d", &firstNum);

  printf("Input B:       ( B > A !!!)\n");
  scanf("%d", &secondNum);

  if ( firstNum > secondNum ) {

    printf("Condition not met : %d > %d \n", firstNum, secondNum);
    return 0;

  }

  printf("Writing to 'Output'....\n");

  FILE *fileToWrite;
  fileToWrite = fopen("Output", "w");


   while (1) {
     if (firstNum > secondNum) {
       break;
     }
     int valueToFile = firstNum * 3;
     fprintf(fileToWrite, "%d\n", valueToFile);
     firstNum++;
   }

   fclose(fileToWrite);
////№2
    printf("Reading from 'Output':\n");
    int value;
    int n = 1;
    ifstream fileToRead("Output");

    while (1) {
      fileToRead >> value;

      if (fileToRead.eof()) {
        break;
      }
      cout << n << "." << value << "\n";
      n++;

    }

    fileToRead.close();

  return 0;



}
