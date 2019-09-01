#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
  int *val = new int;
  char *character = new char;
  cin>>*val;
  cin>>*character;
  cout<<*val<<endl<<*character;
  delete val;
  delete character;
  int i;
  int *values = new int[3];
  for(i=0;i<3;i++)
  {
    cin>>*(values+i);
    cout<<*(values+i);
  }
  delete[] values;
  char *name;
  name = new char[9];
  for(i=0;i<8;i++)
  {
  cin>>*(name+i);
  cout<<*(name+i);
  }
  delete[] name;
}
