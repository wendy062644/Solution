#include<iostream>  
int price[5] = {2,5,10,20,25};  
int c[1000];  
using namespace std;  
int main(){  
int a,b,m;  
cin>>m;  
c[0] = 1;  
    for (a = 0; a < 5; a++) 
        for (b = price[a]; b <= m; b++)  
            {c[b] = c[b]+c[b-price[a]];}  
    cout<<c[m];  
}

題目b029: 福袋!福袋! 2019-12-19
http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=b029

說明: 這題類似換零錢問題，要求n的最大組合數可以利用c[n-x]+1求得。
