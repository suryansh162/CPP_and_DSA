#include<iostream>;
using namespace std;
int main(){
int a,row,column;
cin>>a;
row=1;
int count=1;
while (row<=a)
{
    column=1;
    count=row;
    while(column<=row ){
    cout<<count<<" ";
    count--;
    column=column+1;
    }
    cout<<endl;
    row=row+1;

}
return 0;
}