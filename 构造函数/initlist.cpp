#include<iostream>
#include <string>
using namespace std;

class Person{
    public:
        Person(){
            cout << "默认构造函数" << endl; 
        };
        Person(int age, string name);
    private:    
        int m_age;
        string m_name;
};

Person::Person(int age, string name){
    this->m_age = age;
    this->m_name = name;
}
void test(){
    Person p(15,"wangzhe");//调用有参构造时不会自动调用默认无参数构造函数
}
int main(){
    test();
}
