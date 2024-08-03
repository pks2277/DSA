// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     int requests[]={125,234,45,550,546};
//     int bandwidth[]={100,150,120,80,200};
//     int total_bw=200;
//     int totalReq=0;
//     int n = sizeof(bandwidth) / sizeof(bandwidth[0]);

//     for(int i=0;i<n-1;i++){
//         int tempBw=bandwidth[i];
//         int currReq=requests[i];
//         for(int j=i+1;j<n;j++){
//             if((tempBw+bandwidth[j])<=total_bw){
//                 tempBw += bandwidth[j];
//                 currReq += requests[j];
//             }
//         }
//         totalReq = max(totalReq,currReq);
//     }
//     cout << totalReq;
    
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int requests[] = {125, 234, 45, 550, 546};
    int bandwidth[] = {100, 150, 120, 80, 200};
    int total_bw = 200;
    int n = sizeof(bandwidth) / sizeof(bandwidth[0]);

    // Create a vector of pairs where each pair is (bandwidth, request)
    vector<pair<int, int>> bw_req;
    for (int i = 0; i < n; ++i) {
        bw_req.push_back({bandwidth[i], requests[i]});
    }

    // Sort the pairs by bandwidth
    sort(bw_req.begin(), bw_req.end());

    // Initialize variables
    int max_requests = 0;
    int current_bw = 0;
    int current_requests = 0;

    // Loop through the sorted pairs
    for (int i = 0; i < n; ++i) {
        // Check if adding the current bandwidth exceeds the total bandwidth
        if (current_bw + bw_req[i].first <= total_bw) {
            // If not, add the bandwidth and the requests
            current_bw += bw_req[i].first;
            current_requests += bw_req[i].second;
        } else {
            // If it exceeds, break the loop as we can't add more
            break;
        }
    }

    // Output the maximum requests
    cout << "Maximum total requests: " << current_requests << endl;

    return 0;
}
