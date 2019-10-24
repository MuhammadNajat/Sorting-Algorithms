#include <bits/stdc++.h>
using namespace std;

int a[1000001];

void do_merge(int low, int mid, int high) {
    int * temp;
    temp = (int *) malloc((high - low + 1) * sizeof(int));
    int i, j=0, i1 = low, i2 = mid+1, j1 = mid, j2 = high;
    for(i=low; i<=high; i++) {
        if(i1 > mid)
            temp[j++] = a[i2++];
        else if(i2 > high)
            temp[j++] = a[i1++];
        else if(a[i1] <= a[i2]) {
            temp[j++] = a[i1];
            i1++;
        }
        else if(a[i2] < a[i1]) {
            temp[j++] = a[i2];
            i2++;
        }
    }

    for(i=low, j=0; i<=high; i++, j++) {
        a[i] = temp[j];
    }

}

void merge_sort(int low, int high) {

    if(low >= high)
        return;
    int mid = (low + high) / 2;

    merge_sort(low, mid);
    merge_sort(mid+1, high);

    do_merge(low, mid, high);

}

int main() {

    int i, j, k, m, n;

    while(scanf("%d", &n) != EOF) {

        for(i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }

        merge_sort(0, n-1);

        for(i=0; i<n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");

    }

    return 0;
}
