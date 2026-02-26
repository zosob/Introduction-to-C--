#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> numbers = {10, 20, 30, 40};
    cout<<"Last element: "<<numbers.back()<<endl;

    numbers.pop_back();

    cout<<"\nAfter pop_back():\n";

    for(int i=0; i<numbers.size(); i++){
        cout<<numbers[i]<<" ";
    }

    cout<<"\nAfter adding 5 to each element:\n";
    for(int i=0; i<numbers.size(); i++){
        numbers[i]+= 5;
        cout<<numbers[i]<<" ";
    }

    vector<int> copy;

    //copy = numbers;
    for (int i=0; i<numbers.size();i++){
        copy.push_back(numbers[i]);
    }

    cout<<"Copy of numbers: "<<endl;
    for(int i=0; i<copy.size(); i++){
        cout<<copy[i]<<" ";
    }

    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    bool same = true;

    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            same=false;
        }
    }

    if(same){
        cout<<"Vectors match";
    }

    cout<<"\n\nSwapped vectors...";
    vector<int> nums = {1, 2, 3, 4, 5};

    for(int i=0; i<nums.size()/2;i++){
        int temp = nums[i]; 
        nums[i] = nums[nums.size() - 1 - i]; // 
        nums[nums.size() - 1 - i] = temp;
    }
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

    int grid[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for(int row=0;row<3;row++){
        for(int col=0; col<3; col++){
            cout<<grid[row][col];
        }
        cout<<endl;
    }

}

