#include<iostream>
#include<algorithm>
using namespace std;

    int setKthBit(int N,int K){
        int temp=1<<K;
        return temp | N;
    }
