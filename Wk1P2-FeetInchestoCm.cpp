 //Converts feet and inches to centimetres//
//Worth 6 #include<iostream>
#include<iostream>
using namespace std;

int main(){
  double feet,inches,inch,cm;
  
  cout<<"Entre the feet value:";
  cin>>feet;
 

  cout<<"Enter the inches value:";
  cin>>inches;

  inch=(feet*12)+inches;
  cm=(inch*2.54);

  cout<<feet<<" feet "<<inches<<"inches is "<<cm<<"cm";

  return 0;
}