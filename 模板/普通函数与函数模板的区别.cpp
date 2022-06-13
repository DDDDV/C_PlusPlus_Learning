#include<iostream>
using namespace std;
//1.普通函数可以隐式类型转换
//2.函数模板 自动类型推导 不可以发生隐式类型转换
//3.函数模板 显式指定类型 可以发生隐式类型转换

//普通函数
int myAdd01(int a, int b){
    return a + b;
}
void test01(){
    int a = 10;
    char b = 'c';
    myAdd01(a, b);
}
//函数模板 自动推导类型
template<typename T>
T myAdd02(T a, T b){
    return a + b;
}
void test02(){
    int a = 10;
    char b = 'c';
    // myAdd02(a, b);//
}
//函数模板 显式指定类型
template<typename T>
T myAdd03(T a, T b){
    return a + b;
}
void test03(){
    int a = 10;
    char b = 'c';
    myAdd03<int>(a, b);
}
int main(){
    test01();
    test02();
    test03();
}