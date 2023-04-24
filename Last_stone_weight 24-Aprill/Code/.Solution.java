import java.util.PriorityQueue;

import javax.swing.LayoutStyle;

import java.util.Comparator;
class Solution{
    public static int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> pq = new PriorityQueue<>(Comparator.reverseOrder());
        for(int i=0;i<stones.length;i++){
            pq.add(stones[i]);
        }
        int p,q;
        while(pq.size()>1){
            p=pq.poll();
            q=pq.poll();
            // System.out.println(÷p+" "+q);
            pq.add(p-q);
        }
        return pq.poll();
        
    }
    public static void main(String[] args) {
          int [] arr = {2,7,4,1,8,1};
          System.out.println(lastStoneWeight(arr));
    }
}