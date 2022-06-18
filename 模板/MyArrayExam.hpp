#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray{
public:
    //普通构造方法
    MyArray(int capacity){
        this->m_Capacity =capacity;
        this->m_size = 0;
        this->pAddress = new T[m_Capacity];
    }
    MyArray(const MyArray& arr){
        this->m_Capacity = arr.m_Capacity;
        this->m_size = arr.m_size;
        this->pAddress = new T[arr.m_Capacity];
        for(int i = 0; i < this->m_size; i++){
            pAddress[i] = arr.pAddress[i];
        }
    }
    MyArray& operator=(const MyArray& arr){
        if(this->pAddress != NULL){
            delete[] this->pAddress;
            this->pAddress = NULL;
            this->m_Capacity = 0;
            this->m_size = 0;
        }
        this->m_Capacity = arr.m_Capacity;
        this->m_size = arr.m_size;
        this->pAddress = new T[arr.m_Capacity];
        for(int i = 0; i < arr.m_size; i++){
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }
    ~MyArray(){
        if(this->pAddress != NULL){
            delete[] this->pAddress;
            this->pAddress = NULL;
        }
    }
private:
    T * pAddress;
    int m_Capacity;
    int m_size;
};