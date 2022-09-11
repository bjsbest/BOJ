#include <iostream>
using namespace std;

int main(){
    int arr[9];
    for(int i=0; i<9; i++){
        cin >> arr[i];
    }

    int max = arr[0];
    int max_index = 1;
    for(int i=1; i<9; i++){
        if(max < arr[i]){
            max = arr[i];
            max_index = i+1;
        }
    }
    cout << max << endl << max_index;
    return 0;
}