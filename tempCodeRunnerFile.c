    for(int i=0; i<=n; i++){
        for(int space=1; space<=n-i; space++){
            printf("  "); // Print spaces for pyramid format
        }
        for(int j=0; j<=i; j++){
            printf("%4d ", combination(i, j)); // Adjust spacing for pyramid format
        }
        printf("\n");
    }