  void merge(vector<int>&v, vector<int>&temp, int start, int mid, int end){
        int i = start, j = mid + 1;
        // first array = start -> mid
        // second array = mid + 1 -> end
        // merged array => start -> end
        int k = start;

        while(i <= mid && j <= end){
            if(v[i] <= v[j])
                temp[k++] = v[i++];
            else
                temp[k++] = v[j++];
        }

        // handle remaining elements in case of diff array size
        while(i <= mid)
            temp[k++] = v[i++];

         while(j <= end)
            temp[k++] = v[j++];

        // let;s copy merged data
        while(start <= end){
            v[start] = temp[start];
            start++;
        }
    }