//
//  main.cpp
//  类的派生建筑类应用实例
//
//  Created by mac on 16/5/25.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class Building{
protected:
    int floors;
    int rooms;
    double j_areas;
public:
    Building(int f=0,int r=0,double a=0){
        floors=f;
        rooms=r;
        j_areas=a;
    }
    ~Building(){}
    void showInfo(){
        cout<<"房楼层数:"<<floors<<endl;
        cout<<"房间数:"<<rooms<<endl;
        cout<<"房楼总面积:"<<j_areas<<endl;
        cout<<"其中:";
    }
};
class Homes_Arch:public Building{
private:
    int bedRooms;
    int parlor;
    int toilets;
    int kitchens;
public:
    Homes_Arch(int f=0,int r=0,int a=0,int b=1,int p=1,int to=0,int k=1 ):Building(f,r,a){
        bedRooms=b;
        parlor=p;
        toilets=to;
        kitchens=k;
    }
    ~Homes_Arch(){}
    void Show(){
        //cout<<endl;
        cout<<"住宅楼:"<<endl;
        Building::showInfo();
        cout<<endl<<"\t卧室数:"<<bedRooms<<"间"<<endl;
        cout<<"\t客厅数:"<<parlor<<"间"<<endl;
        cout<<"\t卫生间数:"<<toilets<<"间"<<endl;
        cout<<"\t厨房数:"<<kitchens<<"间"<<endl;
    }
};
class office_Building:public Building{
protected:
    int offices;
    int assembly_room;
public:
    office_Building(int f=0,int r=0,int a=0,int o=0,int a_r=0):Building(f,r,a){
        offices=o;
        assembly_room=a_r;
    }
    ~office_Building(){}
    void Show(){
        //cout<<endl;
        cout<<"办公楼:"<<endl;
        Building::showInfo();
        cout<<endl<<"\t办公室数:"<<offices<<"间"<<endl;
        cout<<"\t会议室数:"<<assembly_room<<"间"<<endl;
    }
};
class Hospital:public Building{
protected:
    int sickRooms;
    int operating_Rooms;
public:
    Hospital(int f=0,int r=0,int a=0,int s=0,int o=0):Building(f,r,a){
        sickRooms=s;
        operating_Rooms=o;
    }
    ~Hospital(){
    }
    void Show(){
        //cout<<endl;
        cout<<"医院:"<<endl;
        Building::showInfo();
        cout<<endl<<"\t病房数:"<<sickRooms<<"间"<<endl;
        cout<<"\t手术室数:"<<operating_Rooms<<"间"<<endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Homes_Arch home(7,100,12000,3,1,1,1);
    office_Building off(4,70,11000,4,1);
    Hospital hosp(6,23,12987,3,1);
    home.Show();
    off.Show();
    hosp.Show();
    return 0;
}
