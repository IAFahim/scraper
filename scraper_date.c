#include<stdio.h>

void _date_scraper(int size){
    
    char edir[]=":- MmPpAa.";
    float v_edir[]={3,2.8,1.3,3,2.9,1.31,1.31,1.31,1.31,1.3};
    float flag=0;
    char temp[]=" 2am ki google am my god i am 12:00 12:00, 4.20-5.00 pm, 14.00 k 12.30000000 k 14.00 df i am 12. sad 12.3000000000000000 whe 15-60  re i am 16.00 monday 01922594534 attara big 12.20 pm Dhaka 5 pm a pleaze am let me in 12:20 am a sds d dsd dsaaaaaaaa 12.30 in am to 5pm izz 12pm nkk 1111111111 u 11:60 A.M. k 1230 is big money mam k 12:30 AM k 12.30 ~";
    int i=0,j=0,till=0,found=0,p_till=4,Jj,ncount=0;
    while (i<sizeof(temp))
    {
    found=0;
    if(47<temp[i] && temp[i]<58 && ncount<p_till){
        flag+=1.7;
        till++;
        Jj=10; 
        ncount++;
        found=1;
    }else for (j = 0;j<Jj; j++)
    {   
        if(temp[i]==edir[j]){
            flag+=v_edir[j];
            till++;
            found=1;
            p_till+=2;
            break;
            
        }
    }
    if(found==0){
        if(1.7<(flag/till)&& 0<ncount ){
        for (int n = i-till; n<i ; n++)
        {
            printf("%c",temp[n]);
        }
            printf("\n");
        }else
        ncount=0;
        p_till=4;
        flag=0;
        till=0;
        Jj=3; 
        ncount=0;
    }
    i++;
    }
}

int main() {
    _date_scraper(100);
    return 0;
}
