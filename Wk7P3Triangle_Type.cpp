#include <iostream>
#include <cmath>
using namespace std;
//check the lab sheet carefully to ensure your functions behave exactly as specified

//declare distance function
double distance (double x1, double y1, double x2, double y2);

//classify triangles function
int triangleType (double x1, double y1, double x2, double y2, double x3, double y3);

//for advanced version
bool veryClose (double x, double y);

int main() {

  double x1, y1, x2, y2, x3, y3;
  int type;
  
  cout << "Enter x1, y1, x2, y2, x3, y3:";
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  //call triangle type to obtain a value for "type"  
  //...
 type=triangleType(x1, y1,  x2,  y2,  x3,  y3);
  //report the outcome ...
  cout << "That is ";

  if (type == 3)
  {
	  cout<< "equilateral";
  }
  else if (type == 2){

    cout<<"isoceles";
    
  }
  else if (type == 0){
    cout<<"scalene";
  }
    
  cout << ".\n";

  return 0;
}

//define distance and triangleType ...
//make sure to call distance from inside triangleType to compute lengths of sides ...

int triangleType (double x1, double y1, double x2, double y2, double x3, double y3){
  int type;
  double distance1,distance2,distance3;
  distance1=distance(x1,y1,x2,y2);
  distance2=distance(x1,y1,x3,y3);
  distance3=distance(x2,y2,x3,y3);

  if(veryClose (distance1 , distance2) && distance2==distance3){
    type=3;
  }
else if ((veryClose(distance1,distance2))||(veryClose(distance2,distance3))||(veryClose (distance1,distance3))){
    type=2;
    }
  else {
    type=0;
  }
  return type;
}

double distance (double x1, double y1, double x2, double y2){
double distance;
  distance = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));

return distance;
  
}






//veryClose is needed for the advanced version / equilateral test
bool veryClose (double x, double y) {
	//return true iff the size of the difference between x and y 
 //is less than 0.0001
	//fabs gives the absolute value of a floating point number

	return (fabs (x-y) < 0.0001);
}