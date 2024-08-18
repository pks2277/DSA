#include<iostream>
#include<algorithm>
using namespace std;

int main2()
{
    // const int x=5; // x is constant
    //initializatiion can be done , but can't assign new value
    // x=10; // error: assignment of read-only variable 'x'
    // cout << x << endl;



    // // CONST data, NON-CONST pointer
    // cont int *a=new int(2) ;       // int const *a=new int(2);
    // cout << *a << endl;
    // // *a =20; // cant change the content of pointer
    // int b=20;
    // a=&b;   // pointer itself can be reassigned 
    // cout << *a << endl;



    // //CONST pointer ,NON-CONST data
    // int *const a=new int(2);
    // cout << *a << endl;
    // *a=20;  // no error
    // cout << *a << endl;
    // int b=50;
    // a=&b;  // nhi chalega , CONST pointer


    // // CONST pointer , CONST data
    // const int *const a=new int(10);
    // cout << *a << endl;
    // *a=50;    // nhi chalega
    // int n=100;
    // a=&b;    // nhi chalegega


    return 0;
}

class abc{
    int x;   // if you want to change the value then do mutable int x;
    int *y;
    int z;
public:
    // abc(int _x,int _y,int _z=0){
    //     x=_x;
    //     y= new int(_y);
    //     z=_z;
    // }

    // initilization list   // constructor -> while making a some constant it is used  // non -onst can be changed
    abc(int _x,int _y , int _z=0) :x(_x),y(new int(_y)), z(_z){}
    int getX() const{
        return x;        // after making mutable you can assign new values
    }
    void setX(int _val){
        x=_val;      
    }

    int getY() const{
        return *y;
    }

    void setY(int _val){
    *y=_val;
    }

    int getZ() const{
        return z;
    }

    void setZ(int _val){
        z=_val;
    }

};
void printABC(const abc &a)
{
    cout << a.getX() << " " << a.getY() << " " << a.getZ()<< endl;
}
int main(){
    abc a(1,2,3);
    printABC(a);
    return 0;
}