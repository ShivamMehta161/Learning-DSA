// bitwise operator
#include<iostream>
using namespace std;
int main(){
    
    //finding unique element in list using bitwise xor 
    int arr[7]={1,1,2,2,3,4,4};
    int result=arr[0];
    for(int i=1;i<7;i++){
        result=arr[i]^result;
    }
    cout<<result;
}