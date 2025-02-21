// find minimal time to visit all points, in 1 sex we can move: 
// -> vertically by onw unit 
// -> horizontally by one unit
// -> diagonally sqrt(2), in other words one unit vertically and then one horizontally 
#include<iostream>
using namespace std;
struct point{
 int x;
 int y;
 
 point(int x_, int y_){
    x=x_;
    y=y_;
 } 
};

int min_time(point* points, int size){
  int ret_val=0;
  for(int i=0;i<size;++i){
    if(i==size-1)
      return ret_val;
    ret_val+=max(abs(points[i].x-points[i+1].x),abs(points[i].y-points[i+1].y)); //main logic 
  }
  return ret_val;
}

int  main(){
point ps[]={point(1,1),point(3,4),point(-1,0)};
cout<<min_time(ps,3)<<endl;
}