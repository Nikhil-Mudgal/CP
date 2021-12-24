#include <iostream>
#include <vector>


using namespace std;
vector <int> v{};

int main() {
	// your code goes here
	int num{};
	cin >> num;
	for (int i{1};i <=10 ;i++){
	    if (num % i == 0){
	        v.push_back(i);
	    }
	}
	int large = v.at(0);
	for (auto c:v ){
	    if (c > large){
	        large = c;
	    }
	}cout << large << endl;
	
	return 0;
}
