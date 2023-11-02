#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[]="dfhvodifvpsidhpijhpisejgpsjpdgdpijsdpihvdpifheifheighsdpivsdpifjaepiep9f";
    int i , count = 0 ;
    char choice ;
    printf("enter the  alphabet you want to check frequency of ");
    scanf("%c",&choice);
    for(int i = 0 ; i <= strlen(str);i++){
        if(str[i]==choice) {
            count++;
        }

    }

   printf("the frequency of your desired alphabet is %d",count);
    return 0;
}
