#include <iostream>
#include <string>

using namespace std ;

int main (){

  //introduction part

 string firstn; 
 string lastn;
 string fulln;
 
cout<<"Hello student !\n\n\n";

  cout <<"Firstname : ";
  cin >> firstn;
  cout <<"Lastname : ";
  cin >> lastn;

  fulln = firstn + " " + lastn;
  cout <<"Your full name is "<< fulln <<"\n\n";
 
  //inputing marks in each subjects

cout <<"Please enter your marks in respected subjects .\n\n";
cout <<"Incase of decimal value please insert the nearest integer value .\n\n";

 int b,e,m,s,h,g;
 int tm;
 double per;
 int lit;
 double litper;
 int ms;
 double msper;

cout <<"Bengali : ";
cin >> b;
cout <<"English : ";
cin >> e;
cout <<"Mathematics : ";
cin >> m;   
cout <<"Science : ";
cin >> s;
cout <<"History : ";
cin >> h;
cout <<"Georgraphy : ";
cin >> g;

 tm = b + e + m + s + h + g;
 cout <<"Your full marks is "<< tm <<" out of 600.\n";

 //picking interests

 lit = b + e;
 litper = lit / 2.0;
 cout <<"You have "<< litper << " percentage in Literature .\n";
if (litper > 85 && litper <= 100) {
  cout <<"You have a great score in Literature. Keep it up ! \n";
}else{
  cout <<"Try to work harder.\n";
}
 
 ms = m + s;
 msper = ms / 2.0;
 cout <<"You have overall "<< msper << " percentage in Math and sciencs .\n";
if (msper > 90) {
  cout <<"You have a great score in Math and sciences. Keep it up !\n";
}else{
  cout <<"Try to work harder.\n";
}

  //calculating percentage

 per = tm / 6.0; 
 cout <<"You get "<< per << " percentage overall .\n";

 //complementing each percentge
 
 if (per >= 90 && per <= 100) {
  cout <<"Congrats, you have passed with an A+ grade .\n"; 
 }else if (per <= 89 && per >= 70) {
  cout <<"Congrats, you have passed with an A grade .\n";
 }else if (per <= 69 && per >= 50) {
  cout <<"Congrats, you have passed with a B+ grade .\n";
 }else if (per <= 49 && per >= 25) {
  cout <<"Congrats, you have passed with a B grade .\n";
 }else {
  cout <<"Congrats, you have failed and successfully destroyed one year .\n";
 }

return 0;
}
