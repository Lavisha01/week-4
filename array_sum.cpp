#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

int main(){
    vector <int> nums= {1,5,4,78,4,12,69,93,5};
    int sum=0;
    for(int i=0; i<nums.size(); i++){
        sum += nums[i];
    }
    cout<<"the sum of the elements of array is: "<< sum<<"\n";

    return 0;
}