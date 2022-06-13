#include<iostream>
#include<string>

using namespace std;

class Animal{
    public:
        Animal(){
            cout << "Animal构造函数" << endl;
        }
        virtual void speak() = 0;
        // virtual ~Animal(){
        //     cout << "Animal 析构函数" << endl;
        // }
        virtual ~Animal() = 0;
};
Animal :: ~Animal(){};
class Cat : public Animal{
    public:
        Cat(string words){
            cout << "cat 构造函数" << endl;
            m_name = new string(words);
        }
        void speak(){
            cout << "cat speak" << endl;
        }
        ~Cat(){
            cout << "Cat 析构函数" << endl;
            if(m_name != NULL){
                delete m_name;
                m_name = NULL;
            }
        }
    private:
        string *m_name ;
};

void test01(){
    Animal* animal = new Cat("wo");
    animal->speak();
    delete animal;

}
int main(){
    test01();
}