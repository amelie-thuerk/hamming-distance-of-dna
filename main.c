#include <stdio.h>
#include <string.h>

int main() {
    
    while (1) {
        char dna1[100];
        char dna2[100];
        printf("first strand of DNA:\t");
        scanf("%s", dna1);
        
        if (strcmp(dna1, "q") == 0) {
            printf("\nExiting...\n");
            break;
        }
        
        printf("second strand of DNA:\t");
        scanf("%s", dna2);
        
        if (strcmp(dna2, "q") == 0) {
            printf("\nExiting...\n");
            break;
        }
        
        int d1 = strlen(dna1);
        int d2 = strlen(dna2);
        
        if (d1 != d2) {
            printf("\nBoth strands need to be the same lenght. Try again.\n\n");
            continue;
        }
        
        int is_valid = 1;
        
        for (int i = 0; i < d1; i++) {
            if (dna1[i] != 'A' && dna1[i] != 'C' && dna1[i] != 'G' && dna1[i] != 'T') {
                is_valid = 0;
                break;
            }
            
            if (dna2[i] != 'A' && dna2[i] != 'C' && dna2[i] != 'G' && dna2[i] != 'T') {
                is_valid = 0;
                break;
            }
        }
        
        if (!is_valid) {
            printf("Input is limited to A, C, G, T. Try again.\n\n");
            continue;
        }
        
        int hamming_distance = 0;
        
        if (d1 == d2) {
            printf("\t\t\t");
            for (int i = 0; i < d1; i++) {
                if (dna1[i] != dna2[i]) {
                    printf("^");
                    hamming_distance++;
                } else {
                    printf(" ");
                }
            }
            
            printf("\n\n");
            printf("The Hamming Distance is %d.\n\n", hamming_distance);
        } 
        
    }
    return 0;
}