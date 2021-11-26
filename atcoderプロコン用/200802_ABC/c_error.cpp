//https://atcoder.jp/contests/abc174/tasks/abc174_c

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
	int k;
	cin >> k;
	int MAX = 100010;
	//MAX=10;

	int a[MAX];
	rep1(i, MAX) a[i] = 7;

	int k1; //kの一桁目
	k1 = k % 10;

	int keta = 5;//桁数をきちんとする桁数-1
	int wari;
	int b[MAX];

	int ans = -1;
	int flag = true;

	//最初の桁から0が一通りそろえば勝ち
	while (flag)
	{
		//-- 準備 --
		keta = keta + 1; //次の桁から進める
		if (keta > 1000000)
			break; //ループ上限超えたら終わり

		//初期化
		wari = -1; //kの一桁目でa[i]の一桁目が割り切れる時の乗数
		rep1(i, MAX) b[i] = 0;

		//-- 乗数を探す --
		//kの一桁目でa[i]の一桁目が割り切れる時の乗数を探す
		rep(j, 10)
		{
			if (a[keta] == k1 * j % 10)
			{
				wari = j;
				break;
			}
		}

		if (wari == -1)
		{ //乗数が見つからないと終わり
			break;
		}
		else
		{
			//k*wari;を配列b[i]に突っ込む
			{
				int tmp = k * wari;
				for (int i = keta; i <= MAX; i++)
				{
					b[i] = tmp % 10;
					tmp /= 10;
					//※このままで良いが、ループ数はもっと減らせる。
				}
			}
			for (int i = keta; i <= MAX; i++)
			{
				a[i] -= b[i]; //各桁から引く
				if (a[i] < 0)
				{
					for (int j = i; j <= MAX; j++)
					{
						if (a[j] > 0)
						{
							a[j] = 0;
							for (int k = j - 1; j > i; j--)
								a[k] = 9;
							a[i] = 10 + a[i];
							break;
						}
					}
				}
			}
		}

		//ちょうど割り切れたか判定,1番目からn番目までの0が揃ってればおｋ
		int sum = 0;
		bool testflag = false; //初期化
		for (int i = MAX; i >= keta+1; i--)//一桁多い所も含めて、0続きであればOK
		{ //大なり小なり注意
			if (a[i] == 0 or testflag)
			{
				sum += a[i];
				testflag = true;
			}
		}
		if (sum == 0 and testflag == true)
		{
			//ちょうど割り切れた
			for (int i = MAX; i >= keta; i--)
			{
				if (a[i] == 0)
				{
					ans = i;
					flag = false;
					break;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}

	//-- 桁の制約がない場合版--
	//	long long int n = 7;
	//
	//	//nがでかすぎる場合
	//	int ans;
	//	rep1(i,100000){
	//		if(n%k==0){
	//			ans =i;
	//			break;
	//		}
	//		n = n*10 + 7;
	//	}
	//	if (ans <= 1000000) cout << ans << endl;
	//	else if (ans > 1000000) cout << "-1" << endl;
