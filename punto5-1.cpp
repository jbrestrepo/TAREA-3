// ARRAY

#include <iostream>
#include <string>

using namespace std;

void initializeArray (int num [4][4],int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l,int m,int n,int o,int p);
void printArray (int num [4][4]);

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
    int num[4][4] = {{0}};

    cout <<"4 X 4 ARRAY" << endl;
    cout <<"Ingrese 4 Enteros Para La Primera Fila Del Arreglo" << endl;
    cin >>a>>b>>c>>d;
    cout <<"Ingrese 4 Enteros Para La Segunda Fila Del Arreglo" << endl;
    cin >>e>>f>>g>>h;
    cout <<"Ingrese 4 Enteros Para La Tercera Fila Del Arreglo" << endl;
    cin >>i>>j>>k>>l;
    cout <<"Ingrese 4 Enteros Para La Cuarta Fila Del Arreglo" << endl;
    cin >>m>>n>>o>>p;

    initializeArray(num,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
    printArray(num);

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

void printArray (int num[4][4])
{
    int counter=0;

    cout <<"         Your Array Is:" <<endl;
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
