#include <stdio.h>

int main() {
    int arr[5];
    int i, src, flag = 0;

    for (i = 0; i < 5; i++) { 
        printf("Enter the number: ");
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &src);

    for (i = 0; i < 5; i++) { 
        if (arr[i] == src) {
            printf("The number is: %d\n", src); 
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("Number not found\n");
    }

    return 0; 
}
