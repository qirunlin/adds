using namespace std;
#include <string>
#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

int main()
{
    // cout << "111110 010101 1" << endl;
    // string binaryString = "1100111";
    // int length = binaryString.length();
    // int MaxOnes = 0;
    // int currentOne = 0;

    // for (int i = 0; i < length; i++)
    // {
    //     if (binaryString.at(i) == '0')
    //     {
    //         currentOne = 0;
    //     }
    //     else
    //     {
    //         currentOne++;
    //         if (currentOne > MaxOnes)
    //         {
    //             MaxOnes = currentOne;
    //         }
    //     }
    // }
    // cout << MaxOnes;
    // Individual * execute(Individual * indPtr, Mutator * mPtr, int k);

    // Individual I;
    // BitFlip BF;
    // BitFlipProb BFP;
    // Rearrange RA;

    // Individual I6(6);
    // Individual IB("000111");
    // cout << IB.getString() << endl;
    // cout << IB.getBit(2) << endl;
    // cout << IB.getMaxOnes() << endl;
    // cout << IB.getLength() << endl;

    // cout << "Other contrusctor" << endl;
    // Individual I(4);
    // cout << I.getLength() << endl;
    // cout << I.getString() << endl;
    // Individual I;
    // BitFlip BP(I,6);
    // Mutator * m = new BitFlip(IB,4)

    // Individual * execute(Individual * I6, Mutator * BP, int k);
    // Individual IB("000111");
    // BitFlip BP;
    // Rearrange RA;

    // BP.DNA(IB, 4);
    // RA.DNA(IB,3);

    // Individual * execute(Individual * indPtr, Mutator * mPtr, int k);
    string binarystr1;
    int k1;
    string binarystr2;
    int k2;

    cin >> binarystr1 >> k1 >> binarystr2 >> k2;
    // cout << "Test output " << binarystr1 << "Test output " << k1 << "Test output " << binarystr2 << "Test output " << k2 << endl;
    
    Individual I(binarystr1);
    Individual I2(binarystr2);

    BitFlip BF;
    Rearrange RA;

    BF.mutate(I, k1);
    RA.mutate(I2, k2);
    // cout << I2.binaryString << "this" << endl;
    cout << I2.getMaxOnes(); 
}