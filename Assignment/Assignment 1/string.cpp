#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
    string b;
    cin>>a>>b;
    
    cout<<a.size()<<" "<<b.size()<<"\n";
    string c=a+b;
    cout<<c<<"\n";
    
    swap(a[0],b[0]);
    
    cout<<a<<" "<<b;  
    return 0;
}


link:https://www.hackerrank.com/challenges/c-tutorial-strings/submissions/code/291683410
