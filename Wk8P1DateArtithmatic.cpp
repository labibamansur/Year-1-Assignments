 //Week 8
#include <iostream>
using namespace std;

int month_length (int m, int y);
int year_length (int y);
bool leap_year (int year);
int daynumber (int day, int month, int year);

void dayMthYr (int daynum, int& day, int& month, int& year);

//declare calc_date ...
int calc_date( int daynum,char s,int v,char p);
//task 3-declare
int shift_in_year( int daynum,char s,int v);

int main ()
{
   int number, day, month, year, d,m,y;
   int choice;

   //testing dayMthYr
   cout << "Enter 1 to test date conversion; enter 2 to calculate a new date:";
   cin >> choice;
   if (choice == 1) {
    cout << "Enter d, m, y: ";
    cin >> d >> m >> y;
    //convert to daynumber
    number = daynumber (d,m,y);
   cout << "That is daynumber " << number << endl;

    //convert back by calling your dayMthYr function giving it number and three 
      dayMthYr ( number,  day,  month,  year);
    //variables, day, month and year, into which it puts the answers  ...
  

     
    //dayMthYr has given values to the call-by-reference parameters day, month and year
    //print them out
    cout << number << " is " << day;
    cout << "/" << month << "/" << year << endl;
   }
   else {//choice is not 1
    //test calc_date
    cout << "Enter a date to be modified: ";
    cin >> d >> m >> y;
    char s,p;
    int v;   
    cout << "Enter the sign, value, and period (d/w/y) of the modification: ";
    cin >> s >> v >> p;

    //turn the date into a daynumber and call your calc_date function ...
   // int number1=daynumber ( d, m,  y);

    //convert the answer back to a date using dayMthYr ...
      int New_Date = calc_date (daynumber ( d, m, y), s, v, p);
       dayMthYr ( New_Date,  day,  month,  year);
   
    cout <<"New Date is " << day;
    cout << "/" << month << "/" << year << endl;
}
    return 0;
}


void dayMthYr (int daynum, int& day, int& month, int& year)
//converts daynum to date format and puts the answers into the call-by-refeence parameters, day, month and year
{
  year=1900;
 while(daynum>year_length(year)){
   daynum=daynum-year_length(year);
   year=year+1;

 }
 month=1;
 while(daynum>month_length(month, year)){
   daynum=daynum-month_length(month,year);
   month=month+1;
 }
 day=daynum;
  //complete the definition of this function ... 
  //remember to use the functions that have been mae availalbe to you.

  //starting from the given daynum, and with year at 1900, 
  //*while* daynum is bigger than the length of the current year, 
  //move on a year, by subtracting the length of the current year from 
  //daynum and adding one to year



  //same idea for months ...

  

  //what's left is the day
  
}
//define task-2
int calc_date( int daynum,char s,int v,char p){
  if (p=='d'){
    if (s=='+'){
      return daynum=daynum+v;}
        else{
         return daynum = daynum - v;
        }
  }
           if (p =='w'){
            if (s=='+')
            {
              return daynum=daynum +(v*7);
            }
            else {
             return daynum=daynum - (v*7);
            }
          }
            
  //  }
 //   if(s=='-'){
  //   daynum=daynum-v;
  //  }
 // }
 // if (p=='w'){
   // if (s=='-'){
   //   daynum=daynum-(v*7);
    //}
   // if(s=='+'){
     // daynum=daynum+(v*7);
    //}
 // }
   // return daynum;
    if (p=='y'){
    return  shift_in_year( daynum, s, v);
     
    }
  else {
    return -1;
  }
}
//define-task-3
int shift_in_year( int daynum,char s,int v){
  int day,  month, year,shifted_year;
  dayMthYr ( daynum,  day,  month, year);
  
  if(s=='-'){
  shifted_year= year-v;
  }
  else {
    shifted_year= year+v;
  }

  //cout<<year;
   return  daynumber ( day, month, shifted_year);
  //cout<<year;

}

//converts a date to a daynumber
int daynumber (int day, int month, int year)
{
    int y, m, daynumber;
    //accumelate days in all years before the given one
    daynumber = 0;
    for (y = 1900; y < year; y++)
    {
        daynumber = daynumber + year_length (y);
    }

    //in the given year, accumulate days in all months before the given month
    for (m = 1; m < month; m++)
    {
        daynumber = daynumber + month_length(m, year);
    }

    //accumulate all the days in the given month, including the given day
    daynumber = daynumber + day;

    return daynumber;
}

//gives back the number of days in the given month of the given year
int month_length (int m, int y)
{
    if (m==2) 
        if (leap_year(y))
	      return 29;
        else
		  return 28;
      
    else if (m==9 || m==4 || m==6 || m==11)  //i.e. September, April, June, or November
        return 30;
    
    else
        return 31;
}

int year_length (int y)
{
    if (leap_year (y)) 
        return 366;

    else
        return 365;
}

bool leap_year (int year)
{
    //returns true if year is a leap year
    
    if (year % 4 == 0) //all others are definitely not leap
        if (year < 1583)
            return true;
   
        else //after 1583
            if ((year % 100 == 0) && (year % 400 != 0))   //e.g. 1900
                return false;
            else //e.g. 1904 or 2000
                return true;

        else //not divisible by 4
            return false;
}
