#include<stdio.h>
int bsearch(int [],int,int);
int main()
{int ar[50],item,n,b;
printf("enter the size");
scanf("%d",&n);
printf("enter the elements");
for(int i=0;i<n;i++)
scanf("%d",&ar[i]);
printf("enter the element to be searched");
scanf("%d",&item);
b=bsearch(ar,n,item);
if (b==-1)
printf("\n sorry element couldnt be found");
else
printf("element found at index  %d postion %d",b,b+1);
return 0;
}
int bsearch(int ar[],int size,int item)
{int beg,last,mid;
beg=0;last=size-1;
while(beg<=last)
{mid=(beg+last)/2;
if (item==ar[mid])return mid;
else if (item>ar[mid])beg= mid +1;
else last=mid-1;
}
return -1;
}
