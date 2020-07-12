#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//#include <iostream>
//#include <string>
//using namespace std;9m
int main() {
	int n;
	int turi;

	cin >> n;
	turi= (n/1000+1)*1000-n;

	if (turi % 1000 !=0){
	cout << turi << endl;
	}else{
		cout << "0" << endl;
	}

}
