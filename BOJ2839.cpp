#include <iostream>
using namespace std;

int getMaxof5(int num){
    // num에 가장 가까운 5의 배수가 5k일 때, k를 구하자.
    int k=0;
    while(5*k+5 <= num){
        k++;
    }
    // num-5k가 3의 배수가 되도록 하는 최대의 k값을 구하자. 그런 k의 값을 리턴
    if(k != 0){
        while((num-5*k)%3 != 0 && k!=0){
        k--;
        }
    }
    return k; // 안쪽 while문에서 k!=0을 안 했을 때 틀리는 이유는, if 안쪽에서는 k가 음수가 돼도 걸러지지 않기 때문!
}

int main(){
    int n;
    cin >> n;
    int n3 = n - 5*getMaxof5(n); // n에서 최대의 5의 배수를 뺀 값. 3의 배수겠지... 아니면 -1 출력하는 거구
    if(n3 % 3 == 0){
        cout << getMaxof5(n) + (n3/3);
    }
    else{
        cout << -1;
    }
    return 0;
}