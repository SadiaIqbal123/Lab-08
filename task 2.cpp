# include<iostream>
using namespace std;
int main()
{
    int Nn,sum=0,i=1;
    cout<<"enter a Positive number:";
    cin>>Nn;
    if(Nn<=0)
    {
        cout<<"enter a positive number";
    }
    while(i<=Nn)
    {
      sum=sum+i;
      i++;  
    }
    cout<<"sum of first Nn number is:"<<sum;

    return 0;
}