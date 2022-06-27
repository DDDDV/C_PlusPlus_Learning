#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
        int m_age;
        string m_name;
    public:
        Person(){};
        Person(int age);
};
Person::Person(int age){
    this->m_age = age;
}

void test(){
    Person p;
    p = 10;//这里使用了带参数的构造函数
}

int main(){
    test();
}