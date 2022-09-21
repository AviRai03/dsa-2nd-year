#include <iostream>
using namespace std;
int max(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
int main(){
    int a , b , c , d ;
    cin>>a>>b>>c>>d;
    int left_max = max(a, b);
    int right_max = max(c, d);
    int final_max = max(left_max, right_max);
    cout << final_max;
}


link:https://www.hackerrank.com/challenges/c-tutorial-functions/submissions/code/291794909
