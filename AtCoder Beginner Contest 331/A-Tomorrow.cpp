#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif




	int M, D, year, month, date;
	cin >> M >> D;
	cin >> year >> month >> date;


	if(date < D) cout << year << " " << month <<" " << date + 1 << endl;

	else if(month < M) cout << year << " " << month + 1 <<" " << 1<< endl;

	else cout << year + 1 << " " << 1 <<" " << 1 << endl;

	
}