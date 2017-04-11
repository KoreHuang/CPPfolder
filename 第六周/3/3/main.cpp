
#include <iostream>
using namespace std;
/*********************Base-empolyee******************/
class empolyee{
protected:
    char *name;        //Name
    int individualEmpNo;      //Personal empolyee No.
    int grade;                //Grades
    float accumPay;           //Accumulata account to this object
    static int empolyeeNo;    //The number of this company
public:
    //empolyee(char *s,int i,int g,int ac);//Constructor of class empolyee to initial the data memeber
    empolyee();
    ~empolyee(){
        if(!name)
            delete [] name;
        empolyeeNo--;
    }
    void pay();                      //Pay for this one
    void display();                  //show the informations of this guy
    void promote(int increment);
    void dispalayStatus();
};
/*empolyee::empolyee(char *s,int i,int g,int ac){
    name=new char[strlen(s)+1];
    strcat(name, s);
    individualEmpNo=i;
    grade=g;
    accumPay=ac;
    empolyeeNo++;
}*/
empolyee::empolyee()
{
    char namestr[50];
    //输人雇员姓名时首先临时存放在namestr中
    cout<<"请输入下一个雇员的姓名:";
    cin>>namestr;
    name=new char[strlen(namestr)+1];
				//动态申请用于存放姓名的内存空间
    strcpy(name, namestr);
    //将临时存放的姓名复制到 name
    individualEmpNo= empolyeeNo++;
    //新输人的员工，其编号为目前最大编号加1
    grade=1;  //级别初值为1
    accumPay=0.0;  //月薪总额初值为0
}


void empolyee ::promote(int increment)
{
    grade += increment ;
				//升级，提升的级数由 increment指定
}

/*****************empolyee-Derived-technician******************/
class technician:public empolyee{
private:
    float hourlyRate;
    int workHours;
public:
    technician();
    ~technician(){}
    void pay();
    void displayStatus();
};
technician :: technician()
{  hourlyRate=100;  //每小时酬金100元
}
void technician::pay()
{   cout<<"请输入"<<name<<"本月的工作时数:";
    cin>>workHours;
    accumPay=hourlyRate* workHours;
    //计算月薪，按小时计酬
    cout<<"兼职技术人员"<<name<<"编号"<<individualEmpNo
    <<"本月工资"<<accumPay<<endl;
}
void technician::displayStatus()
{   cout<<"兼职技术人员"<<name<<"编号" << individualEmpNo << "级别为" <<grade<<
    "级，已付本月工资"<<accumPay<<endl;
}
/*******************empolyee-Derived-Base-manager******************/
class manager:virtual public empolyee{
protected:
    float monthlyPay;
public:
    manager();
    ~manager(){}
    void pay();
    void displayStatus();
};

manager::manager()
{
    monthlyPay=8000;  //固定月薪8000元
}
void manager :: pay()
{
    accumPay=monthlyPay;  //月薪总额即固定月薪数
    cout<<"经理"<<name<<"编号"<<individualEmpNo
    <<"本月工资"<<accumPay<<endl;
}
void manager :: displayStatus()
{
    cout<<"经理"<<name<<"编号"<<individualEmpNo
    <<"级别为"<<grade<<"级，已付本月工资"<<accumPay<<endl;
}

/*****************empolyee-Derived-Base-saleaman*******************/
class salesman:virtual public empolyee{
protected:
    float CommRate;
    float sales;
public:
    salesman();
    ~salesman(){}
    void pay();
    void displayStatus();
};
salesman::salesman()
{
    CommRate=0.04;  //销售提成比例4％
}
void salesman::pay()
{
    cout<<"请输入"<<name<<"本月的销售额:";
    cin>>sales;
    accumPay=sales*CommRate;  //月薪＝销售提成
    cout<<"推销员"<<name<<"编号"<<individualEmpNo
    <<"本月工资"<<accumPay<<endl;
}
void salesman::displayStatus()
{    cout<<"推销员"<<name<<"编号"<<individualEmpNo
    <<"级别为"<<grade<<"级，已付本月工资"<<accumPay<<endl;
}

/**************manager&&saleman-Derived-salesmanager**************/
class salesmanager:public manager,public salesman{
public:
    salesmanager();
    ~salesmanager(){}
    void pay();
    void displayStatus();
};
salesmanager ::salesmanager()
{  monthlyPay=5000;
    CommRate= 0.005;
}
void salesmanager ::pay()
{
    cout<<"请输入"<<empolyee ::name<<"所管辖部门本月的销售总额:";
    cin>>sales;
    accumPay=monthlyPay+CommRate*sales;  //月薪＝固定月薪十销售提成
    cout<<"销售经理"<<name<<"编号"<<individualEmpNo
    <<"本月工资"<<accumPay<<endl;
}
void salesmanager::displayStatus()
{   cout<<"销售经理"<< name<<"编号"<<individualEmpNo
    <<"级别为"<<grade<<"级，已付本月工资"<<accumPay<<endl;
}

int empolyee::empolyeeNo=0;
int main(int argc, const char * argv[]) {
    // insert code here...
    manager m1;
    technician t1;
    salesmanager sm1;
    salesman s1;
    m1.promote(3);  		//经理m1提升3级
    m1.pay();  			//计算m1月薪
    m1.displayStatus();  	//显示m1信息
    t1.promote(2);  		//t1提升2级
    t1.pay();  			//计算t1月薪
    t1.displayStatus(); 	 //显示tl信息
    sm1.promote(2);  		//sml提升2级
    sm1.pay();  		//计算sml月薪
    sm1.displayStatus(); 	 //显示sml信息
    s1.pay();  			//计算s1月薪
    s1.displayStatus();  	//显示s1信息
    
    return 0;
}
