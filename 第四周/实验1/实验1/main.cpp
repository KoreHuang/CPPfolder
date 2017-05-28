//
//  main.cpp
//  实验1
//
//  Created by mac on 16/4/1.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string str ("Test string");
    cout << "size: " << str.size() << "\n";
    cout << "length: " << str.length() << "\n";
    cout << "capacity: " << str.capacity() << "\n";
    cout << "max_size: " << str.max_size() << "\n";
    return 0;
}

