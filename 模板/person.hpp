#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
class Person{
    public:
        Person(T1 name, T2 age);
        void showPerson();
    private:
        T1 name;
        T2 age;
};
//构造函数类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) : name(name) , age(age){
}


//成员函数类外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson(){
    cout << name << endl;  
    cout << age << endl;
}