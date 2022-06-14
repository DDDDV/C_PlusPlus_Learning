#include<string>
#include<iostream>
using namespace std;

template<class NameType, class AgeType = int>
class Person{
    public: 
        Person(NameType name, AgeType age) : name(name), age(age){}
        void showPerson(){
            cout << name << endl;
            cout << age << endl;
        }
    private:
        NameType name;
        AgeType age;
};
//1.类模板对象作为函数参数，如何传入
void showPerson(Person<string, int>&p){
    p.showPerson();
}
void test01(){
    Person<string, int> p("wangzhe", 18);
    showPerson(p);
}

template<class T1, class T2>
void showPerson2(Person<T1, T2>&p){
    p.showPerson();
    cout << "type of T1 is " << typeid(T1).name() << endl; 
}
//2.参数模板化方法传入类模板对象
void test02(){
    Person<string, int> p("wangzhe", 18);
    showPerson2(p);
    
}
template<class T>
void showPerson3(T &t){
    t.showPerson();
}
void test03(){
    Person<string, int>p("xuliang", 20);
    showPerson3(p);
}
//3.将整个类模板化
int main(){
    test01();
    test02();
    test03();
}