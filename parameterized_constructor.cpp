#include <iostream>
using namespace std;
class construct
{
    private:
        int x,y;
    public:
        construct(int a, int b)
        {
            x=a, y=b;
        }
        void display()
        {
            cout<<"X = "<<x<<"\t"<<" and Y ="<<y<<endl;
        }
};
int main()
{
    construct obj(10,20);
    obj.display();
    return 0;
}
