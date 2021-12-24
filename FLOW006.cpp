#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t{0}; // entries
    cin >> t;
    for (int i{1}; i <= t; i++){
        int v{},sum{};
        cin >> v;
        while (v){
            int temp{};
            temp = v % 10;
            sum += temp;
            v /= 10;
        }cout << sum << endl;
        sum=0;
    }
    
	return 0;
}
