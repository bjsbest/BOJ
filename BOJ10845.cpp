#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    int testcase;
    cin >> testcase;
    for(int i=0; i<testcase; i++){
        string str;
        int n;
        cin >> str;
        if(str == "push"){
            cin >> n;
            q.push(n);
        }
        else{
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
                else{
                    cout << q.front() << endl;
                }
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
    }
    return 0;
}