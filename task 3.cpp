# include<iostream>
using namespace std;
int main()
{
    int i=1,number;
    cout<<"enter a  number:";
    cin>>number;
    while(i<=10)
    {
      cout<<number<<"*"<<i<<"="<<number*i<<endl;
      i++;  
    }

    return 0;
}