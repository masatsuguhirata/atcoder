#include <iostream>
#include <string>
using namespace std;

int main(){
    int a[210];
    int N;
    int cnt = 0;

    cin >> N;

    for (int i = 0; i++; i < N){
        cin >> a[i];
    }
    if(a[i] % 2 == 0) cnt++;
    cout << "答え"+cnt << endl;

}