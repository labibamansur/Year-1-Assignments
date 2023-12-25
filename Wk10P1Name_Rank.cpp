//Week 10 P1 name rank
#include <iostream>
#include <string>
using namespace std;

const int NUM_NAMES = 10;

int search (string s, const string sarray[], int size);
//returns the position of s in sarray or -1 if not found

int main () {
    string girls [NUM_NAMES] = {"Grace", "Fiadh", "Emily", "Sophie", "Ava", "Amelia", "Ella", "Hannah", "Lucy", "Alex"};
    string boys [NUM_NAMES] = {"Jack", "James", "Noah", "Daniel", "Conor", "Finn", "Liam", "Fionn", "Alex", "Charlie"};
    //source https://www.independent.ie/news/revealed-irelands-top-baby-names-in-2020-40134889.html
    //adapted by insertion of Alex in each list to test corect logic where a name appears on both lists
    
    //declare other variables ...
     string name="Yes";
     string test_name;
     int girl_slot,boy_slot;
    
    //set up a loop to run the program repeatedly ...
     while(name!="No"){
       
     
	    //get the name to be searched ...
      cout<<"Enter a name to search for:";
      cin>>test_name;
      //search for it in both lists ...
       girl_slot= search ( test_name, girls ,NUM_NAMES);
       boy_slot=search(test_name,boys,NUM_NAMES);
      //take appropriate action ...
      if (girl_slot!=-1){
        
        cout << test_name << " is ranked " << girl_slot+1 << " in top girls name.\n";
      }
        if(boy_slot!=-1){
         cout << test_name << " is ranked " << boy_slot+1 << " in top boys name.\n";
       }
       
       if(girl_slot==-1 && boy_slot==-1){
         cout << test_name << " is not in the top " << NUM_NAMES << " for girls or boys.\n";
         
       }
      //ask about going again ...
       cout << "Look up the rank of another name? Enter No to end:";
       cin>>name;
       
        }
      //these are some of the output statements you should use in your program
      //cout << "Enter a name to search for:";
      //cout << test_name << " is not in the top " << NUM_NAMES << " for girls or boys.\n";
     // cout << test_name << " is ranked " <<  << " in top girls name.\n";
      //cout << test_name << " is ranked " << ??? << " in top boys name.\n";
      //cout << "Look up the rank of another name? Enter No to end:";
      
	
    return 0;
}

int search (string s, const string sarray[], int size) {
//returns the position of s in sarray or -1 if not found
    for (int i=0; i < size; i++) {
        if (sarray[i] == s) {
            return i;
        }
    }
    //if we get here we didn't find s in the array
    return -1;
}