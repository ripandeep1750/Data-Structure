class BubbleSort{
    static void sort(int arr[], int n){
        for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
            if(arr[j]>arr[j+1]){
                //swap
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    } 
    
    static void printarray(int arr[], int n){
        for(int i=0; i<n; i++)
        System.out.print(arr[i] +" ");
    }
    public static void main(String args[]){
        int arr[] = {5, 7 , 1 , 12, 2};
        int n=arr.length;
        sort(arr,n);
        System.out.println("Sorted array is: ");
        printarray(arr,n);
    }
}
// Time Complexity : O(N^2)
// Space Complexity : O(1)
OUTPUT:- Sorted array is: 
1 2 5 7 12 
