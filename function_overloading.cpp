#include <iostream>
using namespace std;
int volume(int l)
    {
        return(l*l*l);
    }
int volume(int l, float r)
    {
        float pi=3.14;
        return(pi*r*r*l);
    }
int volume(int l, int b, int h)
    {
        return (l*b*h);
    }
int main()
{
    int lcube, lcyl, rcyl, lrec, b,h;
    cout<<"Enter length of cube: "<<endl;
    cin>>lcube;
    cout<<"Enter length and radius of cylinder: "<<endl;
    cin>>lcyl>>rcyl;
    cout<<"Enter length, breadth, height of Rectangular Box: "<<endl;
    cin>>lrec>>b>>h;
    cout<<"Volume of cube: "<<volume(lcube)<<endl;
    cout<<"Volume of cylinder: "<<volume(lcyl, rcyl)<<endl;
    cout<<"Volume of rectangular box: "<<volume(lrec, b,h)<<endl;
    return 0;

}
