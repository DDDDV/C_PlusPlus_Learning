#include<iostream>
#include<string>

using namespace std;

template<typename T>//typename 可以替换为 class
T func(T num1, T num2){
    return num1 + num2;
}
//模板注意事项
//1.自动类型推导,必须推出一致的数据类型T
void test01(){
    int a = 10;
    int b = 20;
    int c = func(a, b);
    // double d = 10.2;
    // double e = func(a, d);//不一致的数据类型
    cout << c << endl;
}
//2.模板必须确定T的数据类型才可以使用
template<typename T>
void func2(){
    cout << "func2" << endl;
}
int main(){
    test01();
    // test02();//数据类型T没有确定，所以无法使用
}