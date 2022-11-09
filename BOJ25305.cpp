//#25305 : 커트라인(브론즈2)
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    list<int> scores;
    int n, k;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        int score;
        cin >> score;
        scores.push_back(score);
    }
    // sorting
    list<int>::iterator it = scores.begin();
    sort(scores.begin(), scores.end(), greater<int>());
    int cutline;
    cutline = *(it+(k-1));
    cout << cutline;
    return 0;
}