#include <bits/stdc++.h>
using namespace std;

int a[1000000];

int part(int low, int high) {
    int i, j=low, pivot = (low + high) / 2;
    int p_val = a[pivot];
    for(i=low; i<=high; i++) {
        if(a[i] < p_val) {
            swap(a[j], a[i]);
            if(j == pivot) {
                pivot = i;
            }
            j++;
        }
    }
    swap(a[j], a[pivot]);

    return j;

}

void quick_sort(int low, int high) {
    if(low >= high)
        return;
    int point = part(low, high);

    quick_sort(low, point-1);
    quick_sort(point+1, high);
}

int main() {

    int i, j, k, l, m, n, t;

    scanf("%d", &t);
    while(t--) {

        scanf("%d", &n);
        for(i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }

        quick_sort(0, n-1);

        for(i=0; i<n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");

    }

    return 0;
}
