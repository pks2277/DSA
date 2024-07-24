#include<iostream>
using namespace std;

float circle_area(float r){
    float area=3.14*r*r;
    return area;
}

bool check_odd(int n){
    return n&1;
}

float KM_to_miles(float km){
    return km*0.621371;
}


int main()
{
    cout << check_odd(1);
    
    return 0;
}