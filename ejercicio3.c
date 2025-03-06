/* 
Bautista de Jesus Héctor Eduardo
Ejercicio 1
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int res = 0;
    int i;
    
    for(i=0; i<11;i++){
        res =res+i;
    }
    printf("solucion1 El numero es: %d\n", res);
    res = 0;
    
    for(i=1; i<=10;i++){
    res =res+i;
    }
    printf("solucion2 El numero es: %d\n", res);
    res = 0;
    
    for(i=0; i<=10;i++){
    res =res+i;
    }
    printf("solucion3 El numero es: %d\n", res);
    res = 0;
    
    for(i=1; i<11;i++){
    res =res+i;
    }
    printf("solucion4 El numero es: %d\n", res);
    return 0;
    


}
