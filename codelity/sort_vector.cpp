#include <iostream>
// #include <boost/foreach.hpp>
#include <vector>
#include <algorithm>
using namespace std;

//https://cpprefjp.github.io/reference/algorithm/sort.html
//C++11以降: O(N log N) (N == last - first) 計算量での比較

void dump(vector<int>& v)
{
        // BOOST_FOREACH(int x, v) {
				for(int i=0;i<v.size();i++){
                cout << v[i] << endl;
        }
}

int main (int argc, char *argv[])
{
        vector<int> v={3,4,1,2,5,3,3};

        // v.push_back ( 3 );
        // v.push_back ( 4 );
        // v.push_back ( 1 );
        // v.push_back ( 2 );

        cout << "Before sort" << std::endl;
        dump (v);

        std::sort(v.begin(), v.end() );

        cout << "After sort" << std::endl;
        dump (v);

}
