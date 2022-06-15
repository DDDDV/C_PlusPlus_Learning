#include<iostream>
#include<string>
//#include "person.cpp" //1.因为模板是在真正调用的时候才进行链接，所以直接引入头文件会报错
#include "person.hpp"
using namespace std;

void test01(){
    Person<string, int> p("wangzhe", 18);
    p.showPerson(); 
}
int main(){
    test01();
}
