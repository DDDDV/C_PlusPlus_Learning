#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray{
    public:
        MyArray(int capacity){
            cout << "myarray有参构造" << endl;
            this->m_Capacity = capacity;
            this->m_size = 0;
            this->pAddress = new T[this->m_Capacity];
        }
        MyArray(const MyArray& arr){
            cout << "myarray拷贝构造" << endl;
            this->m_Capacity = arr.m_Capacity;
            this->m_size = arr.m_size;
            this->pAddress = new T[arr.m_Capacity];
            for(int i = 0; i < this->m_size; i++){
                this->pAddress[i] = arr.pAddress[i];
            }
        }
        MyArray& operator=(const MyArray& arr){
            cout << "myarray深拷贝" << endl;
            if(this->pAddress != NULL){
                delete[] this->pAddress;
                this->pAddress = NULL;
                this->m_Capacity = 0;
                this->m_size = 0;
            }
            this->m_Capacity = arr.m_Capacity;
            this->m_size = arr.m_size;
            this->pAddress = new T[arr.m_Capacity];
            for(int i=0; i < this->m_size; i++){
                this->pAddress[i] = arr.pAddress[i];
            }
            return *this;
        }
        void Push_Back(const T &var){
            if(this->m_Capacity == this->m_size){
                return;
            }
            this->pAddress[this->m_size] = var;
            this->m_size++;
        }
        void Pop_Back(){
            if(this->m_size == 0){
                return;
            }
            this->m_size--;
        }
        T& operator[](int index){
            return this->pAddress[index];
        }
        int getCapacity(){
            return this->m_Capacity;
        }
        int getSize(){
            return this->m_size;
        }
        
        ~MyArray(){
            cout << "myarray析构" << endl;
            if(this->pAddress == NULL){
                delete[] this->pAddress;
                this->pAddress = NULL;
            }
        }
    private:
        T * pAddress;
        int m_Capacity;
        int m_size;


};