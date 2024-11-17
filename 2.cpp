#include<iostream>
#include<iomanip>
using namespace std;

void swap(double a[],double b[],int n)
{
	double t;
	for(int i=0;i<n;i++)
	{
		t=a[i];
		a[i]=b[i];
		b[i]=t;
	}
}

void chu(double a[],int j,int n)
{
	double t;
	t=a[j];
	for(int i=0;i<n;i++)
		a[i]=a[i]/t;
}

void jia(double a[],double b[],double m,int n)
{
	for(int i=0;i<n;i++)
	{
		a[i]=a[i]+m*b[i];
	}
}



int main()
{
	int n,i,j;
	double t;
	double a[50][50];
//�������
    cout<<"���������Ľ���"<<endl;
	cin>>n;
	cout<<"���������"<<endl;
	for( i=0;i<n;i++)
		for( j=0;j<n;j++)
			cin>>a[i][j];
//�󲿹���
for(i=0;i<2*n;i++)
	{
		for(j=n;j<2*n;j++)a[i][j]=0;
	}
//��ӵ�λ��
    for(i=0;i<n;i++)
		for( j=n;j<2*n;j++)
		{
			if((j-n)==i){a[i][j]=1;}

		}
//�����л���
		for(j=0;j<n;j++)
		{
		for(i=j;i<n;i++){if(a[i][j]!=0)break;}
		swap(a[j],a[i],2*n);
		chu(a[j],j,2*n);
		for(i=j+1;i<n;i++)
		{
			jia(a[i],a[j],-a[i][j],2*n);
		}
		}

//�����л���

		for(j=n-1;j>=0;j--)
		{
			for(i=j;i>=0;j--){if(a[i][j]!=0)break;}
			swap(a[j],a[i],2*n);
			chu(a[j],j,2*n);
       for(i=j-1;i>=0;i--)
	   {
			jia(a[i],a[j],-a[i][j],2*n);
	   }

		}

//���

    for(i=0;i<n;i++)
	{
		for(j=n;j<2*n;j++)cout<<setw(4)<<a[i][j]<<"  ";
		cout<<endl;
	}
	return 0;
}

