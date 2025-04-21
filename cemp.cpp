#include<iostream>
using namespace std;
/*class emp
{
	int id,salary;
	public:
		emp()//default constructor
		{
			cout<<"enter income"<<endl;
			cin>>salary;
			cout<<"enter  id"<<endl;
			cin>>id; 
			
			
		}
		void getdata()
		{
			cout<<" your employee  "<<id<<"  having salary is  "<<salary<<endl;
			
		}
};

class com
{
	int x,y;
	friend com sumcom(com n,com m);
	public:
		com()
		{
		   x=0;
		   y=0;	
		}
		com(int a)
		{
			x=a;
			y=0;
		}
		com(int a,int b)---parameterized constructor
		{
			x=a;
			y=b;
		}
		void setcom(int a,int b)
		{
			x=a;
			y=b;
		}
		void getcom()
		{
			cout<<" the number of your complex is  "<<x<<"+i"<<y<<endl;
		}
};

com sumcom(com n, com m)
{
	com mn;
	mn.setcom((n.x+m.x),(n.y+m.y));
	return mn; 
}
*/

class y;
class x
{
	int data;
	public:
		void setdata(int value)
		{
			data=value;
		}
		friend void add(x,y);
};
class y
{
	int num;
	public:
		void setdata(int value)
		{
			num=value;
		}
		friend void add(x,y);
};
void add(x o1,y o2)
{
	cout<<"summing data of x and y object gives me "<<o1.data+o2.num<<endl;
}
















int main()
{
/*	emp ro,mr,ak;
	ro.getdata();
	mr.getdata();
	ak.getdata();
com c(4,1);
c.getcom(); 
com c1(4);
c1.getcom();
com d,sum;
d.getcom();
sum=sumcom(c,c1);
sum.getcom();   
*/

x a;
a.setdata(5);
y b;
b.setdata(8);
add(a,b);  
}
