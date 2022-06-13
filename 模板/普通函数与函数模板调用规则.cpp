#include<iostream>
using namespace std;

//1.函数模板和普通函数都可以调用，优先调用普通函数
//2.可以通过空模板参数列表 强制调用 函数模板
//3.函数模板可以发生函数重载
//4.如果模板可以产生更好的匹配，优先调用函数模板

void myPrint(int a, int b){
    cout << "普通函数" << endl;
}
template<typename T>
void myPrint(T a, T b){
    cout << "函数模板" << endl;
}
template<typename T>
void myPrint(T a, T b, T c){
    cout << "函数模板重载" << endl;
}
void test01(){
    int a = 10;
    int b =20;
    myPrint(a, b);//调用普通函数
    myPrint<>(a, b);//调用函数模板
    char c = 'a';
    char d = 'b';
    myPrint(c, d);//函数模板最佳匹配
}
int main(){
    test01();
}
