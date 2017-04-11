//
//  main.cpp
//  实验3
//
//  Created by mac on 16/3/25.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class Rectangle{
private:
    int length;
    int width;
public:
    Rectangle(int l,int w){
        length=l;
        width=w;
    }
    ~Rectangle(){};
    float Area(){
        return (float)length*width;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    Rectangle rec(3, 5);
    cout<<"该矩形面积是:"<<rec.Area()<<endl;
    return 0;
}
