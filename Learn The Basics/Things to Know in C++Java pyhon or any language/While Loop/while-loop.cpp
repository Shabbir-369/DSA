#include<bits/stdc++.h>
using namespace std;


// class Solution {
//     public:
//     int whileLoop(int d) {
//         int i = 0;
//         int sum = 0;
//         while(i<50){
//            string temp =  to_string(i) + to_string(d);
//             sum = stoi(temp) + sum;
//             i++;
//         }
//         return sum;
//     }
// };

class Solution {
    public:
    int whileLoop(int d) {
        int num = (d == 0) ? 10 : d;
        int sum = 0;
        int count = 0;
        while(count < 50){
            sum += num;
            num += 10;
            count++;
}
        return sum;
    }
};

int main(){
    int d = 0;
    cin>>d;
    Solution sol;
    int result = sol.whileLoop(d);
    cout<<result<<endl;

    return 0;
}