/*#include &lt;iostream&gt;
using namespace std;
class A
{
    int i;
    public:
       A()
       {
          i=0;
          cout&lt;&lt;i;
       }
       A(int x=0)
       {
         i=x;
         cout<<&lt;&lt;i;
       }
};
int main()
{
    A obj1;
    return 0;
}*/
#include &lt;iostream&gt;
using namespace std;

class Circle {

    // private data member
private:
    double radius;

    // public member function
public:
    void compute_area(double r)
    {
        // member function can access private
        // data member radius
        radius = r;

        double area = 3.14 * radius * radius;

        cout &lt;&lt; &quot;Radius is: &quot; &lt;&lt; radius &lt;&lt; endl;
        cout &lt;&lt; &quot;Area is: &quot; &lt;&lt; area;
    }
};

// main function
int main()
{
    // creating object of the class
    Circle obj;

    // trying to access private data member
    // directly outside the class
    obj.compute_area(1.5);

    return 0;
}