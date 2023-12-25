//For 9 points
//Complete the following programme to convert fahrenheit to centigrade. 
//Sample interaction as follows:
//Enter fahrenheit temperature:212
//212 degrees fahrenheit is 100 degrees centigrade.
#include <iostream>
using namespace std;

int main () {
    double fahrenheit, centigrade;
    cout<<"Enter the Fahrenheit Temperature:";//Prompt for and read in the fahrenheit temperature
    cin>>fahrenheit;


    //compute the equivalent centigrade temperature
    
    centigrade = (fahrenheit-32) * (5.0/9);
    cout<<centigrade<< " centigrade";

  
    return 0;
}