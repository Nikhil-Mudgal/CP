#include <iostream>

using namespace std;

int main(){
    int t{};
    int k{};
    int counter{0};
    
    cin >> t >> k;
    
    for (int i{0}; i < t;i++){ // iterating over the number of inputs
        int num{};
        cin >> num ; 
        if (num % k == 0){
            counter ++ ;
        }
        else {
            counter = counter;
        }
    } 
    cout << counter << endl;
}



