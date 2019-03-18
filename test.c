#include <stdio.h>
#include <math.h>
int two(int n)
{
  return n*n;
}
int main(int argc, char const *argv[])
{
  float r,i,root2=sqrt(2),t=0;
  int num=0;
  scanf("%f",&r);

  while(i<=r){
    if(t%2==1)i+=1;
    else i=i
  }
  int s =(int)t%2;
  switch(s){
    case 1:num=two(t)+t*4;
           break;
    case 0:num=two(t);
           break;
  }

  printf("%d\n",num);


}
