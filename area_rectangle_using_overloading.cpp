#include <iostream>
using namespace std;
class Area
{
    private:
        int l,b,a;
    public:
        Area();
        Area(int x, int y);
        void display();
};
Area::Area()
{
    l=5, b=8;
}
Area::Area(int x, int y)
{
    l=x, b=y;
}
void Area::display()
{
    cout<<"Length = "<<l<<endl;
    cout<<"breadth = "<<b<<endl;
    a=l*b;
    cout<<"Area = "<<a<<endl;
}
int main()
{
    Area a1, a2(3, 6);
    a1.display();
    cout<<endl;
    a2.display();
    return 0;
}
