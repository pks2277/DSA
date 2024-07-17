#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";      // v.at(i);
    }
    cout << endl;
}

void print2(vector<int> v){
    for(auto it:v){
        cout << it;
    }
}

int main()
{
    // keep inserting it will manage the allocations
    vector<int> v;     // default with no data 0 size

    vector<int> arr2(5,-1);
    print(arr2);

    vector<int> arr3={1,2,3,4,5};
    print(arr3);

    vector<int> arr4{1,2,3,4,5};
    print(arr4);

    vector<int> arr5(arr2);
    print(arr5);

    // push operation
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
   print(v);
    cout << endl;
    cout << v.capacity();
    cout << endl;

    // pop -> delete -> END
    v.pop_back();
    v.pop_back();
  
    print(v);
    cout << endl;
    cout << v.capacity();
    cout << endl;


     int n; cin >>n;
     for(int i=0;i<n;i++){
        int d; cin >> d;
        v.push_back(d);
     }
     print(v);
     for(int i=0;i<30;i++){
        v.push_back(i);
     }
     print2(v);

    
    return 0;
}