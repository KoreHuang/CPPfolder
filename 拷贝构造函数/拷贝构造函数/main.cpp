//
//  main.cpp
//  拷贝构造函数
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
    Point(int a,int b){
        x=a;
        y=b;
    }
    Point(const Point &p){
        x=2*p.x;
        y=2*p.y;
    }
    void Print(){
        cout<<x<<' '<<y<<endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Point p1(15,20);
    Point p2(p1);
    p1.Print();
    p2.Print();
    Point p3=p2;
    Point p4=p3;
    //p4=p3;
    p3.Print();
    p4.Print();
    std::cout << "Hello, World!\n";
    return 0;
}
