#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	std::vector<int> vec{1, 2, 3, 4, 5, 6};

	printf("要素：n");
	for (auto it = vec.begin(); it != vec.end(); ++it)
		printf("%d,", *it);
	printf("nn");

	//vector<int>::iterator *itr;
	//itr = vec.begin();
	//cout << vec.begin() << " " << vec.end() << endl;
	//cout << vec << endl;
	printf("アドレスは%p\n", vec);
	printf("アドレスは%p\n", vec.begin());

	int num = 1;
	cout << "num;" << &num << endl;

	cout << "test" << endl;
	auto it = std::find(vec.begin(), vec.end(), num);

	if (it != vec.end())
	{
		printf("%dは見つかりました。n", num);
	}
	else
	{
		printf("%dは見つかりませんでした。n", num);
	}
	return 0;
}
