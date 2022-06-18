#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
class Person{
    //全局函数类内实现
    friend void showPerson(Person<T1, T2>&p){
        cout << p.m_name << p.m_age << endl;
    }
    //全局函数类外实现
    friend void showPerson2<>(Person<T1, T2>&p);//必须加上<>才能
public:
    Person(T1 name ,T2 age) : m_name(name), m_age(age){}

private:
    T1 m_name;
    T2 m_age;
};
template<class T1, class T2>
void showPerson2(Person<T1, T2>&p){
    cout << p.m_name << p.m_age << endl;
}
void test1(){
    Person<string, int> p("wangzhe", 19);

}
int main(){
    test1();
}
