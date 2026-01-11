class Test{
    int age;
    public void assignAge(int num){
        age = num;
    }
}

class main{
    public static void main(String[] args){
        Test test1 = new Test();
        test1.assignAge(10);

        Test test2 = new Test();
        test2.assignAge(20);

        System.out.println(test1.age);
        System.out.println(test2);
    }
}