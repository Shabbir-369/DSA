#include<iostream>
using namespace std;

class Solution {
public:
    void printNumber() {
        int a;
        cout<<"Input(user gives value): ";
        cin>>a;
        cout<<"Output: "<<a;
    }
};

int main(){
    Solution test;
    test.printNumber();
    return 0;
}