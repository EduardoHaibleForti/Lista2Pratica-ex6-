#include <stdio.h>
#include <math.h>

int inverte_inteiro(int n){
    int res=0;
    int num=n;

    while(num>0){
        res = res*10 +num%10;
        num /=10;
    }
return res;


}
int verifica_palindromo(int n){
       return n==inverte_inteiro(n);


}
int main (){
    int a,b;
    int cl;
    printf("Digite o inicio do intervalo:");
    scanf("%d",&a);


    printf("Digite o final do intervalo :");
    scanf("%d",&b);

    for(cl=a;cl<=b;cl++){
        if(verifica_palindromo(cl)){
            printf("%d\n",cl);
        }
    }
return 0;
}
