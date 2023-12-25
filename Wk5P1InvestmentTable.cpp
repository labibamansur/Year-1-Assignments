/* Investment Table */
#include <iostream>
#include <iomanip> //for io manipulation//
#include <cmath> //for the pow function//
using namespace std;

int main() {
    //Not essential to declare constants but makes the program more flexible.
    const int YEAR_MIN = 5;
    const int YEAR_MAX = 30;
    const int YEAR_INCR = 5;
    const double RATE_MIN=5;
    const double RATE_MAX=10;
    const double RATE_INCREMENT=0.5;
    
    int year;
    double rate, balance;
    double initial_balance;

    cout << "Enter initial investment amount:";
    cin >> initial_balance;
    /* print table header */
    cout << right << setw(10) << "Rate";
    for (year = YEAR_MIN; year <= YEAR_MAX; 
            year = year + YEAR_INCR)
     {
        cout << setw(4) << year << " years" ;
     }
     cout << "\n";
     
     cout << fixed << setprecision (2);
     
     //Now up to you to create the body of the table; don't forget the left margin ...

  for (rate=RATE_MIN;rate<=RATE_MAX;rate=rate+RATE_INCREMENT)
    {cout << setw(10)<<rate;
      for (year=YEAR_MIN;year<=YEAR_MAX;year=year+YEAR_INCR)
        { balance=initial_balance*pow(1+(rate/100),year);
      cout<<setw(10)<<balance;
      //cout<<setw(10)<<balance;
   }
   cout<<endl;
  }
    
    
    return 0;
}