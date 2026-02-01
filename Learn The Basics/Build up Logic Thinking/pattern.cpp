#include<iostream>
using namespace std;

class Solution {
    public:
    void pattern1(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<"*";
            }
            cout<<endl;
        }

    }
    void pattern2(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }

    }
    void pattern3(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout<<j+1;
            }
            cout<<endl;
        }

    }
    void pattern4(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout<<i+1;
            }
            cout<<endl;
        }

    }
    void pattern5(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i; j++){
                cout<<"*";
            }
            cout<<endl;
        }

    }
    void pattern6(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i; j++){
                cout<<j+1;
            }
            cout<<endl;
        }

    }
    void pattern7(int n) {
        for(int i=0; i<n; i++){
            //space
            for (int j = 0; j<n-i-1; j++)
            {
                cout<<" ";
            }
            //star
            for (int j = 0; j < (2*i)+1; j++)
            {
                cout<<"*";
            }
            //space
            for (int j = 0; j<n-i-1; j++)
            {
                cout<<" ";
            }
            
            cout<<endl;
        }

    }
    void pattern8(int n) {
        for(int i=n; i>0; i--){
            //space
            for (int j = 0; j<n-i; j++)
            {
                cout<<" ";
            }
            //star
            for (int j = 0; j < (2*i)-1; j++)
            {
                cout<<"*";
            }
            //space
            for (int j = 0; j<n-i; j++)
            {
                cout<<" ";
            }
            
            cout<<endl;
        }

    }

    // void pattern8(int n) {
    //     for(int i=0; i<n; i++){
    //         //space
    //         for (int j = 0; j<i; j++)
    //         {
    //             cout<<" ";
    //         }
    //         //star
    //         for (int j = 0; j < 2*n-((2*i)+1); j++)
    //         {
    //             cout<<"*";
    //         }
    //         //space
    //         for (int j = 0; j<i; j++)
    //         {
    //             cout<<" ";
    //         }   
    //         cout<<endl;
    //     }
    // }

    void pattern9(int n){
        pattern7(n);
        pattern8(n);
    }

    void pattern10(int n){
        for(int i=1; i<2*n-1; i++){
            int stars = i;
            if(i>n) stars = 2*n - i;
            for(int j=1; j<=stars; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }

    void pattern11(int n){
        int start = 1;
        for(int i=0; i<n; i++){
            if(i%2==0) start = 1;
            else start = 0;
            for(int j=0; j<=i; j++){
                cout<<start;
                start = 1 - start;
            }
            cout<<endl;
        }
    }

    void pattern12(int n){
        int space = 2*(n-1);
        for(int i=0; i<n; i++){
            for (int j = 0; j <= i; j++)
            {
                cout<<j+1;
            }
            for(int j=0; j<space; j++){
                cout<<" ";
            }
            for(int j=i; j>=0; j--){
                cout<<j+1;
            }
            cout<<endl;
            space -= 2;
        }
    }

    void pattern13(int n){
        int num=1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout<< num << " ";
                num++;
            }
            
            cout<<endl;
        }
    }

    void pattern14(int n){
        for (int i = 0; i < n; i++)
        {
            for (char ch = 'A'; ch <= 'A' + i; ch++)
            {
                cout<<ch;
            }
            cout<<endl;
            
        }
        
    }

    void pattern15(int n){
        for(int i=0; i<n; i++){
            for(char ch = 'A'; ch <= 'A'+(n-i-1); ch++){
                cout<<ch;
            }
            cout<<endl;
        }
    }


    void pattern16(int n){
        for(int i=0; i<n; i++){
            char ch = 'A'+i;
            for(int j=0; j<=i; j++){
                cout<<ch;
            }
            cout<<endl;
        }
    }

    void pattern17(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            char ch = 'A';
            int breakpoint = (2*i+1)/2;
            for(int j=1; j<=2*i + 1; j++){
                cout<<ch;
                if(j<=breakpoint) ch++;
                else ch--;
            }
            for(int j=0; j<n-i-1; j++){
                cout<< " ";
            }
            cout<<endl;
        }
    }

    void pattern18(int n){
        for(int i=0; i<n; i++){
            for(char ch='E'-i; ch<='E'; ch++){
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }

    void pattern19(int n){
        int iniS = 0;
        for(int i=0; i<n; i++){
            for(int j=1; j<=n-i; j++){
                cout<<"*";
            }
            for(int j=1; j<=iniS; j++){
                cout<<" ";
            }
            for(int j=1; j<=n-i; j++){
                cout<<"*";
            }
            iniS += 2;
            cout<<endl;
        }
        iniS = 8;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            for(int j=1; j<=iniS; j++){
                cout<<" ";
            }
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            iniS -= 2;
            cout<<endl;
        }
    }

    void pattern20(int n){
        int spaces = 2*n-2;
        for(int i=1; i<=2*n-1; i++){
            int stars = i;
            if(i>n) stars = 2*n-i;
            for(int j=1; j<=stars; j++){
                cout<<"*";
            }
            for(int j=1; j<=spaces; j++){
                cout<<" ";
            }
            for(int j=1; j<=stars; j++){
                cout<<"*";
            }
            cout<<endl;
            if(i<n) spaces -=2;
            else spaces +=2;
        }
    }

    void pattern21(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==0 || i==n-1 || j==0 || j==n-1) cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
    }

    void pattern22(int n){
        for(int i=0; i<2*n-1; i++){
            for(int j=0; j<2*n-1; j++){
                int top = i;
                int left = j;
                int right = (2*n-2)-j;
                int down = (2*n-2)-i;
                cout<<(n-min(min(top,down),min(left,right)));
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution a;
    int b;
    cout<<"Enter no. ";
    cin>>b;

    // a.pattern1(b);
    // cout<<endl;

    // a.pattern2(b);
    // cout<<endl;

    // a.pattern3(b);
    // cout<<endl;

    // a.pattern4(b);
    // cout<<endl;

    // a.pattern5(b);
    // cout<<endl;

    // a.pattern6(b);
    // cout<<endl;

    // a.pattern7(b);
    // cout<<endl;

    // a.pattern8(b);
    // cout<<endl;

    // a.pattern9(b);
    // cout<<endl;

    // a.pattern10(b);
    // cout<<endl;
    
    // a.pattern11(b);
    // cout<<endl;

    // a.pattern12(b);
    // cout<<endl;

    // a.pattern13(b);
    // cout<<endl;

    // a.pattern14(b);
    // cout<<endl;

    // a.pattern15(b);
    // cout<<endl;

    // a.pattern16(b);
    // cout<<endl;

    // a.pattern17(b);
    // cout<<endl;

    // a.pattern18(b);
    // cout<<endl;

    // a.pattern19(b);
    // cout<<endl;

    // a.pattern20(b);
    // cout<<endl;

    // a.pattern21(b);
    // cout<<endl;

    a.pattern22(b);
    cout<<endl;


    return 0;
}