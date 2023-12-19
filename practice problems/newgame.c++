#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
int main()
{
    int buttonpress;
    int lb=0,ub=12;
    char arr[][100]={
        "[#            ]",
        "[ #           ]",
        "[  #          ]",
        "[   #         ]",
        "[    #        ]",
        "[     #       ]",
        "[      #      ]",
        "[       #     ]",
        "[        #    ]",
        "[         #   ]",
        "[          #  ]",
        "[           # ]",
        "[            #]",
    };
    int i=0;
    while(1==1)
    {
    
    buttonpress=getch();
    if(buttonpress=='q')
    {
        return(0);
    }
    else if(buttonpress=='p')
    {
        if(i>lb)
        i=i-1;

    }
    else if(buttonpress=='n')
    {
        if(i<ub)
        i=i+1;
    
    }
    else
    {
        cout<<"press one of q,n,p: ";
        continue;
    }
    system("cls");
     cout<<arr[i]<<"\n";
    }
}