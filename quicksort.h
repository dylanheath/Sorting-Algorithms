#ifndef C_ALGOS_QUICKSORT_H_
#define C_ALGOS_QUICKSORT_H_

void quickSort(int *A, int lo, int hi);
int partition(int *A, int lo, int hi);
int choosePivot(int lo, int hi);

#endif  //  C_ALGOS_QUICKSORT_H_
