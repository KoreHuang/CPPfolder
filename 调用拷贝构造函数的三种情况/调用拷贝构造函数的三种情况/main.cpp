//
//  main.cpp
//  调用拷贝构造函数的三种情况
//
//  Created by mac on 16/3/13.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class Point{
private:
    int x,y;
public:
    Point(int a,int b);
    Point(const Point &p);
    void Print();
};
Point::Point(int a,int b){
    x=a;
    y=b;
    cout<<"Using normal constructor\n";
}
Point::Point(const Point &p){
    x=2*p.x;
    y=2*p.y;
    cout<<"Using copy constructor\n";
}
void Point::Print(){
    cout<<x<<" "<<y<<endl;
}
void func1(Point p){
    p.Print();
}
Point func2(){
    Point p4(10,30);
    return p4;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Point p1(30,40);
    p1.Print();
    Point p2(p1);
    p2.Print();
    Point p3(12,23);
    p3=p1;
    p3.Print();
    func1(p1);
    p2=func2();
    p2.Print();
    Point p4=func2();
    p4.Print();
    return 0;
}
