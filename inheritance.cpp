#include<iostream>
using namespace std;
class A{
    public :
    void displayA(){
        cout<<"class A"<<endl;
    }
};
    class B : public A{
    public :
    void displayB(){
        cout<<"class b"<<endl;
    }
    };
    class C : public B{
    public :
    void displayC(){
        cout<<"class c"<<endl;
    }
    };
    int main(){
    C objectc;
    objectc.displayA();
    objectc.displayC();        
    objectc.displayB();
}