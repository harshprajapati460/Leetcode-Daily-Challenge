import javax.swing.plaf.metal.MetalProgressBarUI;

class JAVA{
    public static String mergeAlternately(String a, String b) {
        String ans = "";
        int i = 0,j = 0;
        int n = a.length();
        int m = b.length();
        while(i < n || j < m){
            if( i < n ) ans += a.charAt(i++);
            if( j < m ) ans += b.charAt(j++); 
        }
        return ans;
    }
    public static void main(String[] args) {
        String a = "ABC";
        String b = "PQRST";
        System.out.println(mergeAlternately(a,b));
    }
}