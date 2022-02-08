#include<stdio.h>

//Manuel Aguirre Lab_02 ECEGR2020

long Factorial(long num){
    long i = 1;
    long factorial = 1;
    while (i <= num){
        factorial *= i;
        i++;
    }
    return factorial;
}

int IsPalindrome(long value){
    long rev = 0, rem, temp;
    temp = value;
    while(temp > 0){
        rem = temp%10;
        rev = (rev*10)+rem;
        temp = temp/10;
    }
    if(rev == value){
        return 1;
    }
    else{
        return 0;
    }
}

int HighestBitSet(int value){    
    printf("The binary equivalent of %ld", value);
    long binVal;
    int remainder, position = -1, place = 1, i = 0;
    while (value != 0)
    {
        remainder = value % 2;
        if (remainder == 1){
            position = i;
        }
        binVal = binVal + remainder * place;
        place = place * 10;
        value /= 2;
        i++;
    }
    printf(" is %ld ", binVal);
    printf("\n\n");
    printf("The highest Bit Set is %ld", position);
    printf("\n\n");
    return 0;
}

void ReverseIt(void){
    float arr[5];
    int i;
    FILE *pointer; 
    pointer = fopen("numbers.txt", "w");
    printf("Enter 5 floating point numbers:");
    printf("\n\n");
    for(i=0;i<5;i++){
            scanf("%f",&arr[i]);
    }
    printf("\n\n");
    printf("Floating point numbers in reverse order:\n");
    printf("\n\n");
    for(i=4;i>=0;i--){
            printf("%f ",arr[i]);
            fprintf(pointer,"%f ",arr[i]);

    }
    printf("\n\n");
    printf("\nData successfully written to file\n");
    fclose(pointer);
    return 0;
}

void ReverseItAgain(void){
    int i;
    float num;
    FILE *pointer1;
    pointer1 = fopen("numbers.txt", "r"); 
    printf("\nReading data from file:");
    printf("\n\n");
    for(i=4;i>=0;i--){    
        fscanf(pointer1,"%f",&num);
        printf("%f\n",num);      
    }
    fclose(pointer1);
    return 0;
}

void Pyramid(int lines){
    int space;
    FILE *pointer2;
    pointer2 = fopen("pyramid.txt", "w"); 
    for(int i = 1, k = 0; i <= lines; ++i, k = 0)
    {
        for(space = 1; space <= lines-i; ++space){
            printf("  ");
            fprintf(pointer2,"  ");
        }
        while(k != 2*i-1)
        {
            printf("* ");
            fprintf(pointer2,"* ");
            ++k;
        }
        printf("\n");
        fprintf(pointer2,"\n");
    }
    fclose(pointer2);
    

}

int main()
{
    long n;
    int q;
    int position;
    
    /*printf("Enter a positive integer\n");
    scanf("%li", &n);
    printf("%ld factorial is %ld!",n,Factorial(n));
    printf("\n\n");
    
    printf("Enter a positive integer\n");
    scanf("%li", &n);
    printf("%ld factorial is %ld!",n,Factorial(n));
    printf("\n\n");
    
    printf("Enter a positive integer\n");
    scanf("%li", &n);
    printf("%ld factorial is %ld!",n,Factorial(n));
    printf("\n\n");
    
    printf("Enter a positive integer\n");
    scanf("%li", &n);
    printf("%ld factorial is %ld!",n,Factorial(n));
    printf("\n\n");
    
    printf("Enter a positive integer\n");
    scanf("%li", &n);
    printf("%ld factorial is %ld!",n,Factorial(n));
    printf("\n\n");*/
    
    /*printf("Enter a positive integer you think is a pallindrome\n");
    scanf("%li", &n);
    if (IsPalindrome(n) == 0){
        printf("Your number %ld is not a palindrome", n);
        printf("\n\n");
    }
    else{
        printf("Your number %ld is a palindrome", n);
        printf("\n\n");
    }
    
    printf("Enter a positive integer you think is a pallindrome\n");
    scanf("%li", &n);
    if (IsPalindrome(n) == 0){
        printf("Your number %ld is not a palindrome", n);
        printf("\n\n");
    }
    else{
        printf("Your number %ld is a palindrome", n);
        printf("\n\n");
    }
    
    printf("Enter a positive integer you think is a pallindrome\n");
    scanf("%li", &n);
    if (IsPalindrome(n) == 0){
        printf("Your number %ld is not a palindrome", n);
        printf("\n\n");
    }
    else{
        printf("Your number %ld is a palindrome", n);
        printf("\n\n");
    }
    
    printf("Enter a positive integer you think is a pallindrome\n");
    scanf("%li", &n);
    if (IsPalindrome(n) == 0){
        printf("Your number %ld is not a palindrome", n);
        printf("\n\n");
    }
    else{
        printf("Your number %ld is a palindrome", n);
        printf("\n\n");
    }
    
    printf("Enter a positive integer you think is a pallindrome\n");
    scanf("%li", &n);
    if (IsPalindrome(n) == 0){
        printf("Your number %ld is not a palindrome", n);
        printf("\n\n");
    }
    else{
        printf("Your number %ld is a palindrome", n);
        printf("\n\n");
    }*/
    
    /*printf("Enter a positive integer ");
    scanf("%i", &n);
    HighestBitSet(n);
    
    printf("Enter a positive integer ");
    scanf("%i", &n);
    HighestBitSet(n);
    
    printf("Enter a positive integer ");
    scanf("%i", &n);
    HighestBitSet(n);
    
    printf("Enter a positive integer ");
    scanf("%i", &n);
    HighestBitSet(n);
    
    printf("Enter a positive integer ");
    scanf("%i", &n);
    HighestBitSet(n);*/
    
    ReverseIt();
    //ReverseItAgain();
    
    /*printf("Enter # of lines: ");
    scanf("%d", &q);
    Pyramid(q);
    
    printf("Enter # of lines: ");
    scanf("%d", &q);
    Pyramid(q);
    
    printf("Enter # of lines: ");
    scanf("%d", &q);
    Pyramid(q);*/


}