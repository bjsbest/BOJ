#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n1, n2, n3;
    vector<string> answer;
    while(true){
        cin >> n1 >> n2 >> n3;
        if(n1 == 0 && n2 == 0 && n3 == 0){
            break;
        }
        else{
            if(n1*n1 + n2*n2 == n3*n3 || n2*n2 + n3*n3 == n1*n1 || n3*n3 + n1*n1 == n2){
                answer.push_back("right");
            }
            else{
                answer.push_back("wrong");
            }
        }
    }
    for(int i=0; i<answer.size(); i++){
        cout << answer[i] << endl;
    }
    return 0;
}