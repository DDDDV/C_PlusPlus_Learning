//类模板不能自动类型推导
//类模板参数列表可以有默认参数类型
#include<iostream>
#include<string>

using namespace std;

template<class NameType, class AgeType>
class Person{
    private:
        NameType name;
        AgeType age;
    public:
        Person();
        Person(NameType name, AgeType age) : name(name),age(age){}
        void showName(){
            cout << name << endl;
        }
        void showAge(){
            cout << age << endl;
        }
};

void test01(){
    Person<string, int> p("wangzhe", 19);
    p.showAge();
    p.showName();
}

template<class NameType, class AgeType = int> //指定默认参数类型
class Person1{
    private:
        NameType name;
        AgeType age;
    public:
        Person1();
        Person1(NameType name, AgeType age) : name(name),age(age){}
        void showName(){
            cout << name << endl;
        }
        void showAge(){
            cout << age << endl;
        }
};
void test02(){
    Person1<string> p("wangzhe", 19);
    p.showAge();
    p.showName();
}
int main(){
    test01();
    test02();
}