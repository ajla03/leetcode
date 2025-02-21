#include<iostream>
#include<unordered_map>
using namespace std;
// BRUTE FORCE SOLUTION!!!
// Problem with this approuch is time complexity 
// Its O(n*n), so yeah, not ideal XD, ;)


void two_num (int* nums, int size, int target){
  int ret_val[2];
  for(int i=0; i<size; ++i){
   for(int j=i+1; j<size-1; ++j){
        if((nums[i]+nums[j])==target){
        ret_val[0]=i;
        ret_val[1]=j;
        cout<<"["<<ret_val[0]<<","<<ret_val[1]<<"]"<<endl;
        return; 
        }
     }
  }
cout<<"Couldnt find indices!"<<endl;
}

int main(){
    int nums[4]={3,2,4};
    two_num(nums,4,6);

}



// Bolje rjesenje je koristiti hash mapu!
// hash mapa je u cppu unordered_map
// nisu sortirani elementi po kljucu kao sto je slucaj kod mape 
void two_nums(int *nums,int size, int target){
 unordered_map<int,int> map;
 unordered_map<int,int>::iterator it;
 for(int i=0;i<size;++i){
    it=map.find(target-nums[i]);
    if(it!=map.end()){
       cout<<"["<<it->second<<" "<<i<<"]"<<endl;  
       return;
    }
    map[nums[i]]=i;
 }
 cout<<"Couldnt find idices of array whose sum would match up to target!";
}

int main(){
    int nums[4]={3,2,4};
    two_nums(nums,4,6);
    return 0;
}