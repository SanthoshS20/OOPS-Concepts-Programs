#include<iostream>
using namespace std;
class Student{
  public:
  int val=100;
};
class Professor:public Student{
  public:
  int score=198;
};
class Teacher:public Student{
  public:
  int value=20;
};
class Assistant:public Professor, public Teacher{
  public:
  int range=1;
};
int main()
{
  Assistant s;
  cout<<s.score<<endl<<s.value<<endl<<s.range<<endl<<s.Professor::val;
  //cout<<s1.value;
}
