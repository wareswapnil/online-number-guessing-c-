#include<iostream>
#include <cstdlib>
#include<ctime>
#include<limits>

using namespace std;

int main(){
    srand(time(0));
    cout <<"Welcome to the Number Guessing Game!"<<endl;
    cout <<"I am selecting a random number 1 to 50. Try to guess !"<<endl;


    int  secreateNumber= rand()%100+1;

  int attempts= 0;
  int maxattempts= 5;

  if (secreateNumber%2==0)
  {
    cout <<" it is a even number!"<<endl;

  }

  else {
    cout<<"It is a odd number!"<<endl;
  }

  while (attempts<maxattempts) {
    cout<< " Enter your guess(between 1 and 100): ";
      int guess;
    cin >>  guess;

    if (cin.fail()|| guess<1||guess>50){
        cin.clear();
        cin.ignore();
  cout<<"Invalid input , please enter your correct number."<<endl;
    continue;
    }
    attempts++;


  if (guess==secreateNumber ){
    cout<<" Congratulation! you guess correct number"<<endl;
  break;
  }
  else if (guess<secreateNumber)
  {
    cout<<" TO LOW!";
  }
  else(guess<secreateNumber);
  {
    cout<<" TO HIGH!";
  }

  int difference= abs(secreateNumber-guess);
  if (difference>=6){
    cout<<"You are very far to guess number."<<endl;
  }
  else if (difference>=4){
    cout<<"You are very colser to the guess number."<<endl;
  }
  else
{
  cout<<"You are very close to guess number."<<endl;

  }
  if (attempts>=maxattempts){
    cout<<"Sorry, you've run out of attempts.The correct number was  "<<secreateNumber<<endl;
  }

return 0;
}
}


