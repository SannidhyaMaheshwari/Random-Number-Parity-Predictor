#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    FILE *file = fopen("random_numbers.csv", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    int n= 2000000; // 1 Million no.   
    srandom(time(NULL)); // Seed the random number generator
    
    for (int i = 0; i < n; i++) {
        long rand_num = random();
        fprintf(file, "%ld\n", rand_num);
    }
    
    fclose(file);
    printf("Dataset generated: random_numbers.csv\n");
    return 0;
}