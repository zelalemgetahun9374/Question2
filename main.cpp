#include <iostream>
#include<math.h>
#include "prime.h"
using namespace std;

int main() {
    int startNum,endNum;
    cout<<"Enter Number START of Range:  ";
    cin>>startNum;
    cout<<"Enter Number END of Range:  ";
    cin>>endNum;

    prime(startNum, endNum);

    return 1;
}