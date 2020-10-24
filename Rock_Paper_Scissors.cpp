#include<iostream>
using namespace std;

int main(){
  system("clear");
  cout << "#####################################\n#########    Hello player   #########\n######  It is a game for you   ######\n##  I hope you will enjoy with it  ##\n######  Lets start playing    #######\n#########     Good luck     #########\n#####################################" << endl;
  cout << "\nHow many round do you want?... ";
  int rounds;
  cin >> rounds;
  int p_score = 0, c_score = 0;
  for(int i = 1; i <= rounds; i++){
    system("clear");
    int p_choice, c_choice;
    cout << "\n#####   " << i << "-Round   #####\n" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissor" << endl;
    cout << "\nChooce the choices... ";
    cin >> p_choice;
    c_choice = ((rand()%3)+1);
    system("clear");

    if(c_choice == p_choice){
      cout << "******************\n*****  Draw  *****\n******************" << endl;
      c_score++;
      p_score++;
    }
    else if((p_choice == 1 && c_choice == 3) || (p_choice == 2 && c_choice == 1) || (p_choice == 3 && c_choice == 2)){
      cout << "*********************\n*****  You win  *****\n*********************" << endl;
      p_score++;
    }
    else{
      cout << "**********************\n*****  You lose  *****\n**********************" << endl;
      c_score++;
    }
    cout << "\nENTER any number to continue.....";
    int a;
    cin >> a;
  }
  system("clear");
  cout << "####   Player score = " << p_score << "     ####" << endl;
  cout << "####   computer score = " << c_score << "   ####\n" << endl;
  if(p_score > c_score){
    cout << "*********************\n*****  You win  *****\n*********************" << endl;
  }else if(p_score < c_score){
    cout << "**********************\n*****  You lose  *****\n**********************" << endl;
  }else{
    cout << "******************\n*****  Draw  *****\n******************" << endl;
  }
}
