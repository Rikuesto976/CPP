#include <iostream>
using namespace std;
class Time
{
    private:
        int hr, min, sec;
    public:
        void input()
        {
            cout<<"Enter time in hour, minutes and seconds: "<<endl;
            cin>>hr>>min>>sec; 
        }
        void display()
        {
             cout<<"Total Time: "<<hr<<"hr, "<<min<<"min, "<<sec<<"sec"<<endl;
        }
        void add(Time t1,Time t2)
        {
            sec = t1.sec + t2.sec;
            min = sec/60;
            sec = sec%60;
            min = min + t1.min + t2.min;
            hr = min/60;
            min = min%60;
            hr = hr + t1.hr + t2.hr;
        }
};
int main()
{
    Time o1, o2, o3;
    o1.input();
    o2.input();
    o3.add(o1, o2);
    o3.display();
    return 0;
}