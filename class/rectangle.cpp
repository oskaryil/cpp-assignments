// Author: Oskar Yildiz
// Version: 1.0.0 
// Assignment: Rectangle Class with member functions: getArea, setValue and scaleUp
#include <iostream>

using namespace std;

class rectangle {
  public:
    double getArea(void);
    void setValue(double h, double w);
    void scaleUp(double factor);
  private:
    double height;
    double width;
};

void rectangle::setValue(double h, double w) {
  height = h;
  width = w;
}

double rectangle::getArea(void) {
  return height*width;
}

void rectangle::scaleUp(double factor) {
  height *= factor;
  width *= factor;
}

int main() {
  double height, width, scaleFactor;

  cout << "Rectangle height: ";
  cin >> height;
  cout << "Rectangle width: ";
  cin >> width;
  cout << "Scale factor (Use 1 for no upscaling): ";
  cin >> scaleFactor;

  rectangle A;

  A.setValue(height, width);
  A.scaleUp(scaleFactor);
  cout << "-------------Result------------" << endl;
  cout << "Rectangle Area: " << A.getArea() << endl;
  return 0;
}