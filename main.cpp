#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Finds the points on a graph given a function\n\n";
        cin.get();
    cout << "Y = mx=b\n\n" //HERE is the structure I seteth befor you
         << "What is the slope (m)?\n"; //slope
            short slope;
                cin >> slope;
    cout << "What is the y intercept (b)?\n"; //y intercept
        short b;
        cin >> b;
    short y0= slope*-5+b; //will probably expand to -10-10 when I get around to it.
    short y1= slope*-4+b; //Just solving where the points go
    short y2= slope*-3+b;
    short y3= slope*-2+b;
    short y4= slope*-1+b; //I feel like this could be simplified with a while loop
    short y5= slope*0+b;
    short y6= slope*1+b;
    short y7= slope*2+b;
    short y8= slope*3+b;
    short y9= slope*4+b;
    short y10= slope*5+b;
    
    cout << " x y \n" //muh C style programming of some sort of table
         << "=====\n"; 
    cout << "-5, " << y0 << "\n";
    cout << "-4, " << y1 << "\n";
    cout << "-3, " << y2 << "\n"; //TOO MANY COUT's!! Short hand wasn't cooperating
    cout << "-2, " << y3 << "\n"; //correctly
    cout << "-1, " << y4 << "\n";
    cout << "0, " << y5 << "\n";
    cout << "1, " << y6 <<"\n";
    cout << "2, " << y7 <<"\n";
    cout << "3, " << y8 << "\n";
    cout << "4, " << y9 << "\n";
    cout << "5, " << y10 << "\n";
    
}
