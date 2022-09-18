#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> card;
    for(int i=1; i<=n; i++){
        card.push(i);
    } // 1부터 n까지의 자연수를 순서대로 push 완료
    while(card.size() != 1){
        card.pop(); // 가장 위에 있는 원소 삭제
        // 그 다음 원소는 삭제한 후 복원한다.
        int temp = card.front();
        card.pop();
        card.push(temp);
    }
    cout << card.front() << endl;
    return 0;
}