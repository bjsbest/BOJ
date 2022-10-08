#include <iostream>
#include <string.h>
using namespace std;

void getScore(char* str){
    int sum = 0;
    int i = 0;
    int successive_score = 0;
    // 연속된 O의 개수 확인하기
    while(i<strlen(str)){
        while(str[i] == 'O'){
            successive_score++;
            i++;
        }
        if(str[i] == 'X'){
            sum += successive_score;
            successive_score = 0;
        }
        sum += successive_score;
    }
    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        char myCase[80];
        cin >> myCase;
        getScore(myCase);
    }
    return 0;
}