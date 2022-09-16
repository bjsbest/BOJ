// 토마토 골드5
#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n; // 가로 n줄 세로 m줄
    int** box = new int*[n];
    for(int i=0; i<n; i++){
        int* box[i] = new int[m];
    } // 각 가로줄마다 m개의 int 메모리 동적할당
    
    // 토마토 정보 입력
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> box[i][j];
        }
    }

    return 0;
}