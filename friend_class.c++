#include<iostream>
using namespace std;
class Teacher{
  int val=0;
  public:
  friend class Student;
  protected:
  int value=100;
};
class Student{
  public:
  void display(Teacher s1)
  {
    cout<<s1.val<<endl<<s1.value;
  }
};
int main()
{
  Teacher s;
  Student s1;
  s1.display(s);
}
