//Compute statistics for temperature data - see lab sheet
//Sample Input:DUBAIRPORT 10.5 6.5 5.0 -3.5 -4.0 7.5 3.0 -999
//Output:DUBAIRPORT -4.0 10.5 3.6
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () 
{
  int count;
  double min,max,avg,temperature,total_temperature; 
  string station;//declare variables ...

   //NB Don't prompt for input!!
  cin>>station;//read the station name ...

   cin>>temperature;//read the first temeprature ...
   
   //initialise variables ...
   min=temperature;
   max=temperature;
   count=0;
   total_temperature=0.0;
  
   // ... the loop ...
   while(temperature!=-999)
     {count=count+1;
      total_temperature=total_temperature+temperature;
       
      if (temperature>max)
      max=temperature;
      
      if (temperature<min)
      min=temperature;
      cin>>temperature;
       }

      if(count==0)
      {cout<<station<<" NO DATA";}
  
      else {avg=total_temperature/count;
  
       
   //decide what to output ...
  
  cout<<fixed<<setprecision(1);
  cout<< station<<" " <<min<<" "<<max<<" "<<avg<<endl;}

   return 0;
}