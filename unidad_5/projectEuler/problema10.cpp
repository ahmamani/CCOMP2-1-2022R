/**
 * Paul
*/
#include <iostream>
#include <cmath>
using namespace std;

bool primo(unsigned int n){
    for (int x{3};x<=sqrt(n);x+=2){
        if (n%x==0)
            return 0;
    }
    return 1;
}

int main(){
	int f{2000000};
	long long total{2};
	for (int i{3};i<=f;i+=2){
		if (primo(i)){
			total+=i;
		}
	}
	cout<<total;

	return 0;
}