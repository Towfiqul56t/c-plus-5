#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int id;
  student(){
    name= "unknown";
    id= 30;
  }
  student(string a){
    name = a;
    id= 31;
  }
  student(string a,int b){
    name = a;
    id=b;
  }
  void display(){
    cout<<"your name "<<name<<"\nyour id "<<id<<"\n\n";
  }
};
int main(){
    student a1;
    a1.display();
    student a2("towfiqul");
    a2.display();
    student a3("ratul",32);
    a3.display();
    return 0;
}