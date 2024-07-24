#include<iostream>
#include<algorithm>
using namespace std;

void seperatePosAndNeg(int arr[],int n){
    int left=0,right=n-1;
    while(left<=right){
        if(arr[left]>0 ){
            if(arr[right]<0){
                swap(arr[left],arr[right]);
                left++;
                right--;
            }
            else{
                right--;
            }
        }
        else{
            left++;
        }
    }
}


int main()
{
    int arr[]={-23,-243,-35,-24,-34,-23,0,-20,-54};
    int n=9;


    seperatePosAndNeg(arr,n);
    cout<< "Printing";
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }

    
    return 0;
}