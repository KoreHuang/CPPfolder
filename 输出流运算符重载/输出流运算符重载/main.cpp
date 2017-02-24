//
//  main.cpp
//  输出流运算符重载
//
//  Created by mac on 16/5/18.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class Date{
    int da,mo,yr;
public:
    Date(int y,int m,int d){
        yr=y;
        mo=m;
        da=d;
    }
   friend ostream &operator <<(ostream &os,Date d){
        os<<d.yr<<' '<<d.mo<<' '<<d.da<<endl;
        return os;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    Date d(2016,5,18);
    cout<<d;
    return 0;
}
