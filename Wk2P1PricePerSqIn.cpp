//5 points of 20 for this week
//Complete this price per square inch of a pizza program. 
//Use intermediate variables to hold the radius and the area

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const double PI = 3.1415;
  double diameter, area, price,radius;
  //other variables are needed...
  


  double ppsi;//for the price per sq inch

  
  cout << "Enter the diameter:";
  cin>> diameter;
  cout<< "Enter the price:";
  cin>> price;
 //
  radius=diameter/2; 
  area= PI* (radius*radius);
   ppsi= price/area; 

  //Now compute ppsi step by step ...

 
  
  cout << fixed << setprecision(2);//to get 2 decimal places in the output value
  cout << "The price per square inch of that pizza is " << ppsi*100 << " cent\n";

  return 0;
}