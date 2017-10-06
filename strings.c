#include<stdio.h>
#include<string.h>
char * strcppy(char * dest , char * src){
int i;
for(i = 0 ; src[i] != 0 ; i++){
dest[i] = src[i];
	}
dest[i] = 0;
return dest;
}
char * strncppy(char * dest , char * src , int n){
int i;
for(i = 0 ; i < n && src[i] != 0 ; i++){
dest[i] = src[i];
	}
dest[i] = 0;
return dest;
}

int strlength(char *s){
int i;
for( i = 0 ; s[i] != 0 ; i++){
;
}
return i;
}

char * strcaat(char * dest, char * src){
int i, j ;
for(i = 0 ; dest[i] != 0; i++){
;
}
for(j = 0 ; src[j] != 0; j++){
dest[i+j] = src[j];
}
dest[i+j] = 0;
return dest;
}
char * strncaat(char * dest, char * src , int n){
int i, j ;
for(i = 0 ; dest[i] != 0; i++){
;
}
for(j = 0 ; j < n && src[j] != 0; j++){
dest[i+j] = src[j];
}
dest[i+j] =0;
return dest;
}

int strchrr(char *src , char c){
int i ;
for(i = 0 ; src[i] != 0 ; i++){
if(src[i] == c){
break;
}

}
return i+1;
}
int strrchrr(char *src , char c){
int i ;
for(i = 0 ; src[i] != 0 ; i++){
if(src[i] == c){
break;
}

}
return strlength(src) - i;
}


int strcmpp(char *s1 , char*s2){
while(*s1){
if(*s1 == *s2){
s1++;
s2++;
}
else{
break;}
}
return *(s1) - *(s2);
}
 
int main(){
char a[20];
char b[] = "aegagasg";
char c[] = "aaaaaaaaaaaaaaaa";
char d[] = "aaaaaaaaaaaaaaab";
printf("the length of a is %d\n" , strlength(a));
printf("the length of b is %d\n" , strlength(b));
printf("the length of c is %d\n" , strlength(c));
printf("the length of d is %d\n" , strlength(d));
strcppy(a, b);
printf("char [] a is now %s\n" , a);
strcppy(a, c);
printf("char [] a is now %s\n" , a);
strcppy(a, d);
printf("char [] a is now %s\n" , a);
strcaat(a,b);
printf("char [] a is now %s\n" , a);
strcaat(a,c);
printf("char [] a is now %s\n" , a);
strcaat(a,d);
printf("char [] a is now %s\n" , a);
printf("b is in the %d position of the string\n" , strchrr(d, 'b'));
printf("e is in the %d position of the string\n" , strchrr(b, 'e'));
printf("c compared to d is %d\n" , strcmpp(c,d));
printf("d compared to c is %d\n" , strcmpp(d,c));
printf("c compared to c is %d\n" , strcmpp(c,c));
}








