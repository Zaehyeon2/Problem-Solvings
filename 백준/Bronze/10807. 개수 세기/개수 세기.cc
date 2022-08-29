#include <stdio.h>


int main(){
    int arr[210] = {};
    int N;


    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        int temp;
        scanf("%d", &temp);
        arr[temp+100]++;
    }
    int ans;
    scanf("%d", &ans);
    printf("%d\n", arr[ans+100]);
}