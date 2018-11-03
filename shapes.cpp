#include <iostream>
#include <string>
using namespace std;
class shape
{
protected:
    string color;
public:
    shape()
    {

    }

    void setcolor(string c)
    {
        color=c;


    }

};
class shape2d:public shape
{

public:
    int len;
    shape2d(int len)
    {
        this->len=len;

    }

    virtual double area()=0;



};
class shape3d:public shape
{

public:
    int rad;
    shape3d(int rad)
    {

        this->rad=rad;
    }
    virtual double surfacearea()=0;
    virtual double volume()=0;



};
class circle:public shape2d
{
public:

    circle(int len ):shape2d(len)
    {

    }
    double area()
    {
        double m=len*len*3.14;
        cout<<"THE AREA OF " <<color<<"  CIRCLE = "<<m<<endl;
        return m ;
    }
};
class square:public shape2d
{
public:

    square(int len ):shape2d(len)
    {

    }
    double area()
    {
        double m=len*len;
        cout<<"THE AREA OF " <<color<<" SQUARE = "<<m<<endl;
        return m ;
    }
};
class sphere:public shape3d
{
public:
    sphere(int rad):shape3d(rad)
    {

    }
    double surfacearea()
    {
        double m=4*rad*rad*3.14;
        cout<<"THE SURFACE AREA OF " <<color<<"  SPHERE = "<<m<<endl;
        return m ;
    }
    double volume ()
    {
        double m=1.33*rad*rad*rad*3.14;
        cout<<"THE VOLUME OF " <<color<<"  SPHERE = "<<m<<endl;

        return m ;
    }

};
class cylinder:public shape3d
{
public:
    int high;
    cylinder(int rad,int high):shape3d(rad)
    {
        this ->high=high;
    }
    double surfacearea()
    {
        double m=2*3.14*rad*rad+2*3.14*rad*high;
        cout<<"THE SURFACE AREA OF " <<color<<"  CYLINDER = "<<m<<endl;
        return m;
    }
    double volume ()
    {
        double m=3.14*rad*rad*high;
        cout<<"THE VOLUME OF " <<color<<"  CYLINDER = "<<m<<endl;

        return m  ;
    }

};


int main()
{
    square s(5);
    s.setcolor("blue");
    s.area();


    circle c(2);
    c.setcolor("red");

    c.area();
    cylinder h(5,4);
    h.setcolor("green");
    h.surfacearea();
    h.volume();
    sphere m(3);
    m.setcolor("black");
    m.surfacearea();
    m.volume();



    return 0;
}
