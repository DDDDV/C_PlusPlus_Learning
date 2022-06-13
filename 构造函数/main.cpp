#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
        Person()//默认构造函数
        {
            cout << "默认构造函数" << endl;
        }
        Person(string name){
            this->name = name;
            cout << "有参构造函数" << endl;
        }
        Person(const Person& p){
            name = p.name;
            cout << "拷贝构造函数" << endl;
        }
        ~Person(){
            cout << "析构函数" << endl;
        }
        Person copy(Person p){
            return p;
        }
        
};
class Teacher{
    //创建一个类，系统会自动添加至少三个函数。1.默认构造函数2.析构函数3.拷贝构造函数
    Teacher(){
        cout << "Person default init" << endl;
    }
    Teacher(int age){
        cout << "Teacher init wiht param" << endl;
    }
    Teacher(const Teacher& t){

    }
};
int main(){
    // Person p;
    string name = string("nishengri");
    Person p2(name);
    Person p3;
    p3.copy(p2);//这里调用了两次拷贝构造函数。首先p2作为参数，是以拷贝的形式传入。返回值也是以拷贝的形式返回的。
}