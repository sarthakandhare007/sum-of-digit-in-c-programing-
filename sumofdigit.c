void main()
{
int s=0,x,y,r;

printf("Enter a Number:");
scanf("%d",&x);

while(x!=0)
{
r=x%10;
s=s+r;
x=x/10;

}
printf("Sum of digits is %d",s);

}