#include<iostream>
using namespace std;
class Number
{
   int a;
   public:
   Number(){}
   Number(int num){
      a=num;
   }
   Number(Number &obj)
   {
      cout<<"copy constructor caled!!!"<<endl;
      a=obj.a;
   }
   void display()
   {
      cout<<"the no for this object is: "<<a<<endl;
   }
};
int main()
{
   Number x,y,z(45);
   x.display();
   y.display();
   z.display();
   Number z1(x);
   z1.display();
   Number z2=z;
   z2.display();
   return 0;
}