#ifndef FIB_H  // if this library doesnt already exist
#define FIB_H
using namespace std;

// This is the content of the .h file.
int prime(int startNum, int endNum) {

    int found=0,count=0;

    for(int i=startNum;i<=endNum;i++)
    {
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==0&&i!=1)
        { found++;
            cout<<"Prime Number -> "<<i<<endl;
            count=0;
        }
        count=0;
    }

    cout<<"Total Prime Number Between Range "<<startNum<<" to "<<endNum<<" = "<<found<<endl;

    return 0;
}
// This is the end of the header guard
#endif
