#include "QuickSort.h"
#include "Utils.h"

void quickSort(int *A, int lo, int hi) {
  if (lo < hi) {
    int p = partition(A, lo, hi);
    quickSort(A, lo, p - 1);
    quickSort(A, p + 1, hi);
  }
}

int partition(int *A, int lo, int hi) {
  int i;
  int pivotIndex = choosePivot(lo, hi);
  int pivotValue = A[pivotIndex];
  int position = lo;

  swap(&A[hi], &A[pivotIndex]);

  for (i = lo; i < hi; i++) {
    if (A[i] < pivotValue) {
      swap(&A[i], &A[position]);
      position++;
    }
  }
  swap(&A[position], &A[pivotIndex]);
  return position;
}

int choosePivot(int lo, int hi) {
  return hi;
}
