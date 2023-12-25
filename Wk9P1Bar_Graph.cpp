#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	//declare constants, variables and the array ...
  const int MAX_VALUE=20;
  const int SIZE=70;
 int i,coloumn;
  int sequence[70];

	//read the numbers into the array ...
	for(i=0;i<70;i++){
    cin>>sequence[i];
  }

  //print lines starting from top of the graph ...
  //y-aixs
	for(coloumn=MAX_VALUE;coloumn>0;coloumn--){
    cout<<fixed<<setw(2)<<right<<coloumn;
    cout<<"  |";

    for(int i=0;i<SIZE;i++){
      if(sequence[i]>=coloumn){
        cout<<"*";
      }
      else {
        cout<<" ";
      }
    }
      cout<<endl;
    }
  
    //print the x-axis ...
    cout<<"----|";
  for(i=1;i<=(SIZE/10);i++){
    cout<<"----+----|";
  }
  cout<<endl;
      //----+----|----+----|----+----|----+----|----+----|----+----|----+----|";
    return 0;

  }
	
	
	
  
	