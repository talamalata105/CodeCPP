#include <iostream>
#include <math.h>
#include<stdio.h>

using namespace std;

int main(){
    int a,b,c;
    
    a =2 ;
    b =4 ;
    c =2 ;
    
    if (a == 0) {
        if (b == 0 && c == 0) {
            cout<<"INF";
            return 0;
        }
        if (b == 0 && c != 0) {
            cout<<"NO";
            return 0;
        }
        if (b != 0 && c == 0){
            printf("%0.2f",0);
        }
        if (b != 0 && c != 0){
            float x1 = c/b;
            printf("%0.2f",x1);
            cout<<x1;
        }
    }else{
        
        int delta = b * b - 4 * a * c;

        if (delta<0) cout<< "NO";
        else if (delta == 0) {
            float x = - b/( 2 * a);
            printf("%0.2f",x);
            }
        else {
            

            double x1 = ( -b - sqrt(delta)) / ( 2 * a );
            double x2 = ( -b + sqrt(delta)) / ( 2 * a );
            if (x1 == 0) x1 = 0;
            if (x2 == 0) x2 = 0;
            if (x1 > x2) {
                float tm = x1;
                x1 = x2;
                x2 = tm;
            }
            printf("%0.2f",x1);
            cout<<" ";
            printf("%0.2f",x2);
        }
    }
    
    return 0;
}