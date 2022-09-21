#include <iostream>
#include <cstdlib>
using namespace std;
int sum1(int x, int y)
    {
    int sum=x+y;
    return sum;
    }
    int dif(int x, int y)
    {
        int dif1=abs(x-y);
        return dif1;
    }

int main(){
    int a , b ;
    cin>>a>>b;
    int sum = sum1(a, b);
    int moddif = dif(a, b);
    cout<<sum<<endl;
    cout<<moddif<<endl;
    return 0;
}



link:https://www.hackerrank.com/challenges/c-tutorial-pointer/submissions/code/291799732
