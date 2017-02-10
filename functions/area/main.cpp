#include <iostream>

using namespace std;

float areaTriangle(float a, float b);

int main() {


  cout << areaTriangle(10, 10) << endl;
  return 0;
}

float areaTriangle(float a, float b) {
  return (a*b)/2;
}