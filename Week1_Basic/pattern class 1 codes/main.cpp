#include <iostream>
using namespace std;

int main() {
    // int n;
    // if (cin >> n) {
    //     cout << "Prakhar";
    // }

    // if(cout<< n){
    //     cout << "Prakhar";
    // }

    // int n = 0;  // Initialize n to a known value
    // if (cout << n) {
    //     cout << "Prakhar";
    // }

    // cout << "*\n";
    // for(int i=0;i<3;i++){
    //     cout << "*";
    //     for(int j=1;j<=i+1;j++)
    //         cout << j;
    //     for(int j=i;j>0;j--)
    //         cout << j;
    //     cout << "*\n";
    // }
    //     for(int i=2;i>0;i--){
    //     cout << "*";
    //     for(int j=1;j<=i;j++)
    //         cout << j;
    //     for(int j=i-1;j>0;j--)
    //         cout << j;
    //     cout << "*\n";
    // }
    // cout << "*";



    
    // for(int i=0;i<5;i++){
    //     for(int j=i;j<5;j++)
    //         cout <<"*";
    //     for(int j=i;j>0;j--)
    //         cout << "  ";
    //     for(int j=i;j<5;j++)
    //         cout <<"*";

    //     cout << endl;
    // }
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<i+1;j++)
    //         cout << "*";
    //     for(int j=5;j>i+1;j--)
    //         cout << "  ";
    //     for(int j=0;j<i+1;j++)
    //         cout << "*";
    //     cout << endl;

    // }




    // for(int i=0;i<5;i++){
    //     for(int j=0;j<i+1;j++)
    //         cout << "*";
    //     for(int j=5;j>i+1;j--)
    //         cout << "  ";
    //     for(int j=0;j<i+1;j++)
    //         cout << "*";
    //     cout << endl;   
    // } 
    //     for(int i=0;i<5;i++){
    //     for(int j=i;j<5;j++)
    //         cout <<"*";
    //     for(int j=i;j>0;j--)
    //         cout << "  ";
    //     for(int j=i;j<5;j++)
    //         cout <<"*";

    //     cout << endl;
    // }   



    // cout << "\nHallow Pyramid\n";
    // int n=5;
    // for(int row=0;row<n;row=row+1){
    //     for(int col=0;col<n-row-1;col++){
    //         cout << " ";
    //     }
    //     for(int col=0;col<row+1;col++){
    //         if(col==0 || col==row){
    //             cout << "* ";
    //         }
    //         else{
    //             cout <<"  ";
    //         }
    //     }
    //     cout << endl;
    // }



     cout << "\nHallow Diamond\n";
    int n=5;
    for(int row=0;row<n;row=row+1){
        for(int col=0;col<n-row-1;col++){
            cout << " ";
        }
        for(int col=0;col<row+1;col++){
            if(col==0 || col==row){
                cout << "* ";
            }
            else{
                cout <<"  ";
            }
        }
        cout << endl;
    }
    for(int row=0;row<n;row=row+1){
        for(int col=0;col<row;col++){
            cout << " ";
        }
        for(int col=0;col< n-row;col++){
            if(col==0 || col== n-row-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }









    
        
    
    return 0;
}
