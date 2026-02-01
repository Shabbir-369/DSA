#include<iostream>
using namespace std;

class Solution {
public:
    void studentGrade(int marks) {
        if(0 <= marks <= 100){

        if(marks >= 90){
            cout<<"Grade A"<<endl;
            cout<<"Explanation: marks are greater than or equal to 90";  
        }
        else if(marks >= 70){
            cout<<"Grade B"<<endl;
            cout<<"Explanation: marks are greater than or equal to 70";  
        }
        else if(marks >= 50){
            cout<<"Grade C"<<endl;
            cout<<"Explanation: marks are greater than or equal to 50";  
        }
        else if(marks >= 35){
            cout<<"Grade D"<<endl;
            cout<<"Explanation: marks are greater than or equal to 35";  
        }
        else{
            cout<<"Fail"<<endl;
            cout<<"Explanation: marks are less than 35";
        }
    }
        }
};

int main(){
    Solution a;
    int marks;
    cout<<"marks = ";
    cin>>marks;
    a.studentGrade(marks);
    return 0;
}