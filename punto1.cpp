//MORSE CODE

#include <iostream>
#include <string>

using namespace std;

void viewCode ();
void insert(char *array);
void Morse(char *array);



int main()
{
    char array[50];

    cout << "              Morse Code App" << endl;
    cout << endl;
    cout << endl;

    viewCode();
    insert(array);
    Morse(array);

    return 0;
}

void viewCode ()
{
    cout <<"================MORSE CODE=============="<<endl;
    cout <<"|______________________________________|"<<endl;
    cout <<"|  A  ._      |  B  _...   |  C  _._.  |"<<endl;
    cout <<"|  D  _..     |  E  .      |  F  .._.  |"<<endl;
    cout <<"|  G  __.     |  H  ....   |  I  ..    |"<<endl;
    cout <<"|  J  .___    |  K  _._    |  L  ._..  |"<<endl;
    cout <<"|  M  __      |  N  _.     |  O  ___   |"<<endl;
    cout <<"|  P  .__.    |  Q  __._   |  R  ._.   |"<<endl;
    cout <<"|  S  ...     |  T  _      |  U  .._   |"<<endl;
    cout <<"|  V  ..._    |  W  .__    |  X  _.._  |"<<endl;
    cout <<"|  Y  _.__    |  Z  __..   |           |"<<endl;
    cout <<"|______________________________________|"<<endl;
    cout <<endl;
}

void insert(char *array)
{
    int counter=0;
    string phrase;

    cout <<"Ingrese Una Frase" << endl;

    getline(cin,phrase);

    for (char ch : phrase)
        {
        array[counter]=ch;
        counter++;
        }
}
void Morse(char *array)
{
   cout<<"La frase Escrita En Codigo Morse Es: "<<endl;
   cout<<endl;

   for(int i = 0; array[i] != 0;++i)
   {
       if (array[i] == 'a' || array[i] == 'A')
           cout<< ".-"<<" ";    //A

       else if (array[i] == 'b' || array[i] == 'B')
           cout<< "-..."<<" ";   //B

       else if (array[i] == 'c' || array[i] == 'C')
           cout<< "-.-."<<" ";   //C

       else if (array[i] == 'd' || array[i] == 'D')
           cout<< "-.."<<" ";    //D

       else if (array[i] == 'e' || array[i] == 'E')
           cout<< "."<<" ";//E

       else if (array[i] == 'f' || array[i] == 'F')
           cout<< "..-."<<" ";   //F

       else if (array[i] == 'g' || array[i] == 'G')
           cout<< "--."<<" ";    //G

       else if (array[i] == 'h' || array[i] == 'H')
           cout<< "...."<<" ";   //H

       else if (array[i] == 'i' || array[i] == 'I')
           cout<< ".."<<" "<<" ";     //I

       else if (array[i] == 'j' || array[i] == 'J')
           cout<< ".---"<<" ";   //J

       else if (array[i] == 'k' || array[i] == 'K')
           cout<< "-.-"<<" ";    //K

       else if (array[i] == 'l' || array[i] == 'L')
           cout<< ".-.."<<" ";   //L

       else if (array[i] == 'm' || array[i] == 'M')
           cout<< "--"<<" ";     //M

       else if (array[i] == 'n' || array[i] == 'N')
           cout<< "-."<<" ";     //N

       else if (array[i] == 'o' || array[i] == 'O')
           cout<< "---"<<" ";    //O

       else if (array[i] == 'p' || array[i] == 'P')
           cout<< ".--."<<" ";   //P

       else if (array[i] == 'q' || array[i] == 'Q')
           cout<< "--.-"<<" ";   //Q

       else if (array[i] == 'r' || array[i] == 'R')
           cout<< ".-."<<" ";    //R

       else if (array[i] == 's' || array[i] == 'S')
           cout<< "..."<<" ";   //S

       else if (array[i] == 't' || array[i] == 'T')
           cout<< "-"<<" ";      //T;

       else if (array[i] == 'u' || array[i] == 'U')
           cout<< ".-."<<" ";    //U

       else if (array[i] == 'v' || array[i] == 'V')
           cout<< "...-"<<" ";   //V

       else if (array[i] == 'w' || array[i] == 'W')
           cout<< ".--"<<" ";    //W

       else if (array[i] == 'x' || array[i] == 'X')
           cout<< "-..-"<<" ";   //X

       else if (array[i] == 'y' || array[i] == 'Y')
           cout<< "-.--"<<" ";   //Y

       else if (array[i] == 'z' || array[i] == 'Z')
           cout<< "--.."<<" ";   //Z

       else if (array[i] == ' ')
           cout<<" / "<<" ";

       else
           cout<<" * "<<" ";


   }
   cout <<endl;
   cout <<endl;
}

