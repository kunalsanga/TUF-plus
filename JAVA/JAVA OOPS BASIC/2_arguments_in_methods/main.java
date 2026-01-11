class Test{
    public int sum(int num1, int num2){
        return num1+num2;
    }
}

public class main {
    public static void main(String[] args){
        Test t = new Test();
        int sum = t.sum(10,15);

        System.out.println(sum);

    }
    
}
