#include <iostream>
using namespace std;
class Sum
{
    int a,b,sum=0;
    public:
        void input();
        friend void add(Sum o);
        void display();
};
void Sum::input()
{
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
}
void add(Sum o)
{
   o.sum = o.a + o.b;
}
void Sum::display()
{
    cout<<"Sum = "<<sum;
}
int main()
{
    Sum o1;
    o1.input();
    add(o1);
    o1.display();
    return 0;
}