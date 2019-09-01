#include<iostream>
using namespace std;
class Student{
  public:
  static int val; /*static variables in a class must be initialized outside the class.
  static variable value are same for different objects. initialization can be done only once
  */
  void operator++()
  {
    val+=1;
  }
};
int Student::val=0;
int main()
{
  Student s1,s2;
  ++s1;
  ++s1;
  cout<<s1.val;
  cout<<s2.val;
}
