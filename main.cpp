#include <iostream>

using namespace std;


//Si se imprimiera todos los n ́umeros naturales menores que 10, los cuales sean multiplos de 3 o 5, obtendr ́ıamos: 3, 5, 6, 9.La suma de estos m ́ultiplos es 23. Encontrar la suma de todos los m ́ultiplos de 3 y 5 menores a 1000000.
/*
int main()
{
	int suma = 0;
	int n = 1000;
	for(int i = 0; i < n; i++)
	{
		if(3*i < n)
			suma += 3*i;
		if(5*i < n && (5*i) % 3 != 0)
			suma += 5*i;
	}
	cout << "la suma de los multiplos de 3 y 5 es: " << suma << endl;
}
*/
//Implemente una funci ́on que encuentre el factorial de un n ́umero, tanto de la forma iterativa como de la forma recursiva.
/*
int main()
{
   int n,i;
   long long factorial;
   cout << "Introduce un numero: ";
   cin >> n;
   factorial=1;
   for(i=1;i<=n;i++)
        factorial = factorial * i;
   cout << endl << "Factorial de " << n << " -> " << factorial << endl;
}
*/

//Implemente un programa que solicite un n ́umero n e imprima todos los n ́umeros perfectos menores a n.

int main()
{
    int n=1,x=1,suma=0,maxnumero;
    cout<<"ingresa el numero maximo"<<endl;
    cin>>maxnumero;
    while(n<=maxnumero)
    {
        while(x<=(n/2))
        {
            if(n%x==0)
            {
                suma=suma+x;
                x=x+1;
            }
            if(n==suma)
            {
                n=n+1;
                x=1;
                suma=0;
                cout<<n<<", Es perfecto"<<endl;
            }

        }
    }
return 0;
}



//Los factores primos de 13195 son 5, 7, 13 y 29. ¿Cual es el mayor factor primo de 600851475143?
/*
main()
{
    long long i,num=600851475143;

    for (i=3;i!=num;i+=2)
    {
        if (num%i==0){
            num=num/i;
        }
    }

    cout<<"El mayor factor primo de el numero -> 600851475143 es : "<< num;

    return 0;
}
*/
