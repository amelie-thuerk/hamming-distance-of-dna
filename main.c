#include <stdio.h>
#include <string.h>

int main() {
    
    while (1) {
        
        char dna[2][100];
        int is_not_valid = 0;
        
        for (int i = 0; i < 2; i++) {
            printf("strand %d of DNA:\t", i + 1);
            scanf("%s", dna[i]);
            
            if (strcmp(dna[i], "q") == 0) {
                printf("\nExiting...\n");
                return 0;
            }
            
            for (int j = 0; j < strlen(dna[i]); j++) {
                if (dna[i][j] != 'A' && dna[i][j] != 'C' && dna[i][j] != 'G' && dna[i][j] != 'T') {
                    is_not_valid = 1;
                    break;
                }
            }
        }
        
        int d1 = strlen(dna[0]);
        int d2 = strlen(dna[1]);
        
        if (is_not_valid) {
            printf("Input is limited to A, C, G, T. Try again.\n\n");
            continue;
        }
        
        if (d1 != d2) {
            printf("\nBoth strands need to be the same length. Try again.\n\n");
            continue;
        }
        
        int hamming_distance = 0;
        
        printf("\t\t\t");
        for (int i = 0; i < d1; i++) {
            if (dna[0][i] != dna[1][i]) {
                printf("^");
                hamming_distance++;
            } else {
                printf(" ");
            }
        }
        
        printf("\n\n");
        printf("The Hamming Distance is %d.\n\n", hamming_distance);
        
    }
    return 0;
}