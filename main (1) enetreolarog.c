//
//  main.c
//  Taller 2 - EdD - 2024.1
//

#ifndef entero_largo_h
#define entero_largo_h
#include "entero_largo.h"
#endif /* entero_largo_lista_h */

//Esta función se utiliza para mostrar resultados en la función
// main() de ejemplo
//Su utilización es opcional
void imprime(char *antes, EnteroLargo *numero, char *despues){
    printf("%s", antes);
    muestraEnteroLargo(numero);
    printf("%s", despues);
}


//Use la función main para probar las funciones de entero largo a
//medida que las vaya implementando
//El código incluido es un ejemplo, puede usarlo, modificarlo o usar
//otro
int main() {
    //creación y muestra
    
    EnteroLargo *numero1 = creaEnteroLargoDesdeStr("0");
    EnteroLargo *numero2 = creaEnteroLargoDesdeStr("123");
    EnteroLargo *numero3 = creaEnteroLargoDesdeStr("2345");
    EnteroLargo *numero4 = creaEnteroLargoDesdeStr("-123");
    EnteroLargo *numero5 = creaEnteroLargoDesdeStr("-2345");
    imprime("numero1 debería ser 0 y es ", numero1, "\n");
    imprime("numero2 debería ser 123 y es ", numero2, "\n");
    imprime("numero3 debería ser 2345 y es ", numero3, "\n");
    imprime("numero4 debería ser -123 y es ", numero4, "\n");
    imprime("numero5 debería ser -2345 y es ", numero5, "\n");
    
    
    //conversion a str
    
    printf ("strings \n");
    printf("numero1 debería ser 0 y es %s \n", creaStrDesdeEnteroLargo(numero1));
    printf("numero2 debería ser 123 y es %s \n", creaStrDesdeEnteroLargo(numero2));
    printf("numero3 debería ser 2345 y es %s \n", creaStrDesdeEnteroLargo(numero3));
    printf("numero4 debería ser -123 y es %s \n", creaStrDesdeEnteroLargo(numero4));
    printf("numero5 debería ser -2345 y es %s \n", creaStrDesdeEnteroLargo(numero5));
    
    
    //copia
/*     
    copiaEnteroLargo(numero2, numero5);
    imprime("despues de copiar, numero2 debería ser -2345 y es ", numero2, "\n");
    copiaEnteroLargo(numero2, numero1);
    imprime("despues de copiar, numero2 debería ser +0 y es ", numero2, "\n");
*/    
/*
    //prueba de eliminar
    eliminaEnteroLargo(numero2);
    imprime("despues de copiar, numero2 debería ser +0 y es ", numero2, "\n");
*/
    //copiaEnteroLargo(numero2, numero5);
    
/*
    //TEST IGUALDAD NUMEROS
    imprime("2= ", numero2, "\n");
    imprime("5= ", numero5, "\n");
    if(igualEnteroLargo(numero2,numero5)==1){
        printf("TRUE");
    }else{
        printf("FALSE");
    }
*/
    //escribe y lee
/*

    
    escribeEnteroLargo("enterolargo.bin", numero5);
    EnteroLargo *numero6 = leeEnteroLargo("enterolargo.bin");
    imprime("despues de leer el archivo, numero6 debería ser -2345 y es ", numero6, "\n");
    EnteroLargo *numero100 = creaEnteroLargoDesdeStr("76548");
    escribeEnteroLargo("enterolargo2.bin", numero100);
    EnteroLargo *numero101 = leeEnteroLargo("enterolargo2.bin");
    imprime("despues de leer el archivo, numero101 debería ser 76548 y es ", numero101, "\n");
*/
    //suma
/* 
    printf("\nSECCIÓN SUMA\n");

    EnteroLargo *numero7 = creaEnteroLargoDesdeStr("123");
    EnteroLargo *numero8 = creaEnteroLargoDesdeStr("9999");
    EnteroLargo *numero9 = sumaEnteroLargo(numero7, numero8);
    imprime("numero9: 123+9999=10122 -> ",numero9,"\n");
     
    EnteroLargo *numero10 = creaEnteroLargoDesdeStr("-123");
    EnteroLargo *numero11 = creaEnteroLargoDesdeStr("-9999");
    EnteroLargo *numero12 = sumaEnteroLargo(numero10, numero11);
    imprime("numero12:  (-123)+(-9999)=-10122 -> ",numero12,"\n");

    EnteroLargo *numero14 = sumaEnteroLargo(numero7, numero10);
    imprime("numero14: 123+(-123)=0 -> ",numero14,"\n");
    EnteroLargo *numero15 = sumaEnteroLargo(numero11, numero7);
    imprime("numero15:(-9999)+123=-9876 -> ",numero15,"\n");

    printf("FIN SECCIÓN SUMA\n\n"); */

    //resta
/* 
    printf("\nSECCIÓN RESTA\n");

    EnteroLargo *numero19 = creaEnteroLargoDesdeStr("123");
    EnteroLargo *numero20 = creaEnteroLargoDesdeStr("9999");
    EnteroLargo *numero22 = creaEnteroLargoDesdeStr("-123");
    EnteroLargo *numero23 = creaEnteroLargoDesdeStr("-9999");
    EnteroLargo *numero21 = restaEnteroLargo(numero19, numero23);
    imprime("numero21: 123 - (-9999)=10122 -> ",numero21,"\n");
    EnteroLargo *numero24 = restaEnteroLargo(numero22, numero19);
    imprime("numero24: (-123)-123=-246 -> ",numero24,"\n");
    EnteroLargo *numero25 = restaEnteroLargo(numero19, numero20);
    imprime("numero25: 123-9999=-9876 -> ",numero25,"\n");
    EnteroLargo *numero26 = restaEnteroLargo(numero22, numero23);
    imprime("numero26: (-123)-(-9999)=9876 -> ",numero26,"\n");
    
    printf("FIN SECCIÓN RESTA\n\n");
*/
    //suma y resta
/* 
    printf("\nSECCIÓN SUMA Y RESTA\n");
    
    EnteroLargo *numero30 = creaEnteroLargoDesdeStr("800");
    EnteroLargo *numero31 = creaEnteroLargoDesdeStr("795");
    EnteroLargo *numero32 = restaEnteroLargo(numero31, numero30);
    imprime("numero32: 795-800=-5 -> ",numero32,"\n");
    EnteroLargo *numero34 = restaEnteroLargo(numero30, numero31);
    imprime("numero34: 800-795=5 -> ",numero34,"\n");
    EnteroLargo *numero33 = sumaEnteroLargo(numero31, numero30);
    imprime("numero33: 795+800=1595 -> ",numero33,"\n");
    EnteroLargo *numero50 = creaEnteroLargoDesdeStr("100");
    EnteroLargo *numero51 = creaEnteroLargoDesdeStr("1");
    EnteroLargo *numero52 = restaEnteroLargo(numero50, numero51);
    imprime("numero52: 100-1=99 -> ",numero52,"\n");
    EnteroLargo *numero53 = restaEnteroLargo(numero51, numero50);
    imprime("numero53: 1-100=-99 -> ",numero53,"\n");
    
    printf("FIN SECCIÓN SUMA Y RESTA\n\n");
*/
    //multiplica
/* 
    printf("\nSECCIÓN MULTIPLICACIÓN\n");
    
    EnteroLargo *numero40 = creaEnteroLargoDesdeStr("1000");
    EnteroLargo *numero41 = creaEnteroLargoDesdeStr("100");
    EnteroLargo *numero42 = creaEnteroLargoDesdeStr("-1");
    EnteroLargo *numero43 = creaEnteroLargoDesdeStr("-1000");
    EnteroLargo *numero44 = creaEnteroLargoDesdeStr("-7");
    EnteroLargo *numero45 = multiplicaEnteroLargo(numero40, numero41);
    imprime("numero45: 1000*100=100000 -> ",numero45,"\n");
    EnteroLargo *numero46 = multiplicaEnteroLargo(numero40, numero42);
    imprime("numero46: 1000*(-1)=-1000 -> ",numero46,"\n");
    EnteroLargo *numero47 = multiplicaEnteroLargo(numero42, numero40);
    imprime("numero47: (-1)*1000=-1000 -> ",numero47,"\n");
    EnteroLargo *numero48 = multiplicaEnteroLargo(numero43, numero44);
    imprime("numero48: (-1000)*(-7)=7000 -> ",numero48,"\n");
    
    printf("FIN SECCIÓN MULTIPLICACIÓN\n\n");
*/
    //divide
/* 
    printf("\nSECCIÓN DIVISIÓN\n");
    //probar todas las combinaciones de signo
    
    EnteroLargo *numero70 = creaEnteroLargoDesdeStr("100");
    EnteroLargo *numero71 = creaEnteroLargoDesdeStr("3");
    EnteroLargo *numero72 = creaEnteroLargoDesdeStr("-3");
    EnteroLargo *numero73 = creaEnteroLargoDesdeStr("-1000");
    EnteroLargo *numero73_1 = creaEnteroLargoDesdeStr("0");
    EnteroLargo *numero73_2 = creaEnteroLargoDesdeStr("5");
    EnteroLargo *numero75 = divideEnteroLargo(numero70, numero71);
    imprime("numero75: 100/3=33 -> ",numero75,"\n");
    EnteroLargo *numero76 = divideEnteroLargo(numero70, numero72);
    imprime("numero76: 100/(-3)=-33 -> ",numero76,"\n");
    EnteroLargo *numero77 = divideEnteroLargo(numero73, numero71);
    imprime("numero77: (-1000)/3=-333 -> ",numero77,"\n");
    EnteroLargo *numero78 = divideEnteroLargo(numero73, numero72);
    imprime("numero78: (-1000)/(-3)=333 -> ",numero78,"\n");
    EnteroLargo *numero79 = divideEnteroLargo(numero72, numero73);
    imprime("numero79: (-3)/(-1000)=0 -> ",numero79,"\n");
    EnteroLargo *numero73_3 = divideEnteroLargo(numero73_1, numero73_2);
    imprime("numero73_3: (0)/(5)=0 -> ",numero73_3,"\n");
    EnteroLargo *numero73_4 = divideEnteroLargo(numero73_2, numero73_1);
    imprime("numero73_4: (5)/(0)=0 -> ",numero73_4,"\n");
    
    printf("FIN SECCIÓN DIVISIÓN\n\n");
*/
    //La siguiente operación puede demorar en completarse
/*
    EnteroLargo *unNumero2 = creaEnteroLargoDesdeStr("2");
    EnteroLargo *unNumeroGrande = creaEnteroLargoDesdeStr("100000000");
    EnteroLargo *unResultado = divideEnteroLargo(unNumeroGrande, unNumero2);
    imprime("unResultado: 100000000/2=50000000 -> ",unResultado,"\n");
*/
    
 return 0;
}
