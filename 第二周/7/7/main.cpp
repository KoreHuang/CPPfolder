//
//  main.cpp
//  7
//
//  Created by mac on 16/3/16.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
class my_string{
private:
    char *contents;
    int length;
public:
    my_string(char *str){
        length=0;
        while (str[length]!='\0') {
            length++;
        }
        contents=new char[length];
        contents[length--]='\0';
        for (int i=0; i<length; i++) {
            contents[i]=str[i];
        }
    }
    
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
