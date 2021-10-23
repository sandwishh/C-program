#include<stdio.h>
//第一题
int main(){
    float x,y,result;
    char string;

    printf("please input first number for calculate: ");
    scanf("%f",&x);
    printf("calculate: ");
    scanf("%s",&string);
    printf("please input second number for calculate: ");
    scanf("%f",&y);

    if(string == '+'){
        result = x+y;
    }
    else if(string == '-'){
        result = x-y;
    }
    else if(string == '*'){
        result = x*y;
    }
    else if(string == '/'){
        if (y==0){
            printf("error");
            exit(0);
        }
        else{
            result = x/y;
        }

    }


    printf("result= %f",result);
}
