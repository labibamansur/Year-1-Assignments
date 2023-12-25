//Program to determine how many months it takes to pay off a loan. See lab sheet.
/* Sample:: Loan amount:1500
      Monthly payment:50
      36 months.
      292.31 euro total interest.
      42.31 euro final payment.     */
#include <iostream>
#include<cmath>
#include<iomanip>
#include<string>

using namespace std;

int main(){
const double yearly_rate=0.12;
const double monthly_rate=0.01;

  double interest,total_interest,final_payment,loan_amount,monthly_payment,balance;
  int months;

  cout<<"Loan amount ";
  cin>>loan_amount;

  cout<<"Monthly paymen ";
  cin>>monthly_payment;

  months=0;
  balance=loan_amount;
  total_interest=0;

  cout<<fixed<<setprecision(2);

  while(balance>0) {
    months++;
    interest=monthly_rate*balance;
    balance=balance+interest-monthly_payment;
    total_interest=total_interest+interest;
    
  }

  final_payment=balance+monthly_payment;

  cout<<months<<"  months"<<endl;
  cout<<total_interest<<" euro total interest"<<endl;
  cout<<final_payment<<" euro final payment"<<endl;

  return 0;
  
  
  
  
  }
