#include <iostream>
using namespace std;


void inputarray(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}

void outputarray(int a[], int n){
	cout<<"{";
	for(int i=0;i<n;i++){
		cout<<a[i]<<";";
	}
	cout<<"}";
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void insertionsort(int a[], int n){
    for(int i=1;i<n;i++){
        int temp=a[i];
        int post=i;
        while (post>0&&a[post-1]>temp){
            a[post]=a[post-1];
            post--;
        }
        a[post]=temp;
    }
}

void selectionsort(int *a, int n){
    
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i;j<n;j++){
            if(a[j]<a[index]) index=j;
        }
        swap(a[i],a[index]);
    }
}

void bubblesort(int a[], int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j+1]<a[j]) swap(a[j],a[j+1]);
        }
    }
}
int main(){
	int *a;
	int n;
	cout<<"n=";
	cin>>n;
	a=new int[n];
	inputarray(a,n);
	selectionsort(a,n);
	outputarray(a,n);
	return 0;
}