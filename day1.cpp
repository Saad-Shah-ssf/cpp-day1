#include <iostream>
using namespace std;

class student
{
      private:
      int age;
      string name;
      float cgpa;
      int semester;
      
      public:
             void input()
             
       {
             cout<<"Enter your age";
             cin>>age;
             cout<<"Enter your name";
             cin>>name;
             cout<<"enter yoursemester";
             cin>>semester;
             cout<<"enter your cgpa";
             cin>>cgpa;
             }
             void output()
             {
                  cout<<"age="<<age<<endl;
                  cout<<"name="<<name<<endl;
                  cout<<"semester="<<semester<<endl;
                  cout<<"cgpa"<<cgpa<<endl;
                  
                  }
                  
};

int main()
{
    student s;
    s.input();

    s.output();


    return 0;
}
