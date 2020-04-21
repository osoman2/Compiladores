%{
    #include<stdio.h>
    int lineas = 0;
    int palabras = 0;
    int caracteres = 0;
%}

%%

[\n] {lineas++;palabras++;}
[a-zA-Z]+       {caracteres++;}
[0-9]+          {caracteres++;}
[ ]             {caracteres++; palabras++;}
%%
void main(){

    printf("El número de lineas es: %d\n",lineas);
    printf("El número de palabras es: %d\n",palabras);
    printf("El número de caracteres es: %d\n",caracteres);
}
