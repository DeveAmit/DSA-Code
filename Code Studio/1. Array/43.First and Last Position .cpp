int firstOccurrence(vector<int> &arr, int size, int key)
{
    int start = 0, end = size-1;
    int mid;
    int ans = -1;
    while(start <= end)
    {
        mid = start + (end-start)/2;
        if(key == arr[mid]){
            ans = mid;
            end = mid-1;
        }
        else if(key > arr[mid])
            start = mid+1;
        else
            end = mid-1;
    }
    return ans;
}

int lastOccurrence(vector<int> &arr, int size, int key)
{
    int start = 0, end = size-1;
    int mid;
    int ans = -1;
    while(start <= end)
    {
        mid = start + (end-start)/2;
        if(key == arr[mid]){
            ans = mid;
            start = mid+1;
        }
        else if(key > arr[mid])
            start = mid+1;
        else
            end = mid-1;
    }
    return ans;
}

pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{

    pair<int, int> p;
    
    p.first = firstOccurrence(arr, n, x);
    p.second = lastOccurrence(arr, n, x);
    
    return p;
}