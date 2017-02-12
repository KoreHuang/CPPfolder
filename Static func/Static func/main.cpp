//
//  main.cpp
//  Static func
//
//  Created by mac on 16/3/19.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class Circle{
private:
    float radius;
    static int count;
public:
    Circle(float x){radius=x;count++;}
    ~Circle(){count--;};
    static int num(){return count;}
};
int Circle:: count=0.0;
int main(int argc, const char * argv[]) {
    // insert code here...
    Circle r1(15),r2(12);
    int count;
    std::cout << "Hello, World!\n";
    count=Circle::num();
    cout<<count<<endl;
    return 0;
}
