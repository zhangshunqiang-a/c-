#define _CRT_SECURE_NO_WARNINGS 1
 #include <stdio.h>
//int main ()
//{
//{
//	int i=0;
//	int n=0;
//	int ret=1;
//	int sum=0;
//	
//	for	(n=1;n<=3;n++)
//	{	ret=1;
//		for(i=1;i<=n;i++)
//	{
//		ret=ret*i;
//		}
//
//		sum=sum+ret; 
//	}
//	
//		printf("sum =%d\n",sum); 
//
//
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;
//	int i=0;
//	int  sz=sizeof(arr)/sizeof(arr[0]);
//		int l=0;
//		int r=sz-1;
//		while(l<=r)
//		{
//			int mid=(l+r)/2;
//          if(arr[mid]>k)
//		  {  r=mid-1;
//		  }	 else if(arr[mid]<k)
//		  {
//			  l=mid+1;
//		  }	
//		  else
//		  {
//
//			printf("�ҵ��ˣ��±��ǣ� %d\n",mid) ;
//				break;
//		}
//	}
//	if(l>r)
//		printf("�Ҳ���\n")	;
//
//
//
//	return 0;
//}
//	
int binary_search(int arr[],int k,int sz)
{
	int left=0;
	int right=sz-1;
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(arr[mid]<k)
		{
			left=mid+1;
		}
		else if(arr[mid]>k)
		{
			right=mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=5;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int ret=binary_search(arr,k,sz);
	if(ret==-1)
	{
		printf("�Ҳ���ָ������\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
	}
	return 0;
}