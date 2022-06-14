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
int main(){
    test01();
}