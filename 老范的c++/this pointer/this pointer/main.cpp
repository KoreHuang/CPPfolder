//
//  main.cpp
//  this pointer
//
//  Created by mac on 16/3/10.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class Grates{
private:
    int math;
    int Chinese;
    int english;
public:
    Grates(int m,int c,int e);
    Grates(){
        math=60;
        Chinese=60;
        english=60;
    }
    void copy(Grates t){
        *this=t;
    }
    void show_grates();
    void show_this();
};
Grates::Grates(int m,int c,int e):math(m),Chinese(c),english(e){}
void Grates::show_grates(){
    cout<<this<<" "<<math<<endl;
    cout<<this<<" "<<Chinese<<endl;
    cout<<this<<" "<<english<<endl;
}
void Grates::show_this(){
    cout<<"This pointer is:"<<this<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Grates Tom(23,75,89),Tom2;
    Tom2.copy(Tom);
    Tom2.show_grates();
    Tom2.show_this();
    Tom.show_grates();
    Tom.show_this();
    Grates Mike(60,72,82);
    Mike.show_grates();
    Mike.show_this();
    return 0;
}
