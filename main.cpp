#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int dimensione;
    cin>>dimensione;
    float numeri [dimensione];
    for (int i=0;i<dimensione; i++){
        cin>>numeri [i];
    }
   float max=array(numeri,dimensione);
    cout<<max;

    return 0;
}
