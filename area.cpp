#include <iostream>
#include "area.hpp"
using namespace std;

Area::Area() {
  length = 5;
  breadth = 2;
}

Area::~Area() {
  // do nothing
}

void Area::GetLength() {
  cout<< "Enter length and breadth : ";
  cin>> length >> breadth;
}

int Area::AreaCalculation() {
  return length * breadth;
}

void Area::DisplayArea(int temp) {
  cout<< "Area: " << temp << endl;
}
