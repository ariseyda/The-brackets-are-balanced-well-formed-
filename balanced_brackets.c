#include<stdio.h>
#include<string.h>

//Given a string of round, curly, and square open and closing brackets, return whether the brackets are balanced (well-formed).
//For example, given the string "([])[]({})", you should return true.
//Given the string "([)]" or "((()", you should return false.

int main(){
	
	char string[100];
	
	printf("Enter a string of round, curly, and square open and closing brackets:");
	scanf("%s",string);
	
	int len=strlen(string);
	
	int i,count=0;
	
	for(i=0;i<len-1;i++){
		if(string[i]=='['&&string[i+1]!=']'||string[i]=='{'&&string[i+1]!='}'){
			count++;
		}
	}
	
	
	if(count==0){
		printf("TRUE");
	}
	else{
		printf("FALSE");
	}
	

	
	return 0;
}
 
