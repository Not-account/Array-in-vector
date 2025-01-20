#include<iostream>
using namespace std;
class person {
    //access modifier
    public:
    int salary;
    string subject;
    string researchArea;
    float time;
    string Dept;
    // methods member function;
    void changeDept(string newDept){
        Dept=newDept;
    }

};
int main(){
    person p1;
    p1.salary=1234566;
    p1.subject="Quntumam physic";
    p1.researchArea="mathmatical physic";
    p1.time=21.50;
    cout<<p1.salary<<" "<<p1.salary<<" "<<p1.subject<<" "<<p1.researchArea<<" "<<p1.time<<endl;
    p1.changeDept("physics");
    cout<<p1.Dept<<endl;
    return 0;
}