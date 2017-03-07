//
//  main.cpp
//  作业3
//
//  Created by mac on 16/4/20.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
class String{
private:
    char *m_data;
    int length;
public:
    String(const char *str=NULL);
    String(const String &otherr);
    ~String(){
        if(!m_data)
            delete []m_data;
    }
    String &operator=(char *str);
    String &operator=(const String &other);
    int operator==(String &other);
    int operator==(char *str);
};
String::String(const char *str){
    if(str){
    m_data=new char[strlen(str)+1];
    strcpy(m_data, str);
    length=(int)strlen(str);
    }else{
        m_data=NULL;
        length=0;
    }
}
String::String(const String &other){
    m_data=new char[strlen(other.m_data)+1];
    strcpy(m_data, other.m_data);
    length=other.length;
}
String & String::operator=(char *str){
    if(!str){
        if(!m_data)delete []m_data;
        m_data=new  char[strlen(str)+1];
        strcpy(m_data, str);
        length=(int)strlen(str);
    }else{
        if(!m_data) delete []m_data;
        m_data=NULL;
    }
    return *this;
}
String & String::operator=(const String &other){
    
    if(&other==this) return *this;
    else{
        if(!m_data)delete []m_data;
        m_data=new char[strlen(other.m_data)+1];
        strcpy(m_data, other.m_data);
        length=other.length;
    }
    return *this;
}
int String::operator==(String &other){
    if(&other==this) return 1;
    if(m_data==NULL&&other.m_data==NULL) return 1;
    else{
        if (!m_data) return 0;
        else  return strcmp(m_data, other.m_data)?0:1;
    }
    
}
int String::operator==(char *str){
    if(m_data==NULL&&str==NULL) return 1;
    else{
        if (!m_data) return 0;
        else  return strcmp(m_data, str)?0:1;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    String obj1("Hello,I'm Steve!"),obj2;
    obj2=obj1;
    if(obj1==obj2){
        printf("This two strings are equal!\n");
    }else{
        cout<<"Not equal"<<endl;
    }
    return 0;
}
