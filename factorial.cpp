#include<iostream>
#include<vector>
using namespace std;

void create(vector<int>&nums,int n){
    for(int i =0;i<n;i++){
        int a;
        cout<<"enter values in array"<<endl;
        cin>>a;
        nums.push_back(a);
    }
    
}

int factorial(int n){
    if(n==1||n==0){
        return 1;
    }

    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    vector<int>nums;
    vector<int>vector;
    create(nums,n);

    cout<<"values in array is : "<<endl;

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<n;i++){
        int c=factorial(nums[i]);
        vector.push_back(c);
    }
    cout<<"factorial of all values of array : "<<endl;
        for(int i=0;i<n;i++){
        cout<< vector[i]<<endl;
    }

}