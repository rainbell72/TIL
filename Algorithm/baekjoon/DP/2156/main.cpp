#include <iostream>
#include <algorithm>
using namespace std;
// 지금 마시는(n) 포도주 잔이 연속으로 j(0~2)번째 마시는 잔이다.
int d[10001][3]; 
int glass[10001];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> glass[i];
		
	}
	for (int i = 1; i <= n; i++)
	{
		d[i][0] = max(max(d[i - 1][0], d[i - 1][1]), d[i - 1][2]);
		d[i][1] = d[i - 1][0] + glass[i];
		d[i][2] = d[i - 1][1] + glass[i];
	}
	cout << max(max(d[n][0], d[n][1]), d[n][2]) << endl;
	return 0;
}