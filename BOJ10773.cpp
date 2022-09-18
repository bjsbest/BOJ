#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> list;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int call_price;
        cin >> call_price;
        if(call_price == 0){
            list.pop();
        }
        else{
            list.push(call_price);
        }
    }
    int sum = 0;
    while(list.size() != 0){
        sum += list.top();
        list.pop();
    }
    cout << sum << endl;
    return 0;
}