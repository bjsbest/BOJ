#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    int testcase;
    string str;
    cin >> testcase;
    int i=0;
    while(i<testcase){
        cin >> str;
        if(str == "push"){
            int n;
            cin >> n;
            s.push(n);
        }
        else if(str == "pop"){
            if(s.empty() == 1){
                cout << -1 << endl;
            }
            else{
                cout << s.top() << endl;
                s.pop();
            }
        }
        else if(str == "size"){
            cout << s.size() << endl;
        }
        else if(str == "empty"){
            cout << s.empty() << endl;
        }
        else if(str == "top"){
            if(s.empty() == 1){
                cout << -1 << endl;
            }
            else{
                cout << s.top() << endl;
            }
        }
        i++;
    }
    return 0;
}