#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    int* vote = new int[n];
    for(int i=0; i<n; i++){
        cin >> vote[i];
        if(vote[i] == 0){
            cnt++;
        }
    }
    if(cnt > (n/2)){
        cout << "Junhee is not cute!" << endl;
        delete[] vote;
        return 0;
    }
    else{
        cout << "Junhee is cute!" << endl;
        delete[] vote;
        return 0;
    }
}