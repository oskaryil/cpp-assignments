// Author: Oskar Yildiz
// Version: 1.0.0
// Assignment: Square class with constructor

#include <iostream>

using namespace std;

class Square {
  public:
    Square(double w) {
      width = w;
    }
    double getArea();
  private:
    double width;
};


double Square::getArea() {
  return width*width;
}

int main() {
  Square a(10);
  cout << "Square Area: " << a.getArea() << endl;
  return 0;
}