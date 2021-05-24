#include<iostream>  
using namespace std;  
int main(){  
  long long int F[50][50];  
  F[0][0]=0;  
  long long int x,y,j,k;  
  cin>>x>>y;  
  for(int i=1;i<=x;i++)  
  {  
      F[i][0]=1;  
  }  
  for(int i=1;i<=y;i++)  
  {  
      F[0][i]=1;  
  }  
for(k=1;k<=y;k++)  
   {  
    for(j=1;j<=x;j++)  
    {  
       F[j][k]=F[j-1][k]+F[j][k-1];  
    }  
   }  
   cout<<F[x][y];  
   }

題目b025: 棋盤格城市 2019-11-28
http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=b025
