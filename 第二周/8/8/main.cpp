//
//  main.cpp
//  8
//
//  Created by mac on 16/3/16.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class Rectangle{
private:
    int length,width;
public:
    Rectangle(int l,int w);
    double Area();
};
Rectangle::Rectangle(int l,int w):length(l),width(w){}
double Rectangle::Area(){
    return (double)length*width;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Rectangle rectangle1(4,5);
    cout<<"This rectangle's area is:"<<rectangle1.Area()<<endl;
    return 0;
}
