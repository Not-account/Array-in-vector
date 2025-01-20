#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="abc";
    m[2]="cde";
    m[3]="ghi";
    m.insert({4, "hgy"});
    map<int, string>:: iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;
}