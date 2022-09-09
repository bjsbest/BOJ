#include <iostream>
using namespace std;

int getPower(int x){ // 10의 x제곱을 리턴하는 함수
    int pow = 1;
    for(int i=0; i<x; i++){
        pow *= 10;
    }
    return pow;
}

int getPartialSum(int num){ // 분해합 찾는 함수
    int sum = num;
    int arr[8]; // 자릿수를 담는 배열
    arr[0] = num%10;
    for(int i=1; i<8; i++){
        arr[i] = ((num%getPower(i+1))-(num%getPower(i)))/getPower(i);
    }
    for(int i=0; i<8; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    // 생성자는 분해합보다 작을 수밖에 없으므로 1부터 n-1까지 분해합을 직접 구해서, 분해합이 n이 나오는 값을 저장한다.
    int temp = n+1;
    for(int i=n-1; i>0; i--){
        if(getPartialSum(i) == n && i<temp){
            temp = i;
        }
    }
    if(temp == n+1){
        cout << 0;
    }
    else{
        cout << temp;
    }
    return 0;
}