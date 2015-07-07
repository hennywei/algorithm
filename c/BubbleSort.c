#include <stdio.h>

int sortBubble(int arr[], int n){
    int sortable;
    int sortcount = 0;
    int unsorted = n;
    if(n == 0){
        return 0;
    }
    int loops = 0;

    do{
        sortable = 0;
        int i;
        for(i = 0; i < unsorted; ++i ){
            loops++;
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i]  = arr[i+1];
                arr[i+1] = temp;
                sortable = 1;
                sortcount++;
            }
            if(i == unsorted-2)
              unsorted--;
        }
    }while(sortable == 1);
    
    printf("loops num: %d\n",loops);
    return sortcount;
}



int main(void){
    int a[] = {5, 4, 3, 2, 1};
    
    int num = sortBubble(a,sizeof(a)/sizeof(int));
    printf("a[0]:%d a[1]:%d a[2]: %d a[3]: %d a[4]: %d.\n", a[0], a[1], a[2], a[3], a[4]);
    printf("sort times: %d",num);
    return 0 ;
}

