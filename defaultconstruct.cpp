#include<iostream>
using namespace std;
class Default
{
    int a,b;
    public:
    Default()
    {
        a=5;
        b=0;
    }
    void display()
    {
        cout<<"sum of a and b:"<<a+b<<endl;
    }
};
int main()
{
    Default d;
    d.display();
    return  0;
}