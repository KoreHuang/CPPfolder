//
//  main.cpp
//  5
//
//  Created by mac on 16/4/29.
//  Copyright © 2016年 mac. All rights reserved.
//

//将下列代码中的安全数组改编成安全数组模板类，并在main函数中进行实例化。然后编译、运行程序。最后提交源代码。

#include <iostream>
#include <cstdlib>
using namespace std;
const int SIZE = 3;
template<typename type>
class atype {
    type a[SIZE];
public:
    atype( ) {
        int i;
        for(i=0; i<SIZE; i++) a[i] =(type)i ;
    }
    type &operator[](int i);
};
template<typename type>
type &atype<type>::operator[](int i)
{
    if(i<0 || i> SIZE-1) {
        cout << "\nIndex value of ";
        cout << i << " is out-of-bounds.\n";
        exit(1);
    }
    return a[i];
}
int main( )
{
    atype<int> ob;
    cout << ob[2];  // 输出 2
    cout << " ";
    ob[2] = 25;  // 下标运算符[]出现在赋值运算符的左边
    cout << ob[2];  // 输出 25
    ob[3] = 44; // 产生运行时错误，下标3超出了数组边界
    return 0;
}