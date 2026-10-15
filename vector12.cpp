#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



void write(vector<int> &nums){
  
    int n;
    int i;
    cout<<"enter vector size"<<endl;
    cin>>n;

    for(i=0;i<n;i++){
        int a;
        cout<<"enter value"<<endl;
        cin>>a;
        nums.push_back(a);

    }
}


    void print(vector<int> nums)
    {
        for(int i=0;i<nums.size();i++){
            cout<<"vector vlaues is : "<<nums[i]<<endl;

        }

    }


  int sortsum(vector<int> nums){
        sort(nums.begin(),nums.end());
        int sum=nums[1]+nums[nums.size()-3];
        return sum;
    }

    int main(){
        vector<int> nums;
        write(nums);
        print(nums);
        int c = sortsum(nums);
        cout<<"sum of second smallest number and third largest number is : "<< c<<endl;
return 0;
    }

    

