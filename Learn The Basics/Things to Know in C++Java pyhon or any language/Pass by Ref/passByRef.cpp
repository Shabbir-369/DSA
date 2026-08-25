#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void reverse(vector<int>& arr){
        for(int i=0; i<arr.size()/2; i++){
            swap(arr[i], arr[arr.size()-i-1]);
        }
    }
};

int main(){
    Solution reverseArray;
    vector<int> arr;
    int n;
    int size;

    cin >> size;

    for(int i=0; i<size; i++){
        cin >> n;
        arr.push_back(n);
    }

    reverseArray.reverse(arr);

    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}
