#include<iostream>
using namespace std;
    int main() {
    	long long int n,m,c,ma=0;
		long long int num[2][2][10001]={0};
    	cin>>n>>m;
    	for(int a=1;m>=a;a++)
    	{
    		num[0][0][a]=0;
    		num[1][0][a]=0;
		}
    	for(int a=1;n>=a;a++)
    	{
    		c=m;
    		for(int b=1;m>=b;b++)
    		{
    			cin>>num[0][1][b];
    			num[1][1][b]=num[0][1][b];
			}
			num[1][1][m]=num[1][0][m]+num[1][1][m];
			num[0][1][1]=num[1][0][1]+num[0][1][1];
			for(int b=2;m>=b;b++)
			{
				c--;
				num[0][1][b]=num[0][1][b]+max(num[0][1][b-1],num[0][0][b]);
				num[1][1][c]=num[1][1][c]+max(num[1][1][c+1],num[1][0][c]);
			}
			for(int b=1;m>=b;b++)
			{
				num[1][0][b]=max(num[0][1][b],num[1][1][b]);
				num[0][0][b]=num[1][0][b];
			}
		}
		for(int a=1;m>=a;a++)
		{
			if(num[1][0][a]>ma){ma=num[1][0][a];}
		}
		cout<<ma;
    }

說明: 這題可從左邊掃到右邊或從右邊掃到左邊，每一格的最大數值可以用上一格或左右兩個的最大值來加上本身數字。
      num[X][Y][Z] X為0是紀錄由右掃到左邊的數字，X為1是紀錄由左掃到右邊的數字。Y為0是紀錄上一行的最大值，Y為1是紀錄新的一行的最大值。Z用來記錄每一行的各個數字。
