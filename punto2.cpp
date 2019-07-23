#include<iostream>

using namespace std;

template <typename T>
T mayor(T x, T y)
{
   return (x > y)? x: y;
}

int main(){
    int a=24874,b=32459,m;
    float c=2.0,d=3.5,n;
    char e=51,f=53,o;
    double g=1.564782468,h=6.79854521265,p;
    long i=478965216,j=637821467,q;
    m = mayor(a,b);
    n = mayor(c,d);
    o = mayor(e,f);
    p = mayor(g,h);
    q = mayor(j,i);
    cout << "Entero mayor con int: " << m << endl;
    cout << "Real mayor con float: " << n << endl;
    cout << "numero mayor con char: " << o << endl;
    cout << "Real mayor con double: " << p << endl;
    cout << "Entero mayor con long: " << q << endl;
    return 0;
}
