#include "header.h"
///Tugas 1
int *stat_return(int *data, int size1)
    {
     int i,temp,jumlah,rata,*stat_return;
     stat_return=malloc(sizeof(int)*size1);
     i=0;
     jumlah=0;
     while(i<size1)
        {
         int j;
         j=i;
         while(j<size1)
         {
         if(data[i]>data[j])
            {
             temp=data[i];
             data[i]=data[j];
             data[j]=temp;
            }
         j++;
         }
         jumlah=jumlah+data[i];
         i++;
        }
     rata=jumlah/size1;
     *(stat_return+0)=data[0];
     *(stat_return+1)=data[size1-1];
     *(stat_return+2)=jumlah;
     *(stat_return+3)=rata;
     return stat_return;
    }
void cetak_stat(int *stat_return,int size1)
{
    int i;
    for(i=0;i<size1-1;i++)
        {
         if(i==0)
            {
             printf("stat_return = [%d, ",stat_return[i]);
            }
         else if(i==3)
            {
             printf("%d]",stat_return[i]);
            }
         else
            {
             printf("%d, ",stat_return[i]);
            }
        }
     puts(" ");
}
///Tugas 2
int *fibo_sequence_return(int count1)
    {
     int *fibo_sequence_return,i,j,k;
     fibo_sequence_return=malloc(sizeof(int)*count1);
     for(i=0;i<count1;i++)
        {
         j=i-1;
         k=i-2;
         if(i==0)
            {
             *(fibo_sequence_return+i)=1;
            }
        else if(i==1)
            {
             *(fibo_sequence_return+i)=i+1;
            }
         else
         {
         *(fibo_sequence_return+i)=*(fibo_sequence_return+k)+*(fibo_sequence_return+j);
         }
        }
     return fibo_sequence_return;
    }
void cetak_arr(int *fibo_sequence_return,int count1)
    {
     int i;
     printf("[");
     for(i=0;i<count1;i++)
        {
         if(i==count1-1)
         {
           printf("%d",*(fibo_sequence_return+i));
         }
         else
         {
         printf("%d, ",*(fibo_sequence_return+i));
         }
        }
     printf("]\n");
    }
///Tugas 3
int *random_return(int count1)
    {
     int *random_return;
     random_return=malloc(sizeof(int)*count1);
     return random_return;
    }
void cetak2(int *random_return,int count1)
    {
     int i;
     printf("[");
     for(i=1;i<=count1;i++)
        {
         if(i==count1)
         {
          printf("%d",*(random_return+i));
         }
         else
         {
         printf("%d, ",*(random_return+i));
         }
        }
     printf("]\n");
    }
///Tugas 4
void stat_param(int *stat, int *data, int size1)
    {
     stat=malloc(sizeof(int)*size1);
     int i,temp,jumlah,rata;
     i=0;
     jumlah=0;
     while(i<size1)
        {
         int j;
         j=i;
         while(j<size1)
         {
         if(data[i]>data[j])
            {
             temp=data[i];
             data[i]=data[j];
             data[j]=temp;
            }
         j++;
         }
         jumlah=jumlah+data[i];
         i++;
        }
     rata=jumlah/size1;
     printf("stat_return = [%d, %d, %d, %d]",data[0],data[size1-1],jumlah,rata);
     puts(" ");
    }
void fibo_sequence_param(int *seq, int count1)
    {
     int i;
     printf("[");
     for(i=0;i<count1;i++)
        {
         if(i==count1-1)
         {
           printf("%d",*(seq+i));
         }
         else
         {
         printf("%d, ",*(seq+i));
         }
        }
     printf("]\n");
    }
int *seq(int count1)
    {
     int i,j,k,*seq;
     seq=malloc(sizeof(int)*count1);
     for(i=0;i<count1;i++)
        {
         j=i-1;
         k=i-2;
         if(i==0)
            {
             *(seq+i)=1;
            }
        else if(i==1)
            {
             *(seq+i)=i+1;
            }
         else
         {
         *(seq+i)=*(seq+k)+*(seq+j);
         }
        }
     return seq;
    }
void random_param(int *sequential, int count1)
    {
     int i;
     printf("[");
     for(i=7;i<=count1+7;i++)
        {
         if(i==count1+7)
         {
          printf("%d",*(sequential+i));
         }
         else
         {
         printf("%d, ",*(sequential+i));
         }
        }
     printf("]\n");
    }
int *sequential(int count1)
    {
     int *sequential;
     sequential=malloc(sizeof(int)*count1);
     return sequential;
    }
void sort_name(char **names, char order[])
    {

    }
