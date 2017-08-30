/* rng guessing game with counter */
#include <stdlib.h>     // srand, rand, system("cls") 
#include <time.h>       // time 
#include <iostream.h>   // cout,cin


int SecretNumber()     // the 'SecretNumber' function will use a pseudo-random number generator
{
 int iSecret;
  
 srand (time(0));            // initializes random seed
 iSecret = rand() % 10 + 1;  // generate secret number between 1 and 10
                             
 return(iSecret);            // returns the value obtained by the function
}


char GuessingGame()
{ 
 int Snumber,iGuess, counter=0;
 char Ans;

 Snumber=SecretNumber();   // the value 'iSecret' is retreived here and assigned to a differant variable to be used in the function

  do {
      //cout<<"number = "<<Snumber<<'\n';   // quick reference for whitebox testing
      cout<<"Guess the number (1 to 10): ";
      cin>>iGuess;
      if (Snumber<iGuess) cout<<"The secret number is lower"<<'\n';
      else if (Snumber>iGuess) cout<<"The secret number is higher"<<'\n';
      ++counter;
     }while (Snumber!=iGuess);

  
  cout<<"Congratulations! You found the secret number ";
  cout<<" in "<<counter<<" tries."<<'\n'<<'\n'<<'\n';
  cout<<"Try again?"<<'\n'<<"y = yes"<<'\n'<<"n = no"<<'\n';
  cin>>Ans;
  return(Ans);
}
 
 


void main()
{
 char answer='a';
 do {
     cout<<'\n'<<'\n';
     answer=GuessingGame();
     system("cls");  //clears the screen after each game
    }while (answer=='y');
    
} 