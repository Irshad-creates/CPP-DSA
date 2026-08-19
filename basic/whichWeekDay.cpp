#include<bits/stdc++.h>
using namespace std;

void WhichWeekDay(int day){
    switch (day){
        case 1 : cout <<"monday"; break;
        case 2 : cout <<"tuesday"; break;
        case 3 : cout <<"wednesday"; break;
        case 4 : cout <<"thrusday"; break;
        case 5 : cout <<"friday" ;break;
        case 6 : cout <<"saturday"; break;
        case 7 : cout <<"sunday"; break;
         default: cout << "Invaild"; break;
    }
}
int main(){
    int day;
    cin >> day;
    WhichWeekDay(day);
    return 0;
}