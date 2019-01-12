//------------DEVELOPED BY:Ighit Faysal-------------
#include <iostream>
#include <math.h>
//#include <stdlib.h>//system

using namespace std;

int main()
{
    int a,i,s(0);
    int prim [] = {2,3,5,7,11,13,17,23,29,31,37,41,43,47,53,59,61,67,71,73,79};
    //int did[128];
    while(1){
    cout<<"What:";
    cin>>a;
    cout<<a<<"=";
    for(i=0;i<21;i++){
        if((a%prim[i])==0){s++;
                if(a/prim[i]==1){cout<<prim[i]<<"^("<<s<<")"<<endl;break;}
                a=a/prim[i];
                i--;
         }
         else{if(s==0){}else{cout<<prim[i]<<"^("<<s<<")"<<"*";
              s=0;}}
         if(i==20){cout<<a<<endl;}
    }
    cout<<"------------By:Ighit Faysal-------------\n\n";
    }
    //printt:
      // cout<<"prims:"<<prim[i]<<"^"<<s<<endl;
    //for(i=0;i<22;i++){cout<<"did="<<did[i]<<"\n";}
    //cout<<"a:"<<a<<endl;
    //system("PAUSE");
    return 0;
}
