#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//#include <iostream>
//#include <string>
//using namespace std;


int main()
{
	int N;
	int AC = 0, WA = 0, TLE = 0, RE = 0;

	string s[110000];
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> s[i];
	}

	for (int i = 0; i < N; i++)
	{
		//if (!strcmp(s[i], "WA"))
		if (!strcmp(s[i].c_str(), "AC"))AC++;
		if (!strcmp(s[i].c_str(), "WA"))WA++;
		if (!strcmp(s[i].c_str(), "TLE"))TLE++;
		if (!strcmp(s[i].c_str(), "RE"))RE++;
	}

		cout << "AC x " << AC << endl;
		cout << "WA x " << WA << endl;
		cout << "TLE x " << TLE << endl;
		cout << "RE x " << RE << endl;
}
