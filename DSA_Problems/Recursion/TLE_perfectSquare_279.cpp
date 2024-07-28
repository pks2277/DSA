int numSquareHelper(int n){
     if (n==0) return 1;
    if(n<0 ) return 0;
    int ans=INT_MAX;
    int i=1;
    int end=sqrt(n);
     while(i<=end){
         int perfectSquare=i*i;
         int noofPerfectSquare=1+numSquareHelper(n-perfectSquare);
         if(noofPerfectSquare <ans){
            ans=noofPerfectSquare;
         }
         i++;
     }
     return ans;
}

int numSquare(int n){
    return numSquareHelper(n) -1;
}