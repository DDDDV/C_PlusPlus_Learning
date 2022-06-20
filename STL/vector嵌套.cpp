#include<iostream>
#include<string>
#include<vector>
using namespace std;


void test(){
    vector<vector<int>>v;
    vector<int>vv1;
    vector<int>vv2;
    vector<int>vv3;
    vector<int>vv4;
    for(int i = 0; i < 4 ; i++){
        vv1.push_back(i+1);
        vv2.push_back(i+2);
        vv3.push_back(i+3);
        vv4.push_back(i+4);
    }
    v.push_back(vv1);
    v.push_back(vv2);
    v.push_back(vv3);
    v.push_back(vv4);

    for(vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++){
        for( vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); ){
            cout << (*vit) << " " << endl;
        }
    }
}
int main(){
    test();
}