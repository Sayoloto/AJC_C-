#include <iostream>
#include <numeric>
#include <limits>
#include <strings.h>

using namespace std;

class Mere {
public:
    char * name;
    int Age=1;
    char Sex;
    virtual void age_print();
           };

class Fille:public Mere{
public:
    char* name;
    double Age=1.5;
    char Sex;
    float taille;
    void age_print();
};


void Fille::age_print()
{   Fille Ojo;
    cout << "here is age of classe fille" << endl;
    cout << Ojo.Age << endl;

};

void Mere::age_print()
{
    cout << "here is age in class mere" << endl;
    //cout << Mere.Age << endl;

}


int main()
{
    //cout << "Hello World!" << endl;


    cout<< std::numeric_limits<int>::lowest()<<endl;
    //std::numeric_limit<double>::max();
    //std::numeric_limit<unsigned int>::digits;

     // Ancien Casts:

    float x = 5.263;
    int y = (int) x; // float to int
    cout <<"testing normal or general old style casting"<< y<< endl;

    // static cast type: prend en compte la compabilité des types

    void * X;
    long* Y = static_cast<long*>(X);

    // Essayer avec different type type long
    int * variable_1;
    //double * variable_1 = static_cast<double *>(variable_1); // ca marche pas parce que int * and double *
    cout<< std::numeric_limits<int *>::lowest()<<endl;

    //***Dynamic Casting****//

    Mere * mother = new Fille();
    Fille * daughter = dynamic_cast<Fille *>(mother);

    daughter->name ="Loto";
    daughter->age_print();


    // re-intreprete cast. can cast any type

    int j=10;
    long long *ptr_j = reinterpret_cast<long long *>(j);
    long long k = reinterpret_cast<long long>(ptr_j);

    // recall the static cast qui marche pas. Ca doit marcher avec reinterprete cast
    int * m;
    long* M = reinterpret_cast<long*>(m);

     // avec une vraie valeur;
    int toto[6]; toto[0]=1; toto[1]=2; toto[2]=5;
    cout << toto[0] << endl;
    int * ptr_toto;
    ptr_toto = &toto[0];
    long *ptr_toto_2 =reinterpret_cast<long *>(toto);
    //ptr_toto_2 = &toto[0];


    cout <<* ptr_toto_2<< endl;


    return 0;
}



