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
//     // keep inserting it will manage the allocations
//     vector<int> v;     // default with no data 0 size

//     vector<int> arr2(5,-1);
//     print(arr2);

//     vector<int> arr3={1,2,3,4,5};
//     print(arr3);

//     vector<int> arr4{1,2,3,4,5};
//     print(arr4);

//     vector<int> arr5(arr2);
//     print(arr5);

//     // push operation
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//    print(v);
//     cout << endl;
//     cout << v.capacity();
//     cout << endl;

//     // pop -> delete -> END
//     v.pop_back();
//     v.pop_back();
  
//     print(v);
//     cout << endl;
//     cout << v.capacity();
//     cout << endl;


//      int n; cin >>n;
//      for(int i=0;i<n;i++){
//         int d; cin >> d;
//         v.push_back(d);
//      }
//      print(v);
//      for(int i=0;i<30;i++){
//         v.push_back(i);
//      }
//      print2(v);

    











//     vector<int> arr1;
//      cout << "Sizx of vector1: " << arr1.size();
//   // vector<int> arr(5);
//   vector<int> arr(5,101);


// //   insert
//   arr.push_back(4);
//   arr.push_back(8);
//   arr.push_back(12);
//   arr.push_back(11);
//   arr.push_back(4);

//   cout << arr.size() << endl;

//   cout << arr.empty() << endl;
  

//   cout << "Sizxe of vector: " << arr.size();
//   cout << endl;
//   print(arr);

  // cout << endl << "Printing vector" << endl;
  // for(int i=0; i<v.size(); i++) {
  //  cout << v[i] <<" ";
  // }cout << endl;

//   2D Array
//   vector< vector<int> > arr(5, vector<int>(10,-1));
//   //row size -> arr.size()
//   for(int i=0; i<arr.size(); i++) {
//    for(int j=0; j<arr[i].size(); j++) {
//      cout << arr[i][j] << " ";
//    }
//    cout << endl;
//   }

  //Jagged Array  - HW

  vector< vector<int> > brr;


  vector<int> vec1(10,0);
  vector<int> vec2(5,1);
  vector<int> vec3(7,0);
  vector<int> vec4(8,1);
  vector<int> vec5(20,0);

  brr.push_back(vec1);
  brr.push_back(vec2);
  brr.push_back(vec3);
  brr.push_back(vec4);
  brr.push_back(vec5);

  for(int i=0; i<brr.size(); i++) {
    for(int j=0; j<brr[i].size(); j++) {
      cout << brr[i][j] << " ";
    }
    cout << endl;
  }




    return 0;
}