#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;

void printArray(int *arr, int size, int index) {
	//base case
	if(index >= size) {
		return ;
	}
	//processing
	cout << arr[index] << " ";
	
	//recursive call
	printArray(arr, size, index+1);

}

bool searchArray(int arr[], int size, int target, int index ) {
	//base cass
	if(index >= size) {
		return false;
	}
	if(arr[index] == target) {
		return true;
	}

	//recursive call
	bool aageKaAns =  searchArray(arr, size, target, index+1);
	return aageKaAns;
}

void findMin(int arr[], int size, int index, int &mini) {
	//base case
	if(index >= size ) {
		return;
	}

	//processing
	mini = min(mini, arr[index]);

	//Recursive call
	findMin(arr, size, index+1 , mini);
	
}

//solve() -> store even numbers in array into vector
void solve(int arr[], int size, int index, vector<int> &ans) {
	//base case
	if(index >= size) {
		return;
	}
	//processing
	if(arr[index]%2 == 0) {
		//even
		ans.push_back(arr[index]);
	}
	//Recursive call
	solve(arr, size, index+1, ans);
}



void doubleArr(int arr[], int index,int size){
	if(index>=size){
		return;
	}
	arr[index]=2*arr[index];

	doubleArr(arr,index+1,size);
}

void findMax(int arr[], int index, int size, int &maxi){
	if(index>=size){
		return;
	}
	maxi=max(maxi,arr[index]);
	
	findMax(arr,index+1,size,maxi);
}


int findArr2(int arr[], int index,int size,int target){
	if(index>=size){
		return -1;
	}
	if(arr[index]==target){
		return index;
	}
	findArr2(arr,index+1,size,target);
}



void findArr3(int arr[], int index,int size,int target){
	if(index>=size){
		return;
	}
	if(arr[index]==target){
		cout << index << endl;
	}
	findArr3(arr,index+1,size,target);
}



void findArr4(int arr[], int index,int size,int target, vector<int> &ans){
	if(index>=size){
		return;
	}
	if(arr[index]==target){
		ans.push_back(index);
	}
	findArr4(arr,index+1,size,target,ans);
}



void printDigits(int num, vector<int>& ans) {
	//base case
	if(num == 0) {
		return;
	}

	//processing
	int digit = num % 10;

	//Recursive call
	printDigits(num/10,ans);

	//processing
	ans.push_back(digit);
}

void Makingnum(vector<int> num,int index, int size,int &ans){
	if(index>=size){
		return ;
	}
	ans = ans*10 + num[index];
	Makingnum(num,index+1,size,ans);
}



int main() {

	// int arr[] = {11,20,31,40,51};
	// int size = 5;
	// int index = 0;
	
	// vector<int> ans;
	// solve(arr, size, index, ans);
	// doubleArr(arr,index,size);

	//printing vector
	// for(int num: arr) {
	// 	cout << num << " ";
	// }

	// for(int i=0; i<ans.size(); i++) { 
	// 	cout << ans[i] << " ";
	// }

	// int mini = INT_MAX;
	// findMin(arr, size, index, mini);
	// cout << "Minimum number in array: " << mini << endl;

	
	// int target = 51;
	// cout <<"Tagret found or not: "<< searchArray(arr,size,target, index) << endl;
	// printArray(arr,size, index);


	// int maxi=INT_MIN;
	// findMax(arr,index,size,maxi);
	// cout << "Maximum number in array: " << maxi << endl;

	// int target = 51;
	// int arr2[]={51,51,41,41,51};
	// int size = 5;
	// int index = 0;
	// vector<int> ans;

	// findArr4(arr2,index,size,target,ans);
	// for(int num: ans) {
	// 	cout << num << endl;
	// }


	// int num = 4217;
	// vector<int> ans;
	// printDigits(num,ans);

	// for(int num: ans) {
	// 	cout << num << endl;
	// }


	vector<int> num={4,2,1,7};
	int ans=0;
	Makingnum(num,0,4,ans);
	cout << ans;











	return 0;
}