/**
 * @file array.cpp
 * @author your name (you@domain.com)
 * @brief 生成50w个数字并且放在array容器中
 * @version 0.1
 * @date 2022-07-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<array>
#include<time.h>

#define ASIZE 500000

typedef std::array<int, ASIZE> myContainer;
using namespace std;

myContainer generateArray(){
    clock_t timeStart = clock();//程序运行开始到执行此条语句的时间
    array<int, ASIZE> arr;
    srand((unsigned)time(NULL));
    for(int i = 0; i < ASIZE; i++){
        arr[i] = rand();
    }
    cout << "generate time is " << (clock() - timeStart) << endl;
    cout << "array size is " << arr.size() << endl;
    cout << "array front is " << arr.front() << endl;
    cout << "array back is " << arr.back() << endl;
    cout << "array data is " << arr.data() << endl;
 
    return arr;
}

int compareLongs(const void* a, const void* b){
    return (*(long*)a - *(long*)b);
}


void binarySearchValue(myContainer arr, long value, void* compareFun){

}

int main(){
    myContainer arr = generateArray();
    cout << "主函数拿到的arr: " <<arr.front() << endl;
    return 0;
}