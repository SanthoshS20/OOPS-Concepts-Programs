#include<iostream>
using namespace std;
class Student{
  public:
  void display(){
    cout<<"WELCOME"<<endl;
  }
};
class Teacher:public Student{
  public:
  void display(){
    cout<<"HOME"<<endl;
  }
};
int main()
{
  Student s1;
  s1.display();
  Teacher s2;
  s2.display();
  
  Student *s3;
  s3 = &s2;
  s3->display();
}
