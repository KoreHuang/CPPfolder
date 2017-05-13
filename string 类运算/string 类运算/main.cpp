//
//  main.cpp
//  string 类运算
//
//  Created by mac on 16/3/10.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    string s1="Tom";
    string s2=",welcome to our school!";
    string s3("Miki");
    string s4,s5;
    s4=s1;
    cout<<"s4 is:"<<s4<<endl;
    s5=s1+s2;
    cout<<s5<<endl;
    s5=s3+s2;
    cout<<s5<<endl;
    if(s3>s1){
        cout<<s3<<">"<<s1<<endl;
    }else{
        cout<<s3<<"<="<<s1<<endl;
    }
    if (s4==s1) {
        cout<<s4<<"=="<<s1<<endl;
    }else{
        cout<<s4<<"!="<<s1<<endl;
    }
    cout<<"Please input new string for s5:";
    getline(cin,s5);//getline(cin,str);
    cout<<"s5 now is:"<<s5<<endl;
    return 0;
}
