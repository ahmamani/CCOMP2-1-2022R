/**
 * Diego
 */
#include <iostream>

int multiplos(int a){
	int suma=0;
	for (int x=1;x<a;x++){
		if (x%3==0 || x%5==0){
			suma=suma+x;
		}
	}
	return suma;
}	
int main(){
	std::cout<<multiplos(1000);
	return 0;
}

