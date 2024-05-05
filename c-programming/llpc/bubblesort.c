#include <stdio.h>

int main(){

    int numbers[9] = {3,2,5,7,8,1,4,6,9}; 

    int i = 0 ; 
    int j = 0 ;
    int aux = 0 ;
    for (i = 0 ; i < 8; i++){
        for (j = i+1; j < 9; j++){
            if (numbers[j] < numbers[i]){
                aux = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = aux;
            }   
        }
    }

    int k = 0 ;

    for (k = 0; k < 9; k++){
        printf("%d\n", numbers[k]);
    }
    return 0;
}
