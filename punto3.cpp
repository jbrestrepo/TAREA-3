//INT ARRAY

#include <iostream>
#include <string>

using namespace std;

void initializeArray (int *numbers,int a,int b,int c,int d,int e,int f,int g,int h,int i,int j);
int* maxvalue (int *numbers);
int* minvalue (int *numbers);

int mayor=0;
int menor=0;

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    int numbers[10] = {0};


    cout <<"Enter 10 Int Numbers" << endl;
    cin >>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
    cout <<endl;

    initializeArray(numbers,a,b,c,d,e,f,g,h,i,j);

    cout <<"Your Array Is:" << endl;
    cout <<"{"<<numbers [0]<<" "<<numbers [1]<<" "<<numbers [2]<<" "<<numbers [3]<<" "<<numbers [4]<<" "<<numbers [5]<<" "<<numbers [6]<<" "<<numbers [7]<<" "<<numbers [8]<<" "<<numbers [9]<<"}"<<endl;
    cout <<endl;


    int* max = maxvalue(numbers);
    int* min = minvalue(numbers);

    cout <<"El Valor Maximo es:" << *max << endl;
    cout <<"El Valor Minimo es:" << *min << endl;
    

}

void initializeArray (int *numbers,int a,int b,int c,int d,int e,int f,int g,int h,int i,int j)
{

     numbers [0]= a;
     numbers [1]= b;
     numbers [2]= c;
     numbers [3]= d;
     numbers [4]= e;
     numbers [5]= f;
     numbers [6]= g;
     numbers [7]= h;
     numbers [8]= i;
     numbers [9]= j;

}

int* maxvalue (int *numbers)
{
    mayor = numbers [0];

    for (int i=0; i<10; i++)
    {
        if (numbers[i]>= mayor)
        {
            mayor=numbers[i];
        }
    }

    int* maximo = &mayor;
    return maximo;
}

int* minvalue (int *numbers)
{
    menor = numbers [0];

    for (int i=0; i<10; i++)
    {
        if (numbers[i]<= menor)
        {
        menor=numbers[i];
        }
    }

    int *minimo = &menor;
    return minimo;
}

