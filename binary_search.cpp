#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void create(vector<int>&nums){
    int n;
    cout<<"enter vector size"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        int a;
        cout<<"enter value"<<endl;
        cin>>a;
        nums.push_back(a);
    }
}

void sort(vector<int>&nums){
    sort(nums.begin(),nums.end());
}

int bin_recursive(vector<int>nums,int low,int high,int target){
    if(low>high){
        return -1;
    }

    int mid=(low+high)/2;

    if(nums[mid]==target){
    return mid;
    }

    if(nums[mid]>target){
    return bin_recursive(nums,low,mid-1,target);
    }

    else{
        return bin_recursive(nums,mid+1,high,target);

    }
    
}

int bin_search(vector<int>nums,int low,int high,int target){
    

    while(low<=high){
       int mid=(low+high)/2;

        if(nums[mid]==target)
        return mid;

        if(nums[mid]>target){
         high=mid-1;
        }
        else{
            low=mid+1;
        }
        
}
    return -1;
}


int main(){
    vector<int>nums;
    create(nums);
    sort(nums);
    int target;
    cout<<"enter target"<<endl;
    cin>>target;

    int c= bin_recursive(nums,0,nums.size()-1,target);
   if(c!=-1){
   cout<<"target found at index : "<<c<<endl;
   }
   else{
    cout<<"target not found"<<endl;
   }
   

   int d=bin_search(nums,0,nums.size()-1,target);
   if(d!=-1){
    cout<<"target found at index : "<<d<<endl;
   }
   else{
    cout<<"target not found"<<endl;
   }
}

