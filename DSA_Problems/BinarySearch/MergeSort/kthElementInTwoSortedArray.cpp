int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int m=arr2.size();
        
        int total_len=n+m;
        
        int gap=total_len/2+total_len%2;
        
        while(gap>0){
            int i=0,j=gap;
            
            while(j<total_len){
                if(j<n && arr1[i]>arr1[j])
                    swap(arr1[i],arr1[j]);
                
                else if(j >=n && i<n && arr1[i]>arr2[j-n])
                    swap(arr1[i],arr2[j-n]);
                    
                else if(j>=n && i>= n && arr2[i-n]>arr2[j-n])
                    swap(arr2[i-n],arr2[j-n]);
                    
                i++,j++;
            }
            gap=gap <= 1? 0: (gap/2)+(gap%2);
        }
        if(k>=0 && k<=n){
            return arr1[k-1];
        }
        else{
            return arr2[k-n-1];
        }
        return -1;
    }