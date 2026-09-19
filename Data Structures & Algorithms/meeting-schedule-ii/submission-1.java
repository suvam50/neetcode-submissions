/**
 * Definition of Interval:
 * public class Interval {
 *     public int start, end;
 *     public Interval(int start, int end) {
 *         this.start = start;
 *         this.end = end;
 *     }
 * }
 */

class Solution {
    public int minMeetingRooms(List<Interval> intervals) {
        intervals.sort(Comparator.comparingInt(e->e.start));
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();

        for(int i=0;i<intervals.size();i++){

            Interval interval=intervals.get(i);
            int strt=interval.start;
            int ed=interval.end;

            if(!minHeap.isEmpty() && minHeap.peek()<=strt){
                minHeap.poll();
            }

            minHeap.offer(ed);
        }
       
        return minHeap.size();

    }
}
