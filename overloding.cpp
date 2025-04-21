#include<iostream>
using namespace std;
int sumnum(int x,int y)
{
	int sum=0;
	sum=x+y;
	return sum;
}

int substnum(int x,int y)
{
	int subst=0;
	subst=x-y;
	return subst;	
}

int multinum(int x,int y)
{
	int multi=0;
	multi=x*y;
	return multi;
}	

int dividenum(int x,int y)
{
	int divide=0;
	divide=x/y;
	return divide;
}

int main()
{
	int x,y;

	cout<<"enter number:"<<endl;
	cin>>x;
	cout<<"enter number:"<<endl;
	cin>>y;
	cout<<"sum of two number:"<<sumnum(x,y)<<endl;
	cout<<"substraction of two number:"<<substnum(x,y)<<endl;
	cout<<"multiplication of two number:"<<multinum(x,y)<<endl;
	cout<<"division of two number:"<<dividenum(x,y)<<endl;
	return 0;
}
