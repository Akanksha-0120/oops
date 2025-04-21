#include<iostream>
using namespace std;
class Student
{
    protected:
           int rollno.;
           public:
              void setroll(iny r)
              {
                rollno.=r;
              }
              void getroll(void)
              {
                cout<<"the roll no is:"<<rollno.<<endl;
              }
};

class Exam:public Student{
    protected:
           float maths,physics;
    publib:
        void setmarks(float m,float p)
        {
            maths=m;
            physics=p;
        }
}