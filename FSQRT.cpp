#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t; 
	while (t--){
	    int val;
	    cin >> val;
	    int res = 1;
	    int i{1};
        while(res <= val){
            i++;
            res = i*i;
        }
	    cout << (i -1)<< endl;
	}
	return 0;
}
