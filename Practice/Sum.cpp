#include<iostream>
using namespace std;
#include"Calculate.cpp"

class Sum:Calculate
{
    public:void sum(int a,int b)
    {
        cout<<a+b;
    }
};
int main()
{
    return 0;
}