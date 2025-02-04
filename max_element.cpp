#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

int main(){
    vector <int> nums= {1,5,4,78,4,12,69,93,5};
    int ele=nums[0];
    for (int i = 0; i < nums.size(); i++){
        if(ele<nums[i]) { ele= nums[i];}
    }
    cout<<"the maximum element is: "<< ele;
    

    return 0;
}