#include <iostream>
#include "area.hpp" 
using namespace std; 

int main() 
 {
  Area A1, A2(2,1);
  int temp;
  
  cout<< "Default Area" << endl; temp = A1.AreaCalculation();
  A1.DisplayArea(temp);
  cout<< "Area when (2,1) is " \ "passed" << endl;
  temp = A2.AreaCalculation();
  A2.DisplayArea(temp);
  
  return 0;
 }
