#include<iostream>
#include<vector>
#include<string>

using namespace std;

void test01(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    vector<int>::iterator itBegin = v.begin();
    vector<int>::iterator itEnd = v.end();

}

class Person{
    public:
        Person(string name, int age) : m_name(name), m_age(age){}
        string m_name;
        int m_age;
};
void test02(){
    Person p1("wangzhe", 19);
    Person p2("wang", 18);
    vector<Person> v;
    v.push_back(p1);
    v.push_back(p2);

    for(vector<Person>::iterator it = v.begin(); it != v.end(); it++){
        cout << "姓名" << (*it).m_name << "年龄" << (*it).m_age << endl;
    }

}
int main(){
    test02();
}