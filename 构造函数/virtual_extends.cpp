#include<iostream>

using namespace std;

class A{
public:
    A(){
        cout << "A构造函数" << endl;
    };
    ~A(){
        cout << "A析构函数" << endl;
    };
};

class C{
public:
    C(){
        cout << "C构造函数" << endl;
    };
    ~C(){
        cout << "C析构函数" << endl;
    };
};

class B : virtual A, C{
public:
    B(){
        cout << "B构造函数" << endl;
    }
    ~B(){
        cout << "B析构函数" << endl;
    }
};

int main(){
    //虚拟继承是C++编程语言里的一种语法，使得派生类如果继承基类多次，但只有一份基类的拷贝在派生类对象中。
    B b;
}