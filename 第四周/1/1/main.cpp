//
//  main.cpp
//  1
//
//  Created by mac on 16/3/29.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    string str="Xi’an Institute of Posts and Telecommunications is co-designed and implemented by the People’s Government of Shaanxi Province and the Ministry of Industry and Information Technology.\nThe Institute is located in Xi’an, a historic city in Northwest China, famous for its magnificent ancient culture";
    string str1="Institute";
    string rstr="University";
    string::size_type pfd=str.find(str1);
    while (pfd!=string::npos) {
        str.replace(pfd, rstr.length()-1, rstr);
        pfd=str.find(str1);
    }
    cout<<str<<endl;
    return 0;
}
