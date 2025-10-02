#include<iostream>
using namespace std;

class test
{
    private:
    int a;
    public:

    void input()
    {
        cout<<"Enter the value of a"<<endl;
        cin>>a;
    }

    void operator ++()//operator overloading function
    {
        a = a+10;
    }


    void display()
    {
        cout<<"The value of a is "<<a<<endl;
    }
};

int main()
{
    test t;   
    t.input();
    ++t;//operator overlaoding 
    t.display();
    return 0;
}