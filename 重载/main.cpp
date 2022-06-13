#include<iostream>
#include<string>

using namespace std;

class Person{
    private:
        int m_age;
        char *m_name;
    public:
        Person(){};
        Person(int age, char * name);
        friend ostream& operator<<(ostream&out, Person p);
        //年龄相加,重写+操作符
        Person operator+(const Person & p)const;
};
ostream& operator<<(ostream &out, Person p){
    out << "Person's name" << p.m_name << endl;
    out << "Person's age" << p.m_age << endl;
    return out;
}
Person::Person(int age, char *name) : m_age(age), m_name(name){
}

Person Person::operator+(const Person & p)const{
    Person temp;
    temp.m_name = "wang";
    temp.m_age = this->m_age + p.m_age;
    return temp;
}

void test01(){
    char name[] = "wangzhe";
    char name2[] = "xuliang";
    // char const * name = "wangzhe";
    Person p(18, name);
    Person p2(20, name2);
    cout << p << endl;
    cout << p2 << endl;
    Person p3;
    p3 = p + p2;
    cout << p3 << endl;
}

int main(){
    test01();
}