/**
* Week 3 - Finding Net Pay
* See detailed specification on Blackboard in Week 3
* Task 1 - calculations only
*/

#include <string> //not needed for task 1
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Use these constants in your calculations. 
  //These allow easy changes to rates, etc. when there is a change in policy, etc.
  const double BASIC_HOURS = 35;//hours above this is overtime
	const double OTIME_MULT = 1.5;//the multiplier for overtime hours
	const double TAX_RATE = 0.20;//all pay is taxed at 20%
	const double PRSI_RATE = 0.025;//PRSI is 2.5% of gross pay

	//Declare all the variables as doubles ...
	double gross_pay,hours, hourly_rate,PRSI,net_pay,tax,tax_credit,overtime_pay ;

	//Read in the values
	//All inputs entered on one line, one prompt only
	cout << "Enter hours, hourly rate, tax credit:";
  cin>>hours>>hourly_rate>>tax_credit;
  
  
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
	if (tax<0){
  tax=0;
  }
  
  //calculate PRSI ...
  PRSI=PRSI_RATE*gross_pay;

	//calculate net_pay after deductions ...
  net_pay=gross_pay-tax-PRSI;


	//Print out the main details
	cout << "Gross:" << gross_pay << " Tax:" << tax << " PRSI:" << PRSI;
	cout << "-----------------------------"<< endl;
  cout<<left<<setw(5)<<"Name"<<right<<setw(25)<<name<<endl;

	return 0;
}
