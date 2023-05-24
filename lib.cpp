#include "lib.h"

float array (float numeri [],int dimensione){
    float max =numeri [0];
    for (int i=0;i<dimensione;i++){
        if(max<numeri[i]){
            max=numeri[i];
       }
    }return max;
}
