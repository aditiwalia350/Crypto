#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //1
    FILE *filePointer;
    char ch[20],ch1[20],ch2[20];
    char line[263]; /* an array of 25 elements isn't enough to store lines of 25 characters: +1 for newline and +1 for terminating null character */
    int i,j,rank;
    //char *top_bigrams[50]={"TH","HE","IN","ER","AN","RE","ON","AT","EN","ND","TI","ES","OR","TE","OF","ED","IS","IT","AL","AR","ST","TO","NT","NG","SE","HA","AS","OU","IO","LE","VE","CO","ME","DE","HI","RI","RO","IC","NE","EA","RA","CE","LI","CH","LL","BE","MA","SI","OM","UR"};
    char *top_bigrams[30]={"ER","ST","SE","EN","NE","IT","CH","BE","DI","DE","ES","IC","EI","UN", "SC","TE","RE","LE","IN","AN","DA","ND","HE","NS", "IE", "AU","IS", "GE","NG ", "RA"}
    //char bi[2]="";
    //2
    filePointer = fopen("ciphers.txt", "r");
    //3
    if (filePointer == NULL)
    {
        printf("File is not available \n");
    }
    else
    {
        /*//4
        while ((ch[0] = fgetc(filePointer)) != EOF)
        {
            memset(ch1, 0, sizeof(ch1));

            memset(ch2, 0, sizeof(ch2));

            //printf("%c\n",ch[0] );
            ch1[0]=ch[0];
            //printf("%s",ch1 );
            //printf("%c",ch1[0] );
            ch2[0]=fgetc(filePointer);
            //printf("%s\n",ch2 );

            strcat(ch1,ch2);
            printf("%s\n",ch1 );
            //printf("%c \n",ch2[0] );
            //strcat(ch1,ch2);
            //printf("%s\n",ch1 );
            

            //printf("%s",strcpy(bi,ch1[0]));
            //print("%s",strcat(ch1,ch2));
            //printf("%c", ch);
            //ch=fgetc(filePointer);
            //printf("%c \n",ch );
            //strcpy(bi, ch); 
            //printf("%c",bi);
        }*/
        




        while(fgets(line,sizeof(line),filePointer)){
            rank=0;

            //printf("%s\n",line );
            //printf("*** \n");
            for(i=0;i<264;i++){
                memset(ch1, 0, sizeof(ch1));
                memset(ch2, 0, sizeof(ch2));
                ch1[0]=line[i];
                ch2[0]=line[i+1];
                strcat(ch1,ch2);
                //printf("%s\n",ch1 );
                for(j=0;j<50;j++){
                    //printf("%s\n",top_bigrams[j]);
                    if(!strcmp(ch1,top_bigrams[j])){
                        rank=rank+1;
                        //printf("%d\n",rank );
                    }
                
                    
                }



                //printf("%c \n",line[i]);

            }
            printf("%s,%d\n",strtok(line,"\n"),rank);
            

        }
    }
    //5
    fclose(filePointer);
    return 0;
}