vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {

// Write your code here.

   int s1=0,s2=0;

   for(int i=0;i<n;i++){

       s1=(s1*10)+a[i];

   }

   

   for(int i=0;i<m;i++){

       s2=(s2*10)+b[i];

   }

   

   int total=s1+s2,rem;

   vector<int> newArr;

   while(total!=0){

       rem=total%10;

       newArr.push_back(rem);

       total=total/10;

   }

   reverse(newArr.begin(),newArr.end());

   return newArr;

}