#include<iostream>
using namespace std; 

int main(){
    int arr[3][3]= { {1,2,3}, { 4,7,8}, {5,4,7}};
    for (int  i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<< arr[i][j]<<"  ";
        }
        cout << endl;        
    }
    int nums[4][3]= { {1,2,3}, { 4,7,8}, {5,4,7}, {3,4,5}};
    cout<<endl;
    for (int  i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            cout<< nums[i][j]<<"  ";
        }
        cout << endl;        
    }

return 0;
}