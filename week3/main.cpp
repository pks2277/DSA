#include<iostream>
#include<algorithm>
using namespace std;
int callByValueIncrement(int n){
    n=n+1;
    return n;
}
int callByRefrenceIncrement(int &n){
    n=n+1;
    return n;
}


#include <iostream>
using namespace std;

void segregate0and1(int arr[], int n) {
    int start = 0, end = n - 1;

    while (start < end) {
        if (arr[start] == 0) {
            start++;
        } else if (arr[end] == 1) {
            end--;
        } else {
            // Swap arr[start] and arr[end]
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}

void shift(int arr[], int n){
    int temp=arr[n-1];
    for(int i=n-1;i>=0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
int countSetBit(int n){
    int count=0;
    while(n){
        int bit=(n&1);
        if(bit==1){
            count++;
        }
        n>>=1;
    }
    return count;
}

int main() {

    // int n=6;
    // cout << callByValueIncrement(n) << endl;
    // cout << n << endl;
    // cout << callByRefrenceIncrement(n) << endl;
    // cout << n << endl;


    // int arr[] = {0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0};
    // int n = sizeof(arr) / sizeof(arr[0]);

    // segregate0and1(arr, n);

    // // Printing the array
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;



    // int arr[]={10,20,30,40,50,60};
    // shift(arr,6);
    //   // Printing the array
    // for (int i = 0; i < 6; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    int n=11;
    cout << countSetBit(11);


    return 0;
}
