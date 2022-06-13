#include<iostream>
#include<string>

using namespace std;

class CPU{
    public:
        virtual void calc() = 0;
        virtual ~CPU(){};
};
class VideoCard{
    public:
        virtual void show() = 0;
};
class Mem{
    public:
        virtual void store() = 0;
};

class Intel : public CPU{
    public:
        void calc(){
            cout << "Intel cpu is calcultrating" << endl;
        }
        ~Intel(){
            cout << "析构了Intel" << endl;
        }
};
class Nvidia : public VideoCard{
    public:
        void show(){
            cout << "Nvidia is showing" << endl;
        }
};
class SamsungMem : public Mem{
    public:
        void store(){
            cout << "Samsung Mem is working" << endl;
        }
};

class Computer{
    public:
        Computer(CPU *cpu, VideoCard* videocard, Mem *mem){
            this->cpu = cpu;
            this->videocard = videocard;
            this->mem = mem;
        };
        void work(){
            cpu->calc();
            videocard->show();
            mem->store();
        }
        ~Computer(){
            if(cpu != NULL){
                delete cpu;
                cpu = NULL;
            }
            if(videocard != NULL){
                delete videocard;
                videocard = NULL;
            }
            if(mem != NULL){
                delete mem;
                mem = NULL;
            }
        }
    private:
        CPU *cpu;
        VideoCard *videocard;
        Mem *mem;

};
void start(){
    CPU *cpu = new Intel;
    VideoCard *videocard = new Nvidia;
    Mem *mem = new SamsungMem;
    Computer* computer = new Computer(cpu, videocard, mem);
    computer->work();
    delete computer;
}
int main(){
    start();
}
