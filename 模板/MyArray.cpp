#include<iostream>
#include<string>
using namespace std;
//#include "MyArray.hpp"
#include "MyArray.hpp"

void test01(){
    MyArray<int>arr1(5);
    MyArray<int> arr2(arr1);
    MyArray<int> arr3(100);
    arr3 = arr1;
}
void showArray(MyArray<int> &arr){
    for(int i = 0; i < arr.getSize(); i++){
        cout << arr[i] << endl;
    }
}
void test02(){
    MyArray<int>arr1(4);
    for(int i = 0; i < arr1.getCapacity(); i++){
        arr1.Push_Back(i);
    }
    cout << "数组初始化成功" << endl;
    cout << "输出数组数据" << endl;
    showArray(arr1);
    arr1.Pop_Back();
    showArray(arr1);

    
}
//测试自定义数据类型

class Person{
    public:
        Person(){};
        Person(string name, int age) : m_name(name), m_age(age){};
        string m_name;
        int m_age;
};
void showArrayPerson(MyArray<Person>& arr){
    for(int i = 0; i < arr.getSize(); i++){
        cout << "名字是" << arr[i].m_name << endl;
        cout << "年龄" << arr[i].m_age << endl;
    }
}
void test03(){
    Person p("wangzhe", 16);
    Person p2("zhangpengxia", 16);
    Person p3("xuliang", 14);
    MyArray<Person> arr(3);
    arr.Push_Back(p);
    arr.Push_Back(p2);
    arr.Push_Back(p3);
    showArrayPerson(arr);
    
}

int main(){
    // test01();
    // test02();
    test03();
}