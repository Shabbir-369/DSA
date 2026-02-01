#include<bits/stdc++.h>
using namespace std;

int main(){
    
    pair<int, int> p1 = {1,2};
    cout<<p1.first<<" "<<p1.second<<endl;
    
    pair<int, pair<char, char>> p2 = {3,{'a','b'}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<" ";
    }

    auto p3 = make_pair(1,"HELLO"); // make_pair function to make pair;
    cout<<endl<<p3.first<<" "<<p3.second;

    return 0;
}