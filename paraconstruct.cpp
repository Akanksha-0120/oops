#include<iostream>
using namespace std;
class Parameterized
{
    int a,b;
    public:
         Parameterized(int x,int y=9)
         {
            a=x;
            b=y;
         }
         /* Parameterized(int x)
          {
            a=x;
          }
           Parameterized(int y)
          {
            a=0;
            b=y;
          }*/
         void display()
    {
        cout<<"the value of a:"<<a<<endl;
         cout<<"the value of b:"<<b<<endl;
        cout<<"sum of a and b:"<<a+b<<endl;
        cout<<"the complex of a and b:"<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
   Parameterized p(5,0);//implicit call-->means expressed directly
    p.display();
    Parameterized q(7,8);
     q.display();  
    Parameterized q1(3,0);
      q1.display();
    Parameterized q2(6,9);
     q2.display();
    Parameterized p1=Parameterized(7,3);//explicit call-->means hinted or not given directly
    p1.display();
    Parameterized q0(7);
     q0.display();
      Parameterized p2();
       Parameterized p3=100;
       p3.display();  
   return 0;
}
// we can call a constructor as  many times as we want just change the value or keep same of it by making different different object 
//we make more than one constructor then it can create error at the calling time of object with same parameter