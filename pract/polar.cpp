#include<iostream>
#include<cmath>
using namespace std;

class Rectangular {

    float x,y;
  public:

    Rectangular();
    Rectangular(float,float);
    void display();
    ~Rectangular(){}
};

Rectangular::Rectangular(){
  x=0;
  y=0;
}
Rectangular::Rectangular(float x,float y){
  this->x=x;
  this->y=y;
}
void Rectangular::display(){
  cout<<"("<<x<<","<<y<<")"<<endl;
}

class Polar {

    float r,ang;
  public:

    Polar();
    Polar(float,float);
    ~Polar (){}
    void display();
    operator Rectangular(){
      float a=r*cos(ang);
      float b=r*sin(ang);
      return Rectangular(a,b);
    }

};
Polar::Polar(){
  r=0;
  ang=0;
}

Polar::Polar(float r,float ang){
  this->r=r;
  this->ang=ang;
}
void Polar::display(){
  cout<<"("<<r<<","<<ang<<")"<<endl;
}

int main(){
  Polar p1(12.1,12.1);
  Rectangular r1;
  r1=p1;
  cout<<"In polar form:"<<endl;
  p1.display();
  cout<<"In Rectangular form:"<<endl;
  r1.display();
  return 0;
}