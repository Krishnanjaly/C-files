#include <stdio.h>
int main() {
    int n, f, i, j, k, l, found, pf = 0, ph = 0;
    printf("Enter number of pages: ");
    scanf("%d", &n);
    int pages[n];
    printf("Enter reference string: ");
    for (i = 0; i < n; i++) scanf("%d", &pages[i]);
    printf("Enter number of frames: ");
    scanf("%d", &f);
    int frames[f];
    for (i = 0; i < f; i++) frames[i] = -1;
    for (i = 0; i < n; i++) {
        found = 0;
        for (j = 0; j < f; j++) {
            if (frames[j] == pages[i]) {
                found = 1; ph++; break;
            }
        }
        if (!found) {
            int replace = -1, farthest = i + 1;
            for (j = 0; j < f; j++) {
                int foundFuture = 0;
                for (k = i + 1; k < n; k++) {
                    if (frames[j] == pages[k]) {
                        if (k > farthest) {
                            farthest = k;
                            replace = j;
                        }
                        foundFuture = 1;
                        break;
                    }
                }
                if (!foundFuture) {
                    replace = j;
                    break;
                }
            }
            if (replace == -1) replace = 0;
            frames[replace] = pages[i];
            pf++;
        }
        printf("Page %d -> ", pages[i]);
        for (k = 0; k < f; k++) {
            if (frames[k] != -1) printf("%d ", frames[k]);
            else printf("- ");
        }
        printf(found ? "Hit\n" : "Miss\n");
    }
    printf("\nPage Faults: %d\n", pf);
    printf("Page Hits: %d\n", ph);
    return 0;
}