#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if (((a*b)%2) == 0){
        cout << "EVEN" << endl;
    }else{
        cout << "Odd" << endl;
    }

}