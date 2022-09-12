#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m, n;
    cin >> m;
    cin >> n; // 입력 완
    vector<int> primeArr;

    // 소수 여부 확인하기
    for(int i=m; i<n+1; i++){
        int cnt = 0;
        for(int j=2; j<i; j++){
            if(i%j == 0){
                cnt++;
                break; // j-for문 탈출
            }
        }
        if(cnt == 0){
            primeArr.push_back(i);
        }
    }
    
    // primeArr의 배열 생성 완료
    if(primeArr.empty()){
        cout << -1;
        return 0;
    }
    else{
        int sum = 0;
        for(int i=0; i<sizeof(primeArr)/sizeof(int); i++){
            sum = sum + primeArr[i];
        }
        int min = primeArr[0];
        cout << sum << endl << min;
        return 0;
    }   
}