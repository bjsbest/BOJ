// 실버 4 큐 아직 못 풀었다.
#include <iostream>
#include <string>
#include <queue>
using namespace std;

void playQueue(queue q, int i){
    q.push(i);
}
void playQueue(queue q, string str){
    if(str == "pop"){
        if(q.empty() == 1){
            cout << -1 << endl;
        }
        else{
            cout << q.front() << endl;
            q.pop();
        }    
    }
    else if(str == "size"){
        cout << q.size() << endl;
    }
    else if(str == "empty"){
        cout << q.empty() << endl;
    }
    else if(str == "front"){
        if(q.empty() == 1){
            cout << -1 << endl;
        }
        cout << q.front() << endl;
    }
    else if(str == "back"){
        if(q.empty() == 1){
            cout << -1 << endl;
        }
        else{
            cout << q.back() << endl;
        }
    }
}

int main(){
    queue<int> q1;
    int testcase;
    cin >> testcase;
    for(int i=0; i<testcase; i++){
        string str;
        int n;
        cin >> str;
        if(str == "push"){
            cin >> n;
            playQueue(q1, n);
        }
        else{
            playQueue(q1, str);
        }
    }
    return 0;
}