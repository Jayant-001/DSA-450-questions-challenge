void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i = n-1-1; i >= 0; i--) {
        arr[i+1] = arr[i];
    }
    
    arr[0] = temp;
}