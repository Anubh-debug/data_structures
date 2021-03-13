class max_heapify{
    public void max_heap(int[] array, int i, int len)
    {
        max_heapify heaps = new max_heapify();
        int left = 2*i + 1; //left child
        int right = 2*i + 2; //right child
        int largest,temp; //declaring some essential variables
        if(left<=len-1 && array[left] > array[i]) //comparing node with its left child
        {
            largest = left;
        }
        else{
            largest = i;
        }
        if(right<=len-1 && array[right]>array[largest]) //comparing node with its right child
        {
            largest = right;
        }
        if(largest!=i)
        {
            temp = array[i];
            array[i] = array[largest];
            array[largest] = temp;
            heaps.max_heap(array, largest, len); //calling max_heapify function again for the node that have been exchanged
    }}
}
public class build_heap {
    public static void main(String args[])
    {
        max_heapify max = new max_heapify();
        int[] array = {23,45,12,56,78,11,90,55,33,98};
        int len = array.length;
        for(int i = (len/2)-1;i>=0;i--)
        {
            max.max_heap(array, i,len); //calling max_heapify function on the non-leaf node to make it max heap
        }
        for(int i=0;i<len;i++)
        {
            System.out.print(array[i]);
            System.out.print(" ");
        }
        
    }
    
}
