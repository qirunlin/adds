#include <iostream>
using namespace std;
#include <vector>

#include "MapTriple.h"
#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"
#include "FilterForTwoDigitPositive.h"
#include "FilterGeneric.h"
#include "FilterNonPositive.h"
#include "FilterOdd.h"
#include "ReduceGCD.h"
#include "ReduceMinimum.h"
#include "ReduceGeneric.h"

// int binaryOperator(int x, int y)
// {    
//     std::vector <int> storageX;

//     for (int i = 1; i < x + y; i++)
//     {
//         if (x % i == 0 && y % i == 0)
//         {
//             storageX.push_back(i); 
//         }
//     }
//     return storageX.back();
// }


int main()
{
    // cout << binaryOperator (3,7);
    // vector<int> jack = {-21, 91, 46, 74, -44, 149, -192, 41, -9, -32, -133, 137, 178, -4, 119, -9, -111, -144, -184, -33};

    // MapTriple m3;
    // vector <int> jack1 = m3.map(jack);

    // // for (int i = 0; i < jack.size(); i++)
    // // {
    // //     cout << jack1.at(i) << endl;
    // // }
    // // cout << endl;

    // MapAbsoluteValue MA;
    // vector <int> jack2 = MA.map(jack1);

    // // for (int i = 0; i < jack2.size(); i++)
    // // {
    // //     cout << jack2.at(i) << endl;
    // // }
    // // cout << endl;


    // FilterForTwoDigitPositive FDP;

    // vector <int> jack3 = FDP.filter(jack2);

    // for (int i = 0; i < jack3.size(); i++)
    // {
    //     cout << jack3.at(i) << endl;
    // }

    // cout << endl;

    // FilterOdd FO;

    // vector <int> jack4 = FO.filter(jack3);

    // for (int i = 0; i < jack4.size(); i++)
    // {
        
    //     cout << jack4.at(i) << endl;
    // }
    // cout << endl;

    // vector<int> jack = {63, 27, 27, 99};
    vector<int> jack = {15, 75, 45};

    ReduceMinimum RM;
    int reduced = RM.reduce(jack);

    cout << reduced << endl;

    // ReduceGCD RG;
    // RG.reduce(jack);

    // cout << RG.reduce(jack) << endl;
}
