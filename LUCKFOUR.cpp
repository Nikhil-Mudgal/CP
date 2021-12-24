#include <iostream>
#include <string>

using namespace std;


int main() {
    
    int num{};
    // your code goes here
    cin >> num;
    for(size_t i{1} ; i<=num ; i++){ // get inputs
        long long t{};
        cin >> t;
        string s = to_string(t);
        int running_total{0};
        for (char pos:s){
            if (pos == '4'){
                running_total ++;
            } 
            else {
                running_total = running_total;
            }
        } cout << running_total << endl;
    }
	
	return 0;
}
