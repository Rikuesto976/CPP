#include <iostream>
using namespace std;
class bank
{
    private:
        int p,t,r;
        float si;
    public:
        bank(int x, int y, int r=1.5)
        {
            p=x, t=y;
        }
        void calc_si();
        void display();
};
void bank::calc_si()
{
    si=(p*t*r)/100;
}
void bank::display()
{
    cout<<"Simple Interest = "<<calc_si<<endl;
}
int main()
{
    bank b1(10, 2);
    b1.calc_si();
    b1.display();
    return 0;
}
