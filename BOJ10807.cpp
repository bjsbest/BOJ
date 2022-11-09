#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    int target_num;
    cin >> target_num;
    int cnt = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == target_num);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}