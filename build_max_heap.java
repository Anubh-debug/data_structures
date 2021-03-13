class max_heapify{
    public void max_heap(int[] array, int i, int len)
    {
        max_heapify heaps = new max_heapify();
        int left = 2*i + 1;
        int right = 2*i + 2;
        int largest,temp;
        if(left<=len-1 && array[left] > array[i])
        {
            largest = left;
        }
        else{
            largest = i;
        }
        if(right<=len-1 && array[right]>array[largest])
        {
            largest = right;
        }
        if(largest!=i)
        {
            temp = array[i];
            array[i] = array[largest];
            array[largest] = temp;
            heaps.max_heap(array, largest, len);
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
            max.max_heap(array, i,len);
        }
        for(int i=0;i<len;i++)
        {
            System.out.print(array[i]);
            System.out.print(" ");
        }
        
    }
    
}
