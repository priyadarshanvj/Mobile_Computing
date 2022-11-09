#include<iostream>
using namespace std;
int main()
{
    int start_yr,end_yr,rate,yr,t;
    float cal_rate,percent;
    cout<<"Enter the Start Year:";
    cin>>start_yr;
    cout<<"Enter the End year:";
    cin>>end_yr;
    cout<<"Enter the Rate of the Product:";
    cin>>rate;
    t=rate;
    yr=end_yr-start_yr;
    for(int i=1;i<=yr;i++)
    {
        percent=t*(0.1);
        cal_rate=t-percent;
        t=cal_rate;
    }
    cout<<"The Rate of the product in "<<end_yr<<" is "<<cal_rate;
    return 0;
}
