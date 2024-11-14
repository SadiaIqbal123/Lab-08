# include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int j=1;
    while(j<=5){
        cin>>arr[j];
    }
    cin>>arr[5];
    int brr[5];
    int i=0;
while(i<=5)
{
    brr[5-i]=arr[i];
    cout<<brr[5-i];
i++;
}

return 0;    
    

}