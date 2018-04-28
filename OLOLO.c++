#include <bits/stdc++.h>
using namespace std;
int main() {
	  int n,i;
	  long long int a[500002];
	  scanf("%d",&n);
	  for(i=0;i<n;i++)
	  {
	      scanf("%d",&a[i]);
	  }
	  int res=a[0];
	  for(i=1;i<n;i++)
	  {
	      res=res^a[i];
	  }
	  printf("%d\n",res);
}
