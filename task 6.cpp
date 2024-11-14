# include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=9;i=i+2)
    {
    for(int k=9-i;k>0;k--){
            cout<<" ";
        }
         for(int j=1;j<=i;j++){
            cout<<"* ";
        cout<<endl;
    }
  
}
return 0;
}