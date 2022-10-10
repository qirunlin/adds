#include <iostream>
using namespace std;

#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main()
{
    // cout << "testing";
    BubbleSort BS;
    RecursiveBinarySearch RNS;
    QuickSort QS;

    vector<int> list;
    int input;

    // for (int i = 0; i < 3; i ++)
    // {
    //     cin >> input;
    //     list.push_back(input);
    // }

    while(cin >> input)
    {
        list.push_back(input);
    }

    BS.sort(list);

    RNS.search(BS.sorted, 1);

    if (RNS.search(BS.sorted, 1) == 1)
    {
        cout << "true" << " ";
    }
    else
    {
        cout << "false" << " ";
    }


    for (int i = 0; i < BS.sort(list).size(); i++)
    {
        cout <<  BS.sort(list).at(i) << " ";
    }
    cout << endl;
}