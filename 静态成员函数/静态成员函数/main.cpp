//
//  main.cpp
//  静态成员函数
//
//  Created by mac on 16/3/17.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class Small_cat{
private:
    double weight;
    static double total_weight;
    static double total_number;
public:
    Small_cat(double w);
    void display();
    static void dis_play(Small_cat &w);//静态函数成员访问非静态数据成员
    static void total_disp();
};
Small_cat::Small_cat(double w){
    weight=w;
    total_weight+=w;
    total_number++;
}
void Small_cat::display(){
    cout<<"这只小猫的重量是:"<<weight<<"千克\n";
}
void Small_cat::dis_play(Small_cat &w){     //定义静态函数成员，将形式参数设置为该类对象的引用
    cout<<"这只小猫的重量是:"<<w.weight<<"千克"<<endl;
}
void Small_cat::total_disp(){
    cout<<total_number<<"只小猫的重量是:";
    cout<<total_weight<<"千克\n";
}
double Small_cat::total_number=0;
double Small_cat::total_weight=0;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Small_cat w1(0.5),w2(0.6),w3(0.8);
    w1.display();
    w2.display();
    w3.display();
    Small_cat::total_disp();
    cout<<"静态成员函数访问的对象数据成员:\n";
    Small_cat::dis_play(w1);
    Small_cat::dis_play(w2);
    Small_cat::dis_play(w3);
    return 0;
}
