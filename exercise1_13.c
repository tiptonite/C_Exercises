#include <stdio.h>

void main(){

    int histogram[15]={0};
    int wc;
    char c;
    wc=0;
    while((c=getchar()) != EOF)
    {

        if(c==' ' || c=='\t' || c =='\n')
        {
            histogram[wc]++;
            wc=0;
        }
        else 
        {
            wc++;
        }




    }
    printf("word lengths: ");
    for(int i=0;i<15;i++)
    {
        printf("%d ",histogram[i]);
    }
    printf("\n\n");
    for(int i=16;i>0;i--)
    {
        for(int j=0;j<16;j++)
        {
            if(j==0)
            {
                
                printf("%d   ",i);
                if(i<10)
                {
                    printf(" ");
                }
            } else{

            
            if(histogram[j] >= i)
            {
                printf("*   ");
            } else printf("    ");
            }
        }
        printf("\n");
    }
    printf("     1   2   3   4   5   6   7   8   9   10  11  12  13  14  15\n");


}