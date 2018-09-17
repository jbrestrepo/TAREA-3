//SWAP ARRAY

#include <iostream>
#include <string>

using namespace std;

void initializeArray (int *num,int a,int b,int c,int d,int e,int f,int g,int h,int i,int j);
void swapArray (int *num,int *a,int *b,int *c,int *d,int *e,int *f,int *g,int *h,int *i,int *j);

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    int num[10] = {0};

    cout <<"Enter 10 Int Numbers" << endl;
    cin >>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
    cout <<endl;

    initializeArray(num,a,b,c,d,e,f,g,h,i,j);
    cout <<"Array Before Swap" <<endl;
    cout <<"{ " <<num[0]<<" " <<num[1]<<" "<<num[2]<<" "<<num[3]<<" "<<num[4]<<" "<<num[5]<<" "<<num[6]<<" "<<num[7]<<" "<<num[8]<<" "<<num[9]<<" }"<<endl;
    cout <<endl;

    swapArray(num,&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    cout <<"Array After Swap" <<endl;
    cout <<"{ " <<num[0]<<" " <<num[1]<<" "<<num[2]<<" "<<num[3]<<" "<<num[4]<<" "<<num[5]<<" "<<num[6]<<" "<<num[7]<<" "<<num[8]<<" "<<num[9]<<" }"<<endl;
    cout <<endl;
}

void initializeArray (int *num,int a,int b,int c,int d,int e,int f,int g,int h,int i,int j)
{

     num [0]= a;
     num [1]= b;
     num [2]= c;
     num [3]= d;
     num [4]= e;
     num [5]= f;
     num [6]= g;
     num [7]= h;
     num [8]= i;
     num [9]= j;

}

void swapArray (int *num,int *a,int *b,int *c,int *d,int *e,int *f,int *g,int *h,int *i,int *j)
{

    num [0]= *j;
    num [1]= *i;
    num [2]= *h;
    num [3]= *g;
    num [4]= *f;
    num [5]= *e;
    num [6]= *d;
    num [7]= *c;
    num [8]= *b;
    num [9]= *a;

}
