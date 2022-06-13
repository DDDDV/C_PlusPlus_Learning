#include<string>
#include<iostream>
#include<fstream>


using namespace std;

void writeFile(){
    ofstream of;
    of.open("test.txt", ios::out);

    of << "english " << endl;
    of << "性别 : 男" << endl;
    of << "爱好:女" << endl;

    of.close();
}

void readFile(){
    ifstream ifs;
    ifs.open("test.txt", ios::in);
    if(!ifs.is_open()){
        cout << "打开文件失败" << endl;
        return ;
    }
    
    char buf[2014] = {0};
    while(ifs >> buf){//遇到空格当回车处理了？？？
        cout << buf << endl;
    }
    ifs.close();
}

class Person{
    public:
        char m_name[64];
        int m_age;
};

void writeFileBinary(){
    ofstream ofs;
    ofs.open("Person.txt", ios::out | ios::binary);
    if(!ofs.is_open()){
        cout << "打开文件失败" << endl;
        return ;
    }
    Person p = {"张三" , 18};
    ofs.write((const char *)&p, sizeof(Person));
    ofs.close();
}
void readFileBinary(){
    ifstream ifs;
    ifs.open("Person.txt", ios::in | ios::binary);
    if(!ifs.is_open()){
        cout << "文件打开失败" << endl;
        return ;
    }
    Person p;
    ifs.read((char *)&p, sizeof(Person));
    cout << p.m_name << p.m_age << endl;
    ifs.close();
}

int main(){
    // writeFile();
    // readFile();
    // writeFileBinary();
    readFileBinary();
}