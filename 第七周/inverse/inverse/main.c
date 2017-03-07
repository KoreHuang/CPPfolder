//
//  main.c
//  inverse
//
//  Created by mac on 16/5/14.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <stdio.h>
#include<string.h>
int main(int argc, const char * argv[]) {
    void inverse(char str[]);
    // insert code here...
    //printf("Hello, World!\n");
    char str[100];
    scanf("%s",str);
    inverse(str);
    printf("inverse string is :%s\n",str);
    return 0;
}
void inverse(char str[]){
    char t;
    int i,j;
    for(i=0,j=strlen(str);i<(strlen(str)/2);i++,j--){
        t=str[i];
        str[i]=str[j-1];
        str[j-1]=t;
    }
}