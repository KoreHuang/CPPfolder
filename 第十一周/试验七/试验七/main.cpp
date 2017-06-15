//
//  main.cpp
//  试验七
//
//  Created by mac on 16/5/20.
//  Copyright © 2016年 mac. All rights reserved.
//

#include<iostream>
#include<math.h>
using namespace std;
class Square {
protected:
    int edge;
public:
    virtual  double GetArea();
    Square(int edg);
    ~Square( ) { }
};
Square::Square(int edg){
    edge=edg;
}
double Square::GetArea(){
    double result;
    result=edge*edge;
    return result;
}
class Rectangle:public Square{
protected:
    int  length;
public:
    double GetArea();
    Rectangle(int edg,int leng);
    ~Rectangle(){  }
};
double Rectangle::GetArea(){
    double result;
    result=length*edge;
    return result;
}
Rectangle::Rectangle(int edg,int leng):Square(edg){
    length=leng;
}
double objGetArea(Square* obj){
    return obj->GetArea();
}
int main()
{
    Square  Sq(100);
    Rectangle Rect(200,300);
    cout<<"正方形Squa1(100)的面积为："<<Sq.GetArea()<<endl;
    cout<<"正方形Squa1(100)的面积为："<<objGetArea(&Sq)<<endl;
    cout<<"矩形Rect(200,300) 的面积为：:"<<Rect.GetArea()<<endl;
    cout<<"矩形Rect(200,300) 的面积为：:"<<objGetArea(&Rect)<<endl;
    Square *s=new Rectangle(300, 400);
    cout<<"不使用全局函数的方式:"<<s->GetArea()<<endl;
    return 0;
} 
