// 컴파일 에러라고?

#include <iostream>
#include <vector>
using namespace std;

double getMax(vector<double> vec){
    double max = -1;
    for(int i=0; i<vec.size(); i++){
        if(max < vec[i]) max = vec[i];
    }
    return max;
}

int main(){
    int n;
    cin >> n;

    vector<int> score(n);
    for(int i=0; i<n; i++){
        cin >> score[i];
    }

    vector<double> newScore(n);
    for(int i=0; i<n; i++){
        newScore[i] = static_cast(score[i]);
    }

    for(int i=0; i<n; i++){
        newScore[i] = (newScore[i]/getMax(newScore))*100;
    }

    double average = 0;
    for(int i=0; i<n; i++){
        average += newScore[i];
    }
    average /= n;

    cout << average << endl;
    return 0;
}