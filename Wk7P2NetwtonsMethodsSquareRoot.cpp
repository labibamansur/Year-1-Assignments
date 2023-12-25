#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//computes the square root of n, given an inital approximation
double newton_sqrt (double n, double init);
//uses Newton's method to generate the next approximation to the sqrt of n given the previous one, x

double better_approx (double x, double n);
//see lab sheet for details

bool close_enough (double x, double n);
//determines whether x is close to being a square root of n
//see lab sheet
//see lab sheet for details

int main () {
    //don't touch main
    double n;
    double approx;
    cout << "Enter n:";
    cin >> n;
    approx = newton_sqrt (n, n/2); //n/2 is an arbitrary initial approximation.
    cout << fixed << setprecision(6);
    cout << "The square root of " << n;
    cout << " is approx " << approx << endl;
    
    return 0;
}

double newton_sqrt(double n, double init) {
//returns an approx to the sqare root of n, 
//uses Newton's method and starts at init. 
    double approx = init;
    //keep improving approximations until close enough (or while not close enough); you must use the two other functions ...
 while (close_enough(better_approx(approx,n),approx)==false){
   approx= better_approx(approx,n);
   
     cout << fixed << setprecision(6) << approx << endl;  

 }


        //for debugging every time you compute a new approximation print it out
       // cout << fixed << setprecision(6) << approx << endl;  



    return approx;
}

//define the other two fucntions ...
bool close_enough (double x, double n){
  return (fabs (x-n) < 0.0001);
}
double better_approx (double x, double n){
  double better_approx=((n/x)+x)/2;
  return better_approx;
}