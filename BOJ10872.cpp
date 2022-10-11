#include <iostream>
using namespace std;

int main(){
    int mul = 1;
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        mul *= i;
    }
    cout << mul << endl;
    return 0;
}