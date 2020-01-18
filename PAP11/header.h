#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

int *stat_return(int *data, int size1);
void cetak_stat(int *stat_return,int size1);
int *fibo_sequence_return(int count1);
void cetak_arr(int *fibo_sequence_return,int count1);
int *random_return(int count1);
void cetak2(int *random_return,int count1);
void stat_param(int *stat, int *data, int size1);
void fibo_sequence_param(int *seq, int count1);
int *seq(int count1);
void random_param(int *sequential, int count1);
int *sequential(int count1);
void sort_name(char **names, char order[]);
#endif // HEADER_H_INCLUDED
