/**
 * Sebastian
 * Juan Victor
 * Gabriel
*/



/*
#include <iostream>

using namespace std;

int main()
{   unsigned long long int n{600851475143};
    unsigned long long int x=2;
    while (n>1){
        if(n%x==0){
            n=n/x;
        }else{
            x=x+1;
        }
    }
    cout<<x;
    return 0;
    
}*/

#include <iostream>

using namespace std;
// #3

int MaxFacPrim(long long n) {
    int x = 2;
    while (n > 1){
        if (n%x==0)
            n=n/x;
        else
            ++x;
    }
    return x;
}
    
int main () {
    cout <<  MaxFacPrim(600851475143) << endl;
    return 0;
}