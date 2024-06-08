#include <iostream>
#include <cstdlib> // for srand, rand
#include <ctime> // for time
using namespace std;

int getplayerchoice(){
 int userchoice;
cout<<"Welcome to Rock, Paper, Scissors!"<<endl;
cout<<"1. Rock"<<endl;
cout<<"2. Paper"<<endl;
cout<<"3. Scissor"<<endl;
cout<<"Choose your weapon: ";
cin>>userchoice;
return  userchoice;
}

int getcomputerchoice(){
  srand(time(NULL));
  int pcchoice = rand() % 3 + 1;
return pcchoice;
}

string determinewinner(int userchoice, int pcchoice){
    if (userchoice == pcchoice){
      return"DRAW!!";
    }
  else if ((userchoice == 1 && pcchoice == 3) || 
          (userchoice == 2 && pcchoice == 1) ||
          (userchoice == 3 && pcchoice == 2)){

      return "You Win!";
          }
  else {
    return "Computer Wins";
  }
}

int main(){
char playagain;
do{
int userchoice =  getplayerchoice();
int choice = getcomputerchoice();

  cout << "You choose: "<<userchoice;
 if (userchoice == 1){
   cout<<" Rock"<<endl;
 }
else if (userchoice == 2){
  cout<<" Paper"<<endl;
}
  else if(userchoice == 3){
   cout<<" Scissors"<<endl;
}

  cout << "Computer choose: "<<choice;
  if (choice == 1){
     cout<<" Rock"<<endl;
   }
  else if (choice == 2){
    cout<<" Paper"<<endl;
  }
    else if(choice == 3){
     cout<<" Scissors"<<endl;
  }
  

  cout<<determinewinner(userchoice, choice);
cout<<endl;
cout << "do you want to play again? y/Y: ";
  cin>>playagain;
}while (playagain == 'y' || playagain == 'Y');





  
}