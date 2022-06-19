#include<iostream>
#include<string>
#include "MyArrayExam.hpp"

// class Person;


class Person{
    friend void ShowPerson3(MyArray<Person> & arr);
private:
    string m_name;
    int m_age;
public:
    Person(){};
    Person(string name, int age) : m_name(name), m_age(age){};
    
};

void ShowPerson3(MyArray<Person> & arr){
    for(int i = 0; i < arr.getSize() ; i++){
        cout << arr[i].m_name << arr[i].m_age << endl;
    }
}


void test(){
    Person p1("wangzhe", 18);
    Person p2("xuliang", 19);
    MyArray<Person> arr(100);
    arr.Push_Back(p1);
    arr.Push_Back(p2);
    cout << "arr size is " << arr.getSize() << endl;
    cout << "arr capacity is " << arr.getCapacity() << endl;
    ShowPerson3(arr);

    cout << "========================" << endl;
    MyArray<Person> arr2(arr);
    ShowPerson3(arr2);

    cout << "========================" << endl;
    MyArray<Person> arr3(5);
    arr3 = arr2;
    ShowPerson3(arr3);


}
int main(){
    test();
}