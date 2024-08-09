long long merge(long long arr[], vector<long long>& temp, int start, int mid, int end) {
    int i = start, j = mid + 1, k = start;
    long long inv_count = 0;

    // Merge the two halves while counting inversions
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1); // All remaining elements in the left half are greater than arr[j]
        }
    }

    // Copy the remaining elements of the left half, if any
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy the remaining elements of the right half, if any
    while (j <= end) {
        temp[k++] = arr[j++];
    }

    // Copy the merged subarray into the original array
    for (i = start; i <= end; i++) {
        arr[i] = temp[i];
    }

    return inv_count;
}

long long mergeSort(long long arr[], vector<long long>& temp, int start, int end) {
    long long inv_count = 0;
    if (start < end) {
        int mid = start + (end - start) / 2;

        // Count inversions in the left half
        inv_count += mergeSort(arr, temp, start, mid);

        // Count inversions in the right half
        inv_count += mergeSort(arr, temp, mid + 1, end);

        // Count and merge the two halves
        inv_count += merge(arr, temp, start, mid, end);
    }
    return inv_count;
}

long long int inversionCount(long long arr[], int n) {
    vector<long long> temp(n);
    return mergeSort(arr, temp, 0, n - 1);
}