#include<iostream>
using namespace std;
struct phone_number{
    int area;
    int exchange;
    int num;
};
int main(){

    phone_number number1;
    phone_number number2;
    number1.area=212;
    number1.exchange=867;
    number1.num=8600;
    cout<<"enter the area code"<<endl;
    cin>>number2.area;
    cout<<"enter the exchange code "<<endl;
    cin >>number2.exchange;
    cout<<"enter the number"<<endl;
    cin>>number2.num;
    cout <<"first phone number:";
    cout <<"("<<number1.area<<")"<<"-"<<number1.exchange<<"-"<<number1.num<<endl;
    cout<<"the second number is:";
    cout <<"("<<number2.area<<")"<<"-"<<number2.exchange<<"-"<<number2.num<<endl;
}