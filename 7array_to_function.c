# include <stdio.h>

// void printArray(int *ptr ,int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("the value fo element %d is %d\n",i+1,*(ptr +i));
//     }
    
// }
//we can also do this by

void printArray(int ptr[] ,int n){
    for (int i = 0; i < n; i++)
    {
        printf("the value fo element %d is %d\n",i+1,ptr[i]);
    }
    ptr[2] =5454 ; // this value will be change in main as well
    
}

int main(){
    int arr[] ={1,15,4,84,5,4,15} ;
    printArray(arr,7);
    printf("%d\n",arr[2]) ;
    

 

    return 0;
}