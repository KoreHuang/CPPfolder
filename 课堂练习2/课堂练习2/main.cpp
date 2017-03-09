//
//  main.cpp
//  课堂练习2
//
//  Created by mac on 16/3/9.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
const double Pi=3.14159;
class Circle{
private:
    double R;
public:
    Circle(double a);
    inline double get_area();
};
Circle::Circle(double a):R(a){}
inline double Circle::get_area(){
    return R*R*Pi;
}
class Triangle{
private:
    double width,height;
public:
    Triangle(double w,double h);
    void setsize(double a,double b);
    double area(){
        return 0.5*width*height;
    }
};
Triangle::Triangle(double w,double h):width(w),height(h){}
void Triangle::setsize(double a, double b){
    width=a;
    height=b;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    Circle A(5);
    std::cout << "Hello, World!\n";
    cout<<"This circle area is:"<<A.get_area()<<endl;
    Triangle s(3.5,4);
    cout<<"This triangle area is:"<<s.area()<<endl;
    return 0;
}
