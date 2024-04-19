# include<stdio.h>

// int countodd(int arr[], int n);
 
// //  int main(){
// //     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
// //     printf("%d", countodd(arr, 10));

// //     return 0;
// //  }

// //  int countodd(int arr[], int n) {
// //     int i
// //     int count = 0;
// //      for(int i = 0; i<n; i++);
// //      if(arr[i] % 2 != 0) {
// //         count++;
// //      } return count;

// //  }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
    
//     printf("%d \n", *(arr+2));
//     printf("%d \n", *(arr+4));
//     return 0;
    
// }
// int countodd(int arr[], int n) {
//     int count = 0;
//     for(int i = 0; i < n; i++) {
//         if(arr[i] % 2 != 0);
//         count++;

//     }
//     return count;
// }

// int main() {
//     int n;
//     printf("enter n : ");
//     scanf("%d", &n);

//     int fab[n];
//     fab[0] = 0;
//     fab[1] = 1;


//     for(int i=2; i<n; i++) {
//       fab[i] = fab[i-1] + fab[i-2];
//       printf("%d \t", fab[i]);
      

//     }
// }

int main() {
    int n;
    printf("enter value :");
    scanf("%d", &n);

    int fab[n];
    fab[0] =0;
    fab[1] =1;

    for(int i=2; i<n; i++) {
        fab[i] = fab[i-1] + fab[i-2];
        printf("%d \t", fab[i]);
        
        
    }
}