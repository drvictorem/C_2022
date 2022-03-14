#include <stdio.h>
#include <iostream>
#include <cstdio>
using namespace std ;


int main () {

  setlocale(LC_ALL, "Russian");
///////1
  int value;
  char nameArr[10][15] = {
    "Ноль",
    "Один",
    "Два",
    "Три",
    "Четыре",
    "Пять",
    "Шесть",
    "Семь",
    "Восемь",
    "Девять"
  };

  cout << "Введите число от 0 до 9: " << "\n";
  cin >> value;

  if (value > 9 or value < 0) {
    cout << "Вы ввели некорректное число !!!" << "\n";
    return 0;
  }

  cout << "Вы ввели чило - " << nameArr[value] <<"\n";

////////2

  char *y;
  char str[100];

  cout << "Введите строку: " << "\n";
  cin >> str;
  y = str;

  while (*y) {
    int num = int(*y) + 1;
    num = char(num);
    *y = num;
    y++;
  }
  cout << "Преобразованная строка:" << "\n";
  cout << str << "\n";
  return 0;



}
