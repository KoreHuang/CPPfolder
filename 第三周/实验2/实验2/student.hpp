//
//  student.hpp
//  实验2
//
//  Created by mac on 16/3/25.
//  Copyright © 2016年 mac. All rights reserved.
//

#ifndef student_hpp
#define student_hpp

#include <stdio.h>
class Student{
private:
    int number;
    char *name;
    float score;
public:
    Student(int numberi,char *namei,float scorei);
    ~Student();
    void Modify(float nscore){
        score=nscore;
    }
    void print();
};
#endif /* student_hpp */
