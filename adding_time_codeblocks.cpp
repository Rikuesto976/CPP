#include <iostream>
using namespace std;
class time
{
    private:
        int hr, min, sec;
    public:
        void input();
        void display();
        time add(time t1, time t2);
};
void time::input()
{
   cout<<"Enter time in hour, minutes and seconds: "<<endl;
   cin>>hr>>min>>sec;
}
void time::display()
{
    cout<<"Total Time: "<<hr<<"hr, "<<min<<"min, "<<sec<<"sec"<<endl;
}
time time::add(time t1,time t2)
{
  time t;
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
    time o1, o2, o3;
    o1.input();
    o2.input();
    o3 = o2.add(o1, o2);
    o3.display();
    return 0;
}
