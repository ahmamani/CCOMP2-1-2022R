/**
 * Klinsman
*/
#include<iostream>
using namespace std;

int dif_sum_cuadrada(int lim){
    int sum1,sum2,expo,resta;
    sum1 = 0;
    sum2 = 0;
    for(int i=1;i<=lim;i++){
        sum1 = (sum1 + (i*i));
    }
    cout << sum1 << endl;

    for(int j=1; j<=lim;j++){
        sum2 = (sum2+j);
    }
    expo = (sum2*sum2);
    cout << expo << endl;
    resta = expo-sum1;
    cout << expo << "-" << sum1 <<"="<< resta<< endl;
}
int main(){
    
    dif_sum_cuadrada(100);
    
    return 0;
}