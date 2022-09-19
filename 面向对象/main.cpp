#include<iostream>
#include<string.h>

using namespace std;

/**
 * @brief 面向对象，使用多态来实现计算器
 * 
 */
class AbstractCalculator{
    public:
        int m_num1;
        int m_num2;
        virtual int getResult() = 0;//纯虚函数,子类必须重写
};

class AddCalculator : public AbstractCalculator{
    public:
        int getResult(){
            return m_num1 + m_num2;
        }
};

class A{
    public:
        void func(){};
};

class B : A{
    public:
        void func(){};
};

void test01(){
    AbstractCalculator* add = new AddCalculator;
    add->m_num1 = 100;
    add->m_num2 = 50;
    int result = add->getResult();
    cout << result << endl;
}



int main(){
    test01();
}