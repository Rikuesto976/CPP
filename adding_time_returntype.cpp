#include <iostream>
using namespace std;
class Time
{
    private:
        int hr, min, sec;
    public:
        void input();
        void display();
        Time add(Time t1, Time t2);
};
void Time::input()
{
   cout<<"Enter Time in hour, minutes and seconds: "<<endl;
   cin>>hr>>min>>sec; 
}
void Time::display()
{
    cout<<"Total Time: "<<hr<<"hr, "<<min<<"min, "<<sec<<"sec"<<endl;
}
Time Time::add(Time t1,Time t2)
{
  Time t;
  t.sec = t1.sec + sec;
  t.min = t.sec/60;
  t.sec = t.sec % 60;
  t.min = t.min = t1.min + min;  
  t.hr = t.min / 60;
  t.min = t.min % 60;
  t.hr = t.hr + t1.hr + hr;
  return t;
}
int main()
{
    Time o1, o2, o3;
    o1.input();
    o2.input();
    o3 = o2.add(o1, o2);
    o3.display();
    return 0;
}