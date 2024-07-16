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


    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout <<" ";
        }
        for(int k=n;k>0;k--){
            if(k==0 || k==i){
                cout << "* ";
            }
            else 
                cout << " ";
        }
    cout << endl;
    }