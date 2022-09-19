#include<iostream>
using namespace std;
/**
 * @brief 这是一个重载的例子，Cat继承了Animals，但是Animals中的eat方法没有定义为
 *         虚函数，所以，当funcEat方法被调用时，传递了Animals的eat方法而没有传递
 *         Cat的eat方法。
 * 
 */
class Animals{
    public:
        void eat(){
            cout << "normal animal is eating" << endl;
        };
        virtual void yell(){
            cout << "say animal" << endl;
        };
};

class Cat : public Animals{
    public:
        void eat(){
            cout << "cat is eat" << endl;
        };
        void yell(){
            cout << "say miao" << endl;
        };
};

void funcEat(Animals * ani){
    ani->eat();
};
void funcYell(Animals * ani){
    ani->yell();
}
void test01(){
    Animals ani;
    Cat cat;
    funcEat(&ani);
    funcEat(&cat);
}

void test02(){
    Animals ani;
    Cat cat;
    funcYell(&ani);
    funcYell(&cat);
}

int main(){
    test02();
}