#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

int main(){
    vector <int> nums= {1,5,4,78,4,12,69,93,5};
    int count=0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]%2==0){
            count++;
        }
    }
    cout<< "No. of even elements in the array is: "<< count;
    
    return 0;
}