#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>    
#include <math.h> 
using namespace std;


typedef long long int lc;

const lc INF = 1LL << 60;


lc c1, c2, x, y;

bool Posicion(lc numero){
    lc unvalid = numero / (x * y);

    lc regalo1 = (c1 - ( (numero / y) - unvalid) );
    if (regalo1 < 0)   
    {
        regalo1 = 0;
    }

    lc regalo2 = (c2 - ( (numero / x) - unvalid) );
    if (regalo2 < 0)   
    {
        regalo2 = 0;
    }

    lc intersection = (numero - (numero / y) - (numero / x) + unvalid );

    return ( (regalo1 + regalo2) <= intersection);
}

lc BusquedaBinaria(lc left, lc right){
    lc mid = left + ((right - left) / 2);

    if ( Posicion(mid) && !Posicion(mid-1) )
    {
        return mid;
    }else if ( Posicion(mid) )
    {
        return BusquedaBinaria(left, mid - 1);
    }else{
        return BusquedaBinaria(mid + 1, right);
    }
}

int main( )
{
    cin>>c1>>c2>>x>>y;
    cout<<BusquedaBinaria(c1+c2,INF)<<endl;
    return 0;
}