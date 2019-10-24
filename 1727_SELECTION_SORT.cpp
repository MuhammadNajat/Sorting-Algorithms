#include <bits/stdc++.h>
using namespace std;

int a[1000000];

int main() {

    int i, j, n;

    //Read until the end of file reached
    while(scanf("%d", &n) != EOF) {
        for(i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }

        for(i=0; i<n; i++) {
            int minInd = i;
            for(j=i; j<n; j++) {
                if(a[j] < a[minInd]) {
                    minInd = j;
                }
            }
            swap(a[i], a[minInd]);
        }

        for(i=0; i<n; i++) {
            i < n-1 ? printf("%d ", a[i]) : printf("%d\n", a[i]);
        }

    }

    return 0;
}
