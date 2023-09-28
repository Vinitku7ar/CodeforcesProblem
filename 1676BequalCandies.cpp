#include <iostream>
using namespace std;

int minimum(int arr[],int size){
    int min=arr[0];
  
    
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        
    }
    return min;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int sum=0;
        int size;
        cin>>size;
         int candies[size];
          for(int i=0;i<size;i++){
            cin>>candies[i];
        }
       
      
        int target=minimum(candies,size);
        
        for(int i=0;i<size;i++){
            if(target<candies[i]){
               sum+=candies[i]-target;
            }
        }

        cout<<sum;
    }
  return 0;
}