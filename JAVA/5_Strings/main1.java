public class main1 {
    public static void main(String[] args){
        String s1 = "Hello";
        char[] arr = {'W','o','r','l','d'};
        String s2 = new String(arr);
        System.out.println(s1+" "+s2);
        System.out.println(s1.charAt(4));
        System.out.println(s1.length());
        System.out.println(s1.substring(1,4));
        System.out.println(s1.equals("helo"));
    }
    
}
