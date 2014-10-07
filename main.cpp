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
    short yn5= slope*-5+b; //will probably expand to -10 to 10 when I get around to it.
    short yn4= slope*-4+b; //Just solving where the points go
    short yn3= slope*-3+b;
    short yn2= slope*-2+b;
    short yn1= slope*-1+b; //I feel like this could be simplified with a while loop
    short y0= slope*0+b;
    short y1= slope*1+b;
    short y2= slope*2+b;
    short y3= slope*3+b;
    short y4= slope*4+b;
    short y5= slope*5+b;
    
    cout << " x y \n" //muh C style programming of some sort of table
         << "=====\n"; 
    cout << "-5, " << yn5 << "\n";
    cout << "-4, " << yn4 << "\n";
    cout << "-3, " << yn3 << "\n"; //TOO MANY COUT's!! Short hand wasn't cooperating
    cout << "-2, " << yn2 << "\n"; //correctly
    cout << "-1, " << yn1 << "\n";
    cout << "0, " << y0 << "\n";
    cout << "1, " << y1 <<"\n";
    cout << "2, " << y2 <<"\n";
    cout << "3, " << y3 << "\n";
    cout << "4, " << y4 << "\n";
    cout << "5, " << y5 << "\n";
    
}

