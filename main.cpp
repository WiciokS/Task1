#include <iostream>

using namespace std;

int plusi(int m, int n)//addition
{
  cout << m << " + " << n << " = ";
  return m+n; 
} 

int minusi(int m, int n)//substraction
{
  cout << m << " - " << n << " = ";
  return m-n; 
} 

int oni(int m, int n)//multiplication
{
  cout << m << " * " << n << " = ";
  return m*n; 
} 

int main()
{
  int a, b;
  char c, d;
  while(d != 'n')
  {
  cout << "What you want to do?(+/-/*) " <<endl;
  cin >> c;
  if(c != '+' && c != '-' && c != '*') //check
  {
  cout << "ERROR!!!" << endl;
  return 0;
  }
  cout << "First number: ";
  cin >> a;
  cout << endl << "Second number: ";
  cin >> b;
  cout << endl;
  if(c == '+') cout << plusi(a,b) << endl;
  else if(c == '-') cout << minusi(a,b) << endl;
  else if(c == '*') cout << oni(a,b) << endl;
  cout << "You want to continue?(y/n) " << endl;
  cin >> d;
  if(d != 'y' && d!= 'n') //check
  {
  cout << "ERROR!!!" << endl;
  return 0;
  }
  }
  cout << "Finishes work... " << endl;
    return 0;
}
