#include <iostream>
using namespace std;
class Shape{
private:
       float dim1,dim2;
protected:
       float area;
public:
     Shape (float p,float q){
         dim1=p;
         dim2=q;
         }
     virtual void Calculate_area()=0;
     float Getdim1(){
       return dim1;
       }
     float Getdim2(){
       return dim2;
        }
     void printarea()
    {
         Calculate_area();
         cout<<area<<endl;
    }
};
class Rectangle : public Shape{
public:
      Rectangle(float r,float s=0):Shape(r,s){

    }
    void Calculate_area(){
        area=Getdim1()*Getdim2();
        cout<<"The Area Of Rectangle Is"<<endl;
   }
};
class Triangle:public Shape{
public:
      Triangle(float r, float s):Shape(r,s){

     }
        void Calculate_area(){
        area= Getdim1()*Getdim2()*0.5;
        cout<<"The Area Of Triangle Is"<<endl;
     }
};
class Square:public Rectangle{
   public:
   Square(float r):Rectangle(r){

    }
    void Calculate_area(){
       area=Getdim1()*Getdim1();
       cout<<"The Area of square Is "<<endl;
     }
};
int main()
{
  float x,y;
  cout<<"enter value of length and breadth of rectangle"<<endl;
  cin>>x>>y;
  Rectangle r1(x,y);
  r1. printarea();
  cout<<"enter value of length of each side of square:"<<endl;
  cin>>x;
  Square s1(x);
  s1.printarea();
  cout<<"enter value of base and height of triangle"<<endl;
  cin>>x>>y;
  Triangle t1(x,y);
  t1.printarea();

}
















