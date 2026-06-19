// Online C++ compiler to run C++ program online

//  char pattern
#include <iostream>
using namespace std;
int main() {
    int n ;
    char ch;
    for(int i = 0;i<5;i++){
        ch = 'A';
        for(int j = 0;j<5;j++){
            cout<<ch;
            ch = ch+1;
        }
        cout<<endl;
    }
    return 0;

    
}