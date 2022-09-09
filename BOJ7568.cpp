#include <iostream>
#include <vector>
using namespace std;

class Size{
    private:
    int weight;
    int height;
    int rank;

    public:
    // 생성자
    Size(){
        weight = 0; height = 0; rank =1 ;
    }
    Size(int weight, int height){
        this->weight = weight, this->height = height, rank = 1; 
    }

    // get함수
    int getWeight() const{return weight;}
    int getHeight() const{return height;}
    int getRank() const{return rank;}

    // set함수
    void setWeight(int num){
        this->weight = num;
    }
    void setHeight(int num){
        this->height = num;
    }
    void upRank(){
        this->rank ++;
    }

};

int main(){
    int n;
    cin >> n;
    Size* info = new Size[n]; // 배열 동적 할당, 모든 객체가 (0, 0)으로 초기화됐겠지...
    for(int i=0; i<n; i++){
        int w, h;
        cin >> w >> h;
        info[i].setWeight(w);
        info[i].setHeight(h);
    } // 총 n개의 "덩치 정보" 입력 완.

    // 모든 경우의 덩치 비교하기 -> 함수 만들지 말고 직접 해보자...
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(info[i].getWeight() > info[j].getWeight() && info[i].getHeight() > info[j].getHeight()){
                info[j].upRank();
            }
            else if(info[i].getWeight() < info[j].getWeight() && info[i].getHeight() < info[j].getHeight()){
                info[i].upRank();
            }
        }
    }

    //각 객체의 덩치 랭크 출력하기
    for(int i=0; i<n; i++){
        cout << info[i].getRank() << " ";
    }

    delete[] info;
    return 0;
}