// ARRAY

#include <iostream>
#include <string>

using namespace std;


void initializeArray  (int num  [4][4],int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l,int m,int n,int o,int p);
void printArray (int num [4][4],const int array);
void hadamard (int num [4][4], int num1 [4][4], int exit [4][4]);

int main()
{
    const int array1=1;
    const int array2=2;

    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
    int a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,p1;

    int num   [4][4] = {{0}};
    int num1  [4][4] = {{0}};
    int exit  [4][4] = {{0}};

    cout <<"                        ARREGLO 4 X 4" << endl;
    cout <<                   "INGRESE EL PRIMER ARREGLO" << endl;
    cout <<"Ingrese 4 Enteros Para La Primera Fila Del Primer Arreglo" << endl;
    cin >>a>>b>>c>>d;
    cout <<"Ingrese 4 Enteros Para La Segunda Fila Del Primer Arreglo" << endl;
    cin >>e>>f>>g>>h;
    cout <<"Ingrese 4 Enteros Para La Tercera Fila Del Primer Arreglo" << endl;
    cin >>i>>j>>k>>l;
    cout <<"Ingrese 4 Enteros Para La Cuarta Fila Del Primer Arreglo" << endl;
    cin >>m>>n>>o>>p;
    cout <<endl;
    cout <<endl;

    cout <<"                  INGRESE EL SEGUNDO ARREGLO" << endl;
    cout <<"Ingrese 4 Enteros Para La Primera Fila Del Segundo Arreglo" << endl;
    cin >>a1>>b1>>c1>>d1;
    cout <<"Ingrese 4 Enteros Para La Segunda Fila Del Segundo Arreglo" << endl;
    cin >>e1>>f1>>g1>>h1;
    cout <<"Ingrese 4 Enteros Para La Tercera Fila Del Segundo Arreglo" << endl;
    cin >>i1>>j1>>k1>>l1;
    cout <<"Ingrese 4 Enteros Para La Cuarta Fila Del Segundo Arreglo" << endl;
    cin >>m1>>n1>>o1>>p1;
    cout <<endl;

    initializeArray(num,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
    printArray(num,array1);
    initializeArray(num1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,p1);
    printArray(num1,array2);
    hadamard(num,num1,exit);

    return 0;
}

void initializeArray (int num[4][4],int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l,int m,int n,int o,int p)

{

     num [0][0] = a;
     num [0][1] = b;
     num [0][2] = c;
     num [0][3] = d;
     num [1][0] = e;
     num [1][1] = f;
     num [1][2] = g;
     num [1][3] = h;
     num [2][0] = i;
     num [2][1] = j;
     num [2][2] = k;
     num [2][3] = l;
     num [3][0] = m;
     num [3][1] = n;
     num [3][2] = o;
     num [3][3] = p;

}

void printArray (int num[4][4],const int array)
{
    int counter=0;

    if (array == 1)
    cout <<"      SU PRIMER ARREGLO ES:" <<endl;
    cout <<"     SU SEGUNDO ARREGLO ES:" <<endl;


    cout <<endl;

    for(int i=0; i <= 3 ; i++)
    {
        for(int j=0; j <= 3; j++)
        {
        cout << num[i][j] <<"\t";
        counter ++;

         if (counter == 4)
         {
            cout <<"\n";
            counter = 0;

         }
       }
    }
    cout <<endl;
}

void hadamard (int num [4][4], int num1 [4][4], int exit [4][4])
{

    int counter=0;

    cout << "PRODUCTO HADAMARD DE TUS DOS ARREGLOS" <<endl;

    for(int i=0; i <= 3 ; i++)
    {
        for(int j=0; j <= 3; j++)
        {
        exit [i][j] = ((num [i][j]) * (num1 [i][j]));
        cout << exit [i][j] <<"\t";

        counter ++;

         if (counter == 4)
         {
            cout <<"\n";
            counter = 0;

         }
       }
    }
    cout <<endl;
}
