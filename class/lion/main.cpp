#include <iostream>

using namespace std;

class Lion {
  int weight;
  int age;
}

int main() {

  Lion* lion = new Lion();

  lion->age = 15;
  lion->weight = 200;

  return 0;
}