#include <stdio.h>

int main(){

    int t[10]={1,45,3,4,5,6,7,8,-2,10};
    int min, max;
    minmax(t,10,&min,&max);
    printf("min: %i,max %i",min, max);

}

int maximum(int *t, int n){
    
    int max=t[0];

    for(int i=1;i<n;i++){
        if(max<t[i]){
            max=t[i];
        }
    }

    return max;
}
int minimum(int *t, int n){
    
    int min=t[0];

    for(int i=1;i<n;i++){
        if(min>t[i]){
            min=t[i];
        }
    }

    return min;
}

void f(int a, int b, int *s, int *p) {
    *s = a + b;
    *p = a * b;
}

void minmax(int *t, int n, int *pmin, int *pmax){
    *pmin=minimum(t,n);
    *pmax=maximum(t,n);
    
}
