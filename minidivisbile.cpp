#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int i, idx=1;
    while(1){
        if(idx%2==0 && idx%3==0 && idx%5==0 && idx%8==0 && idx%12==0 && idx%13==0 && idx%15==0){
            cout << idx;
            break;
        }
        else
            idx++;
    }
}
