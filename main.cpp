#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
using namespace std;

int main()
{    int h,m,s;
    cout<<"Enter Current time in hours,minutes and seconds";
    cin>>h>> m>> s;
    int i,j,k;
    for(i=h;i<=24;i++)
    {
        for(j=m;j<=60;j++)
        {


            for(k=s;k<=60;k++)
            {
                cout<<endl<<endl<<endl<<endl<<"\t\t\t\t\t\t\t";
                cout<<i<<":"<<j<<":"<<k<<"\t";
                Sleep(1000);
                system("cls");

            }
        }
    }
    return 0;
}
