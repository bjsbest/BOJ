#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n%400 == 0 || (n%4 == 0 && n%100 != 0)){
        cout << 1 << endl;
        return 0;
    }
    else{
        cout << 0 << endl;
        return 0;
    }
}