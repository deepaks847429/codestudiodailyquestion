/*#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int>ans;
	        for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
            arr2[j]=INT_MIN;
			ans.push_back(arr1[i]);
			break;
			
			}
          }

        }
		return ans;
}*/
#include <bits/stdc++.h> 
 vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
  { // Write your code here.
   int i=0; int j=0; 
   vector<int>v; 
   while(i<n && j<m)
   {  if(arr1[i]<arr2[j])
   {   i++;  }  
   else if(arr2[j]<arr1[i])
   {   j++;  }  
   else{   v.push_back(arr1[i]);   i++;   j++;  }
    } return v; }
