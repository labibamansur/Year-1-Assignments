#include <iostream>
#include <iomanip>
#include <string> 

using namespace std;

const string SENTINEL = "X0000";

//Ideally use constants for all fixed charges values, and for free mins etc.
const double REG_FIXED_FEE = 10.00;
const int REG_FREE_MINS = 50;
const double REG_FEE_PER_MIN = 0.20;
const double P_FIXED_FEE=25.00;
const int PREM_DAY_FREE_MINS=75;
const double PREM_DAY_FEE_PER_MIN=0.10;
const int PREM_OFF_FREE_MINS=100;
const double PREM_OFF_FEE_PER_MIN=0.05;

/// etc..

//Declaration
void read ( string& name,double& balance, char& code, int& daymins, int& off_peak_mins);

double reg_charge (int mins);
//Computes charge for regular service accounts

double prem_charge (int peak_mins, int off_mins);
//Computes charges for premium service accounts

void print_bill(string acc,string name,char code,double& balance,double total);

int main()
{
    string acc,name;
    char code;
    int mins1, mins2;
    double bal, tot;

    cout << setw(8) << "Account" << setw(15) << "Name" << setw(12) 
    		<< "Act. Type" << setw(10) << "Charge" << setw(10) << "Balance" << endl;
    
    cin >> acc; // prepare for sentinel loop
    
   //repeatedly, if not finished, read the rest of the record, compute charges, 
   //print and prepare for the next round of the loop

 while (acc !=SENTINEL){
   read ( name, bal, code, mins1,mins2);
  
   if(code=='R'){
     tot=reg_charge(mins1);
   }

   else {
     tot= prem_charge (mins1,mins2);
     
   }

   print_bill(acc,name,code,bal,tot);
   cin>>acc;
 }
   
    return 0;
}	

//read function
void read ( string& name,double& balance, char& code, int& daymins, int& off_peak_mins){

  cin>>name>>balance>>code;

  if(code=='R'){
    cin>>daymins;
  }

  else {
    cin>>daymins>>off_peak_mins;
  }
}

// reg charge
double reg_charge (int mins){
  double total=REG_FIXED_FEE;

  while(mins>REG_FREE_MINS){
    total=total+REG_FEE_PER_MIN;
    mins--;
  }
  return total;
}


double prem_charge (int peak_mins, int off_mins) {
//Computes charges for premium service accounts
	double total = P_FIXED_FEE;
	//now add on fees for the used minutes
  while(peak_mins>PREM_DAY_FREE_MINS){
    total=total+PREM_DAY_FEE_PER_MIN;
    peak_mins--;
  }
   while(off_mins>PREM_OFF_FREE_MINS){
    total=total+PREM_OFF_FEE_PER_MIN;
    off_mins--;
  }
    
	return total;
}

void print_bill(string acc,string name,char code,double& balance,double total){
  

	cout << fixed << showpoint << setprecision (2);
	//copy setw numbers from the header in main 
  cout << right<<setw(8)<<acc<<setw(15)<<name<<setw(11);
  if(code=='R'){
    cout << "Regular";
  }

  else if(code=='P'){
     cout << "Premium";
  }

  balance=balance+total;
  cout<<setw(10)<<total<<setw(10)<<balance<<endl;
 
}
