#include<iostream>  
using namespace std;  
int main(){  
int a,b,c,d,n;  
int num[7]={0,1,5,10,12,16,20};  
int t[102];  
t[102]=100;  
t[0]=0;  
cin>>n;  
for(a=1;n+1>a;a++)  
{  
    d=100;  
    for(b=1;7>b;b++)  
    {  
        c=a-num[b];  
        if(c>=0){}  
        else{c=102;}  
        d=min(d,t[c]);  
    }  
    t[a]=d+1;  
}  
cout<<t[n];  
}

題目b028: 忙碌的超商店員 2019-12-18
http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=b028

說明: 假如要把4元的錢換成1元、4元、7元的硬幣，只需要1個硬幣(4元)即可，如果要把n元換成硬幣，可以用(n-硬幣面額)的零錢數+1(硬幣面額)求出，不過需要把1~n都算過一遍。 
