#include<bits/stdc++.h>
using namespace std;
class Struct{
	public:
		int h;
		int x;
		int y;
		int xx;
		int yy;
};
int main(){
	int n, m, bossnum, num = 0;
	cin >> n >> m >> bossnum;
	int k = bossnum;
	vector<Struct> boss(bossnum);
	long long map[n][m] = {0};
	for(int a = 0; bossnum > a; a++)
	{
		cin >> boss[a].x >> boss[a].y >> boss[a].xx >> boss[a].yy;
		boss[a].h = 1;
	}
	while(k)
	{
		int x[501] = {0}, y[501] = {0}, t = 0;
		for(int a = 0; bossnum > a; a++)
		{
			if(boss[a].h){
				map[boss[a].x][boss[a].y] = 1;
			}
		}
		for(int a = 0; bossnum > a; a++)
		{
			if(boss[a].h){
				boss[a].x += boss[a].xx;
				boss[a].y += boss[a].yy;
				if(boss[a].x >= n||boss[a].y >= m||boss[a].x < 0||boss[a].y < 0){boss[a].h = 0;
				k--;
				}
				else if(map[boss[a].x][boss[a].y] == 1){boss[a].h = 0;
				k--;
				x[t] = boss[a].x;
				y[t] = boss[a].y;
				t++;
				}
			}
		}
		for(int a = 0; t > a; a++)
		{
			map[x[a]][y[a]] = 0;
		}
		if(k == 0)
		{
			for(int i = 0; n > i; i++)
			{
				for(int j = 0; m > j; j++)
				{
					if(map[i][j] == 1){num++;}
				}
			}
		}
	}
	cout << num << endl;
}
