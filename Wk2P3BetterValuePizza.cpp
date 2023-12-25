//5 points of 20 for this week
//Indicate which pizza is better value
//Complete this program so that the if statement provided will print "FIRST", "SECOND or "SAME" as appropriate.
//Reuse your previous ppsi code
#include <iostream>
#include<cmath> 
using namespace std;

int main() {
  double diametre1,diametre2,area,ppsi1,ppsi2,price1,price2,radius; //declare variables ...
  const double PI= 3.1415;
  //read in data
 
  cout << "Enter the diameter and price of the first pizza:";
  cin>> diametre1 ; cin>> price1;
  
  cout << "Enter the diameter and price of the second pizza:";
  cin>> diametre2 ; cin>> price2;//similarly for second pizza 

  radius=diametre1/2;

  area= PI* (radius*radius);
  ppsi1= price1/area;
  
  radius=diametre2/2;
  area= PI* (radius*radius);
  ppsi2= price2/area;//compute ppsi1 and ppsi2

//cout<<"ppsi1"<<ppsi1<<" ppsi2"<<ppsi2<<endl;
  //workout and print the answer
  if (ppsi1 < ppsi2) {
    cout << "FIRST";//If the second one is a better value pizza
  }
  else if (ppsi1 > ppsi2) {
    cout<< "SECOND";//If the second one is a better value pizza
  } else  {
   cout<< "SAME";// If the value is equal
  }

  cout <<endl ;
  
  return 0;
}