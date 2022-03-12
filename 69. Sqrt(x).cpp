#include<iostream>
using namespace std;
int sqroot(int num){
    int n=num;
    int s=1;int e=n;
    int mid=0;

    while(s<=e){

        int sqr = mid*mid;
        if(sqr==num){
            return mid;
        }
        else if(mid*mid>num){
            e=mid-1;
        }
        else
        {
          s=mid+1;
        }
         mid = (s+e)/2;
      
            }
            return mid;
}
int main(){
   int n;
   cin>>n;
   cout<<sqroot(n);
    return 0;
}
