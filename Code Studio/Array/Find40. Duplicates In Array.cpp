vector < int > findDuplicates(vector < int > & arr, int n)

{

  sort(arr.begin(),arr.end());

  vector<int>v;

  for(int i=0; i<n-1; i++)

  {

      if(arr[i]==arr[i+1]){  

          v.push_back(arr[i]);

        while(i<n-1&&arr[i]==arr[i+1]){

            i++;
        }

  }}
