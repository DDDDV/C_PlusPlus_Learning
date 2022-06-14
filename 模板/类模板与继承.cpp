#include<iostream>
#include<string>

using namespace std;

template<class T>
class Base{
    T m;
};
//必须知道父亲的模板类型才能知道分配多少空间
class Son : public Base<string>{

};

//如果想灵活制定父类中T类型，子类也需要变类模板
template<class T1, class T2>
class Son2 : public Base<T2>{
    Son2(){
        cout << "T1 类型为" << typeid(T1).name() << endl;
        cout << "T2 类型为" << typeid(T2).name() << endl;
    }
    T1 m2;
};
void test02(){
    Son2<char, int>son();
}
int main(){
    test02();
}