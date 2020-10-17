
#include <iostream>
#include<math.h>
using namespace std;
void calculate(unsigned long long);
struct goo {
    unsigned long long Input;
};
int main()
{
    goo N;
    cout << "ENTER NUMBER : ";
    
        cin >> N.Input;
        calculate(N.Input);
      
    return 0;
}

void calculate(unsigned long long y)
{
    unsigned long long sum = 0;
    unsigned long long num = 0;
    unsigned long long Num[4] = {0,0,1,2};
    unsigned long long a = 1;
    unsigned long long b = 2;

   // until we reach the limit
    while (Num[3] <= y)
    {
        Num[1] = Num[3];
       
        if (Num[3] % 2 == 0)

            if(Num[3]%3==0){
                Num[3] = pow(Num[3],2);
            }
            Num[0] += Num[3];
        
       
        auto sum = Num[2] + Num[3];
        Num[2] = Num[1];
        Num[3] = sum;
    }

    cout <<"SUMMARY :  "<< Num[0] << endl;
}