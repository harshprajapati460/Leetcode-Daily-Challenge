import java.util.ArrayList;
import java.util.List;
class JAVA{
    public static List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        List<Boolean> ans=new ArrayList<Boolean>();
        int maxi = -1;
        for(int i = 0  ; i < candies.length ; i++){
           if(candies[i] > maxi){
               maxi = candies[i];
           }
        }
        for(int i = 0; i < candies.length; i++){
            if(candies[i] + extraCandies >= maxi){
                ans.add(true);
            }
            else {
                ans.add(false);
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        int[] arr = {2,3,5,1,3};
        int extra = 3;
        System.out.println("Kids with maxi candies ");
        List<Boolean> a = new ArrayList<Boolean>();
        a = kidsWithCandies(arr,extra);
        for(int i = 0 ; i < a.size(); i++){
            System.out.print(a.get(i)+" ");
        }
    }
    
}