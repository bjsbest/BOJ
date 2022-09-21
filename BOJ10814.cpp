#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    int age;
    string name;
    int order; // 출력 순서를 나타내는 멤버변수

public :
    // 생성자
    Person(){
        age = 0;
        name = "NO";
        order = 1;
    }
    Person(int age, string name){
        age = this->age;
        name = this->name;
        order = 1;
    }
    // get
    int getAge(){return age};
    string getName(){return name};

    //set
    void setAge(int new_age){
        this->age = new_age; 
    }
    void setName(string new_name){
        this->name = new_name;
    }
    void upOrder(){
        order++;
    }
};

int main(){
    int n;
    cin >> n;
    Person* list = new Person[n]; // Person type의 배열 생성, 모든 객체 기본생성자로 초기화
    for(int i=0; i<n; i++){
        int n1;
        string s1;
        cin >> n1 >> s1;
        list[i].setAge(n1);
        list[i].setName(s1); // 수정 완료!
    }

    // 출력 순위 결정하기
    Person* newList = new Person[n];
    return 0;
}