#include <iostream>
using namespace std;
#include<cctype>
#include <algorithm>

int main()
{
char choption;
do{
        system("cls");
cout << "MAIN MENU"<<endl;
cout << "type the letter of your option"<<endl;
cout << "a) to calculate an arithmetic sequence"<<endl
     << "b) sequence with index"<<endl
     << "c) enter a word "<<endl
     << "x) Exit"<<endl;

cin  >>choption;

switch(choption){
  //for option A
  case 'a':
  case 'A':{
  int number;
  int common;
  int term;
  int counter;


  cout<< "enter the starting number"<<endl;
  cin >> number;

  cout<<"enter a common difference number"<<endl;
  cin >> common;

  cout<<"enter the number of terms"<< endl;
  cin>> term;

  // calculations
  int sequence;
  for(counter=0; counter <term ;++counter)
  {
      sequence = number+counter*common;
      cout<<sequence;
      if(counter<term){cout<<",";}
  }


  break;
  }
   //for option B
   case 'b':
    case 'B':{

 int index;
 int number;
  int common;
  int term;
 int valb;
 int vala;





 cout<<"Enter a starting value"<<endl;
 cin>>number;

 cout<<"Enter a common difference"<<endl;
 cin>>common;

 cout<<"Enter the number of terms"<<endl;
 cin>>term;

 cout<<"Enter an index"<<endl;
 cin>>index;
 if(index <1 ||index > term){cout<<"INVALID INDEX";}

  valb = number+(index-2)*common;
 vala = number +(index)*common;
cout<<"Value before index is "<<valb<<endl;
cout<<"Value after index is "<<vala<<endl;



break;
    }
    case 'c':
    case 'C':{
    string word,reversed;

    cout<<"Enter a word"<<endl;
    cin>>word;
    for(char &c :word){
        c=toupper(c);
    }
 // to reverse the word
 reversed =word;
 reverse(reversed.begin(),reversed.end());
  cout<<"upper case: "<<word<<endl;
  cout<<"REVERSED WORD: "<<reversed<<endl;

    break;
    }
    case 'x':
    case 'X':{
        cout<<"exiting "<<endl;
        break;
    default:
        cout<<"invalid "<<endl;
    }

}
system("pause");
}while(choption !='x');

return 0;
}
