#include <iostream> 

using namespace std;

int main() {
	int t{},d{},q{};
    cin >> t;
    
    for (int i{1};i<=t;i++){
        cin >> d >> q;
        cout << (d % q ) << endl; 
    }
	return 0;
}