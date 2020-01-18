#include "header.h"
///NAMA : Visensius Dony Putra
///NIM  : A11.2017.10096
///Kelas: A11.4203
int main()
{
    int index,*arr,i,*stat1,*stat2,*stat3;
    printf("=====TUGAS 1 Stat Return=====\n");
    int arr1[] = {5, 9, 12, 4, 13};
    int arr2[] = {6, 7, 12, 13, 5};
    int arr3[] = {4, 9, 13, 75, 2};
    stat1=stat_return(arr1,5);
    cetak_stat(stat1,5);
    stat2=stat_return(arr2,5);
    cetak_stat(stat2,5);
    stat3=stat_return(arr3,5);
    cetak_stat(stat3,5);
    printf("\n=====TUGAS 2 Fibonacci=====\n");
    printf("Masukkan angka index: ");
    scanf("%d",&index);
    arr=fibo_sequence_return(index);
    cetak_arr(arr,index);
    printf("\n=====TUGAS 3 Array Random=====\n");
    int index2,*arrai;
    printf("Masukkan angka index: ");
    scanf("%d",&index2);
    arrai=random_return(index2);
    cetak2(&arrai,index2);
    printf("\n=====TUGAS 4 Stat Return 2=====\n");
    int *stat4,*stat5,*stat6;
    stat_param(stat4, arr1, 5);
    stat_param(stat5, arr2, 5);
    stat_param(stat6, arr3, 5);
    printf("\n=====TUGAS 5 Fibonacci 2=====\n");
    int *fibo1, *fibo2,idx,idx2;
    printf("Masukkan angka index: ");
    scanf("%d",&idx);
    fibo1=seq(idx);
    fibo_sequence_param(fibo1,idx);
    printf("Masukkan angka index: ");
    scanf("%d",&idx2);
    fibo2=seq(idx2);
    fibo_sequence_param(fibo2,idx2);
    printf("\n=====TUGAS 6 Array Random 2=====\n");
    int *seq1,*seq2,*seq3,*seq4,count,count2,count3,count4;
    printf("Masukkan angka index: ");
    scanf("%d",&count);
    seq1=sequential(count);
    random_param(&seq1, count);
    printf("\nMasukkan angka index: ");
    scanf("%d",&count2);
    seq2=sequential(count2);
    random_param(&seq2, count2);
    printf("\nMasukkan angka index: ");
    scanf("%d",&count3);
    seq3=sequential(count3);
    random_param(&seq3, count3);
    printf("\nMasukkan angka index: ");
    scanf("%d",&count4);
    seq4=sequential(count4);
    random_param(&seq4, count4);
    return 0;
}
