// 백준 1197 : 최소 스패닝 트리 (골드 4)
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int v, e;
    cin >> v >> e;

    // v개 vertext를 가진 vector 동적 할당
    vector<int>* graph = new vector<int>[v+1]; // 0번째 인덱스는 사용 x

    for(int i=0; i<e; i++){
        int v1, v2, w; // v1과 v2를 w의 가중치로 연결
        cin >> v1 >> v2 >> v3;
        graph[v1].push_back(v2);
    }
    
    cout << "Hello, World!" << endl;

    return 0;
}