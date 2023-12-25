/**
* Week 3 - Finding Net Pay
*
* Task 2 - Formatted output
*
* Copy the body of your solution to task 1 in here. Then arrange to
* (1) read a multipart name from the rest of the line of input e.g. given input "35 15 0 Michael McConnell" the name is "Michael McConnell".
* (2) format output, using fixed, showpoint, setprecision, setw, left, right, etc. to produce output exactly like this, 30 characters per line:
Name         Michael McConnell
Hours                    35.00
Hourly rate              15.00
Gross wage              525.00
Tax @ 20%               105.00
PRSI @ 2.5%              13.12
------------------------------
Net pay                 406.88
*
*/

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{//Use these constants in your calculations. 
  //These allow easy changes to rates, etc. when there is a change in policy, etc.
  const double BASIC_HOURS = 35;//hours above this is overtime
	const double OTIME_MULT = 1.5;//the multiplier for overtime hours
	const double TAX_RATE = 0.20;//all pay is taxed at 20%
	const double PRSI_RATE = 0.025;//PRSI is 2.5% of gross pay

	//Declare all the variables as doubles ...
	double gross_pay,hours, hourly_rate,PRSI,net_pay,tax,tax_credit,overtime_pay ;
  string name;
	//Read in the values
	//All inputs entered on one line, one prompt only
	cout << "Enter hours, hourly rate, tax credit, name:";
  cin>>hours>>hourly_rate>>tax_credit;
  
  getline(cin,name);
	          // etc...


	//Calculate the gross pay
	//To pass test 3, adjust the following to arrange for gross_pay to include overtime pay...
  

  //overtime
  if (hours>35)
  {overtime_pay=(hours-BASIC_HOURS)*(OTIME_MULT*hourly_rate);
    gross_pay=(BASIC_HOURS*hourly_rate)+overtime_pay;}
  else 
  {gross_pay=hours * hourly_rate;}

  
	//Calculate the deductions based on the gross pay
	//calculate tax
  tax=TAX_RATE*gross_pay;
  tax=tax-tax_credit;

	//apply the tax credit (to pass tests 4 & 5) ...
	if (tax<0)
  tax=0;
  
  //calculate PRSI ...
  PRSI=PRSI_RATE*gross_pay;

	//calculate net_pay after deductions ...
  net_pay=gross_pay-tax-PRSI;

	//Print out the main details
  cout<<fixed<<showpoint<<setprecision(2)<<endl;
  cout<<left<<setw(5)<<"Name"<<right<<setw(25)<<name<<endl;
  cout<<left<<setw(6)<<"Hours"<<right<<setw(24)<<hours<<endl;
  cout<<left<<setw(12)<<"Hourly rate"<<right<<setw(18)<<hourly_rate<<endl;
  cout<<left<<setw(10)<<"Gross wage"<<right<<setw(20)<<gross_pay<<endl;
  cout<<left<<setw(10)<<"Tax @ 20%"<<right<<setw(20)<<tax<<endl;
  cout<<left<<setw(12)<<"PRSI @ 2.5%"<<right<<setw(18)<<PRSI<<endl;
  cout<<"------------------------------"<<endl;
  cout<<left<<setw(8)<<"Net pay"<<right<<setw(22)<<net_pay<<endl;
  
	
	



	return 0;
}
