
/*This is a function problem.You only need to complete the function given below*/
/* The main function that implements QuickSort
 arr[] --> Array to be sorted,    low  --> Starting index,   high  --> Ending index
void quickSort(int arr[], int low, int high) {
    if (low < high)     {
        // pi is partitioning index, arr[p] is now  at right place
        int pi = partition(arr, low, high);
        // Separately sort elements before / partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}*/
/* This function takes last element as pivot, places  the pivot element 
   at its correct position in sorted  array, and places all smaller (smaller
   than pivot) to left of pivot and all greater elements to right  of pivot */
int partition (int arr[], int low, int high)
{
   // Your code here
   int pivot = arr[low];
   int i = low;
   int j = high+1;
   while(i<j){
       do{
           i++;
       }while(arr[i]<=pivot);
       do{
           j--;
       }while(arr[j]>pivot);
       if(i<j){
           swap(arr[i], arr[j]);
       }
   }
   if(i>j)
        swap(arr[j], arr[low]);
   return j;
}

//Note : Their is also another method of quick sort which will help in Quick sort in linked list.
//This is the Another Code for the Quick Sort.
