#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int, int>>V_p ={{1,2},{2,3},{3,4}};
    vector<pair<int, int>>::iterator it;
    for(it=V_p.begin(); it!=V_p.end(); it++){
        cout<<(*it).first <<" "<<(*it).second<<endl;
    }
    return 0;
}