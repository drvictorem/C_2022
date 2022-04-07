#include <stdio.h>
#include <iostream>

using namespace std ;

class Bucket {
  int volume;
  int used;
  public:
    Bucket(int v, int u) {
      volume = v;
      used = u;
    }
    int get_used();
    int get_volume();
    int flush();
    int fill(int liter);

};

int Bucket::get_volume() {
  return volume;
}

int Bucket::get_used() {
  return used;
}

int Bucket::flush() {
  used = 0;
  return 0;
}

int Bucket::fill(int liter) {
  int free = volume - used;

  if (liter > free) {
    cout << "Free only "<< free << " liters" << "\n";

    used = volume;
    int diff = liter - free;

    cout << diff << " liter excess"<<"\n";
    return diff;
  };

  used = used + liter;

  return 0;
}

int main () {
  int liters;
  Bucket blackBucket(15, 0);

  cout << "Bucket volume - " << blackBucket.get_volume() << "\n";
  cout << "Bucket used volume - " << blackBucket.get_used() << "\n";

  cout << "Fill the bucket - "<< " ";
  cin >> liters;
  blackBucket.fill(liters);

  cout << "Bucket used volume - " << blackBucket.get_used() << "\n";

  cout << "Empty the bucket" << "\n";
  blackBucket.flush();
  cout << "Bucket used volume - " << blackBucket.get_used() << "\n";
  return 0;
  }
