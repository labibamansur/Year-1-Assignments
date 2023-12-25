#include <iostream>
using namespace std;

// declare a read function that reads size chars into array a ...
void read_answers(char ans[],int size);// void bc noo return

//declare a score function that takes two arrays of chars, correct answers and student answers, and their size, and returns the score ...
int score(char ans[],char sol[],int size);


int main ()
{
    const int MCQsize = 20;
    int studentID;
    int grade;
    char solution[MCQsize], answers[MCQsize];
        
    //read the model/correct answers ...
    read_answers(solution, MCQsize);

    
    //read the first student id
    cin >> studentID;
    
    //read, score and report each student's answers ...
        while(studentID>=0 ){
          read_answers(answers, MCQsize);
          grade=score(answers,solution,MCQsize);
          cout<<studentID<<": "<<grade<<endl;
          cin>>studentID;
        }
        
    return 0;
}

//define the functions ...
void read_answers(char ans[],int size){
  for(int i=0;i<size;i++){
    cin>>ans[i];
  }
}
int score(char ans[],char sol[],int size){
  int marks = 0,i;
  for(i=0;i<size;i++){
    if(ans[i]==sol[i]){
      marks=marks+2;
    }
    else if (ans[i]!='x'){
      marks=marks-1;
    }
    //can also add the blank answer
    
  }
  return marks;
}
