/*
Activity 1.3
See D2L for detailed desription
*/

#include<iostream>
#include<math.h>   // I have to research obout this library
using namespace std; 

int main() {

double x1,x2,y1,y2,z1,z2,distance_p1_p2=0;

  std::cout << "Introduce point x1 to calculate:\n";
  cout<<"enter x1\t"; cin>>x1;

  std::cout << "Introduce point y1 to calculate:\n";
  cout<<"enter y1\t"; cin>>y1;
  
  std::cout << "Introduce point x1 to calculate:\n";
  cout<<"enter z1\t"; cin>>z1;
  
  std::cout << "Introduce point x2 to calculate:\n";
  cout<<"enter x2\t"; cin>>x2;

  std::cout << "Introduce point y2 to calculate:\n";
  cout<<"enter y2\t"; cin>>y2;

  std::cout << "Introduce point z2 to calculate:\n";
  cout<<"enter z2\t"; cin>>z2;

// I have to research about the library math.h and about this function such as sqrt and pow, because using x^2 gave me an error, using float and double, etc. in this link https://www.youtube.com/watch?v=qnUzOVSf_g4&ab_channel=Programaci%C3%B3nATS.

// I research the formula in this link http://campusvirtual.cua.uam.mx/pdfs/paea/18o/tm/tema5_cont_c.pdf, I could unsdertand much better the problem.

distance_p1_p2 = (sqrt((pow(x2,2)) - (pow(x1,2)) + (pow(y2,2)) - (pow(y1,2)) +
          (pow(z2,2)) - (pow(z1,2))) );


std::cout << " Distance two 3d points from origen gaved from user:\t" <<distance_p1_p2;
            
return 0;   


} 