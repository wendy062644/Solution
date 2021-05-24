#include<iostream>
using namespace std;
    int main() {
    int a,n;
    long long int b=0;
    long long int num[100]={0};
    num[0]=1;
    num[1]=1;
    cin>>n;
    for(a=2;n+1>a;a++)
    {
        num[a]=num[a-1]+num[a-2];
    }
    cout<<num[n]<<" ";
    b=num[n]%n;
    for(a=2;b+1>a;a++)
    {
        num[a]=num[a-1]+num[a-2];
    }
    cout<<num[b];
}

題目b024: 指南宮的階梯 2019-11-28
http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=b024
