#include<stdio.h>

void _date_scraper(int size){
    
    char edir[]=":. MmPpAa";
    float v_edir[]={5,4,1,2,2,2,2,2,2};
    float flag=0;
    char temp[]="2am ki google am my god where i am 16.00 uttara Dhaka pleaze let me in  pizz mmmm pap  u 11:60 A.M. is big money mam k 12:30 AM k 12.30 ~";
    int i=0,j=0,till=0,found=0,p_till=0,Jj;
    while (i<sizeof(temp))
    {
    found=0;
    if(47<temp[i] && temp[i]<58){
        flag+=1.8;
        till++;
        found=1;
        Jj=9; 
    }else for (j = 0;j<Jj; j++)
    {   
        if(temp[i]==edir[j]){
            flag+=v_edir[j];
            till++;
            found=1;
            break;
        }
    }
    if(found==0){
        if(1.7<(flag/till))
        for (int n = i-till; n<i; n++)
        {
            printf("%c",temp[n]);
        }
        flag=0;
        till=0;
        Jj=3; 
    }
    i++;
    }
}

int main() {
    _date_scraper(100);
    return 0;
}
