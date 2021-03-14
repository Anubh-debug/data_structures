/*
 * time complexity of build min heap is O(n)
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Anubh_sinha
 */
class min_heap{ //this class will do min heapify function to convert a heap to min heap. time complexity will be O(logn)
    public void min_heapify(int[] ar, int i, int size)
    {
        min_heap hp = new min_heap();
        int left = 2*i +1;
        int right = 2*i +2;
        int minimum;
        if(left<=size-1 && ar[left]<ar[i])
        {
            minimum = left;
        }else{
            minimum = i;
        }
        if(right<=size-1 && ar[right]<ar[minimum])
        {
            minimum = right;
        }
        if(minimum != i)
        {
            int temp = ar[i];
            ar[i] = ar[minimum];
            ar[minimum] = temp;
            hp.min_heapify(ar, minimum, size);
        }
    }   
}
class building_heap{ //this class will build heap
    public void build(int[] ar, int size)
    {
        min_heap m_heap = new min_heap();
        for(int i=(size/2)-1;i>=0;i--)
        {
           m_heap.min_heapify(ar,i,size); 
        }
    }
}
public class build_min_heap { //it is main class
    public static void main(String args[])
    {
        int[] heap = {25,2,5,6,8,21,27,18,19,1,5};
        int len = heap.length;
        building_heap bh = new building_heap();
        bh.build(heap, len);
        for(int i=0;i<len;i++)
        {
            System.out.print(heap[i]);
            System.out.print(" ");
        }
    }
}
