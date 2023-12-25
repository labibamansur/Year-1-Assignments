/**
* Week 10 P2
Statistical Functions 
*
* This program reads in an unknown number of values, and then
* computes the mean, variance, standard deviation and the 
* number of zero crossing for these values.
*
*/

#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

void read_to_sentinel(double array[], int capacity, int& size, double sentinel);

//declare the statistical functions ...
double avg( double array[], int size);
double standard_dev(double array[],int size);
int zero_crossing(double array[],int size);
double variance(double array[],int size);

int main()
{
	const int CAPACITY = 100;
	double array[CAPACITY];
	int size;
	double sentinel = 9999;

	//call read_to_sentinel ...
   read_to_sentinel(array,CAPACITY, size, sentinel);

	//call the functions to compute stats,
  int zeros= zero_crossing( array , size); 
  double ave=avg( array, size);
  double var= variance( array, size);
  double stddev=standard_dev( array , size);


  //passing in the size value provided by read_to_sentinel ...

	
  //Print the output
  cout << "Count:" << size << endl;
	cout << "Mean:" << ave << endl;
	cout << "Variance:" << var << endl;
	cout << "Std. Dev.:" << stddev << endl;
	cout << "Zero Xs:" << zeros << endl;

  return 0;
}

// read_to_sentinel is as in lectures and in squarearbseq.cpp
// capacity is the maximum capacity (declared size) of the array;
// size (changed within the function, hence the &) becomes the number of values actually added
// sentinel is the number that marks the end of the sequence;
void read_to_sentinel (double array[], int capacity, int& size, double sentinel)
{
	size = 0;
	double x;
	cin >> x;
	while(size < capacity && x != sentinel)
	{
		array[size] = x;
		size = size+1;
		cin >> x;
	}
  if (size == capacity)
    cout << "\nWARNING OVERFLOW Only first " << capacity << " numbers handled.\n";
}

// define the statistical functions ...
int zero_crossing(double array[],int size){
  int count=0;
  int i;
  double test;
  for(i=0;i<size;i++)
  //test=array[i]*array[i-1];
  
  if((array[i]*array[i-1])<0)
    count=count+1;
  
    return count;
}

double avg( double array[], int size){
  double sum=0.0;
  //double numbers;
  int i;
  for(i=0;i<size;i++){
    
    sum=sum+array[i];
    
  }
return sum/(size);

}
double variance(double array[],int size){
  double t;
  double total;
  total=0.0;
  double t_squared;
  int i;
 double mean_value;
mean_value=avg(array,size);
  for(i=0;i<size;i++){
    t=array[i]-mean_value;
    t_squared=t*t;
    total=total+t_squared;
    
  }
  return total/(size-1);
  
}

double standard_dev(double array [],int size){
  return sqrt (variance(array,size));
}

