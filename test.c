#include <stdio.h>
#include <stdlib.h>
#define max 100

char stack[max];
int top = -1;
int isEmpty();
void push(char *info);
int printstack();

int main(int argc, char *argv[])
{
    int i = 0;
    char name[max];
    while (scanf("%s", &name[i]) != EOF)
    {
        push(name);
    }
    while (!isEmpty())
    {
        printf("%c", printstack());
    }
    printstack();
}

int isEmpty(){
    if(top==-1){
		return 1; 
	}else{
		return 0;
	}
}

void push(char *info)
{
    if(top >= max){	
	}else{
        top++;
        stack[top] = *info;
    }
}

int printstack()
{   
    char data;
    if(isEmpty()){
	}else{
        data = stack[top];
        top--;
        return data;
    }
}