#include <stdio.h>

void  main(int argc, char const *argv[])
{
int n1,n2,n3;
printf("enter number one\n");
scanf("%d",&n1);
printf("enter number two\n");
scanf("%d",&n2);
printf("enter number three\n");
scanf("%d",&n3);

printf("inputed values are %d , %d , %d \n",n1,n2,n3);
int max=0;
int secoundmax=0;
//find out max from three number
if(n1>n2){
   if(n1>n3){
       max=n1;
   }else{
       max=n3;
   }
}else{
   if(n2>n3){
       max=n2;
   }else{
       max=n3;
   }
}

printf("max is %d \n",max);

//find out secound max from three number
if(max==n1){
if(n2<n3){
if(n3==n1){
secoundmax=n2;
}else{
secoundmax=n3;
}

}else{
if(n2==n1){
secoundmax=n3;
}
else{
secoundmax=n2;
}
}
}else if(max==n2){
if(n1<n3){
if(n3==n2){
secoundmax=n1;
}else{
secoundmax=n3;
}

}else{
if(n1==n2){
secoundmax=n3;
}else{
secoundmax=n1;
}

}
}else{
if(n1<n2){
if(n2==n3){
secoundmax=n1;
}else{
secoundmax=n2;
}

}else{
if(n1==n3){
secoundmax=n2;
}
else{
secoundmax=n1;
}

}
}

printf("secound max is : %d",secoundmax);

}


