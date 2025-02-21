// how many numbers are smaller than the current number 
// we could sort it first
#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

void smaller (int* nums,int size){
  unordered_map<int,int> map;
  int sorted[size];
  copy(nums,nums+size,sorted);
  sort(sorted,sorted+size);

  for(int i=0;i<size;++i){
    if(map.find(sorted[i])==map.end()){
        map[sorted[i]]=i;
    }    
  } 
  cout<<"[ "; 
  for(int i=0;i<map.size();++i)
    cout<<map[nums[i]]<<" ";
cout<<"]"<<endl;
}

int main(){
int nums[]={8,1,2,2,3};
smaller(nums,5);
}