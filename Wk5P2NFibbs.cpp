/* Prints specified number of terms of the fibonacci sequence
The key concept here is that when i is say 5 prev contains
the 3rd term and curr the 4th term of the series.
Adding prev and curr gives the 5th term, stored in next.
Then, in preparation for the next time, when i will be 6,
we need prev to be the 4th and curr to be the 5th term.
*/
#include <iostream>
using namespace std;

int main() {
    int terms, i, next;
    int prev = 0, curr = 1;
    cout << "How many fibs:";
    cin >> terms;
    cout << prev << " " << curr << " ";
    //now start a loop to print 3rd fib up to terms'th fib
   
  for (i=0;i<terms-2;i++)
      {next=curr+prev;
        cout<<next<<" ";
      prev=curr;
      curr=next;
      }
      
      
      //{//the body computes the next term, prints it and updates variables ...
      //for ()
        
      

      //}
    cout << endl;  
    return 0;
    }