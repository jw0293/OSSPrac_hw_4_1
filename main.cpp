#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define Mod 1000000007
#define endl '\n'

using namespace std;

int main(){
    fastio;

    string name, id, major, school, grade;
    
    cout << "이름을 입력하세요 : ";
    cin >> name;

    cout << "학번을 입력하세요 : ";
    cin >> id;

    cout << "학과를 입력하세요 : ";
    cin >> major;

    cout << "학년을 입력하세요 : ";
    cin >> grade;
    
    cout << endl << endl << "< 출력 >  " << endl;
    cout << "이름 : " << name << endl;
    cout << "힉번 : " << id << endl;
    cout << "학과 : " << major << endl;
    cout << "학년 : " << grade << endl;
    
    return 0;
}