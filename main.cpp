//Se desea calcular el factorial de un número entero.
//El factorial de 5 es 5 x 4 x 3 x 2 x 1
//El factorial de 6 es 6 X 5 x 4 x 3 x 2 x 1
//El factorial de 4 es 1 X 2 X 3 X 4

#include <iostream>
using namespace std;

int main(){
int i;
int fact=1;
int numero;

cout<< "ingresa un numero: "; 
cin>>numero;

if (numero<0) {fact =0;}
else if (numero==0) {fact=1;}
else {
for (i = 1; i <= numero; i++){
fact = fact*i;
}
}
cout<<" El Factorial de "<< numero<< " es: " << fact << endl;

return 0;
}
