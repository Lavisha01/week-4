#include<iostream>
#include <bits/stdc++.h>
using namespace std; 
//find the pairs which has the sum 5
// find the count of pairs which has sum as 5
int main(){
    vector <int> nums= {1,5,0,4,3,2};
    unordered_map<int, int> freq; //to store frequency
    int targetSum =5;
    int count=0;
    for(int i: nums){
        int complement = targetSum-i;
        if(freq[complement] > 0){
            cout << "(" << complement << ", " << i << ")" << endl;
            freq[complement]--;  
            count++;          
        }
        else{
            freq[i]++;
        }
    }
    cout<<" the no. of pairs are: "<<count<<endl;

    return 0;
}