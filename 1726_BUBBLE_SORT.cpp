#include <bits/stdc++.h>
using namespace std;

int a[100000];

int main() {

    int i, n;

    //Read until end of file reached
    while(scanf("%d", &n) != EOF) {

        for(i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }

        bool swapped;
        do {
            swapped = false;
            for(i=0; i<n-1; i++) {
                if(a[i] > a[i+1]) {
                    swap(a[i], a[i+1]);
                    swapped = true;
                }
            }
        } while(swapped);

        for(i=0; i<n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");

    }


    return 0;
}
