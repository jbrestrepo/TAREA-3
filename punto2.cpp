//RANDOM NUMBERS

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

void initRandomArray (double *randomArray, const int size);
void printRandomArray (double *randomArray, const int size);
double standardDesviation (double *randomArray, const int size);

int main()
{
    const int size = 100;
    double randomArray [size];

    cout <<"                          RANDOM NUMBERS" <<endl;
    cout <<"                               AND" <<endl;
    cout <<"                        STANDARD DEVIATION" <<endl;
    cout <<endl;

    initRandomArray(randomArray,size);
    printRandomArray(randomArray,size);

    cout <<"Standard Desviation Of Data Is: " <<standardDesviation(randomArray,size) <<endl;

    return 0;

}

void initRandomArray (double *randomArray,const int size)
{
    srand (static_cast<unsigned>(time(nullptr)));  //seed

    for (int i=0; i<size; ++i)
    {
        *randomArray = ((rand() % 3) - 1.0)/2;
        randomArray++;
    }
}

void printRandomArray (double *randomArray, const int size)
{
    int counter=0;

    cout <<"                           Your Data Are:"<<endl;
    cout <<endl;
    cout <<endl;

    for (int i=0; i<size; ++i)
    {
        cout << *randomArray << "\t";
        randomArray++;
        counter++;

        if (counter == 10)
           {
              cout <<"\n";
              counter = 0;
            }
    }
    cout <<endl;
    cout <<endl;
}

double standardDesviation (double *randomArray, const int size)
{
    double sum=0.0;
    double sumt=0.0;
    double media=0.0;
    double stdDesv=0.0;

    for (int i=0; i<size; ++i)
    {
        sum += *randomArray;
        randomArray++;
    }

    media = sum/size;

    for (int i=0; i<size; ++i)
    {
        sumt= pow ((*randomArray-media),2);
        randomArray++;
    }

    stdDesv = sqrt (sumt/size);
    return stdDesv;


}

