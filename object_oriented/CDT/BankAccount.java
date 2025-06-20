public class BankAccount {
    private static int count = 0;
    private int accNo;
    private int age;
    private double balance;

    public BankAccount(){
        this.accNo = count++;
        this.age = 10;
        this.balance = 100;
    }

    public BankAccount(int age, double initialBalance) {
        if (age < 18) {
            throw new IllegalArgumentException("Age should not be less than 18");
        }
        this.accNo = count++;
        this.age = age;
        this.balance = initialBalance;
    }

    public int getAccNo() {
        return accNo;
    }

    public int getAge() {
        return age;
    }

    public void incrementAge() {
        this.age += 1;
    }

    public double getBalance() {
        return balance;
    }

    public void display() {
        System.out.println("Acc: " + accNo + ", Age: " + age + ", Balance: " + balance);
    }

    public static void displayTotalAccounts(){
        System.out.println("Total Accounts: " + count); 
    }

    public boolean transferTo(BankAccount recepient, double val){
        if (val > this.balance){
            System.err.println("Not enough funds");
            return false;
        }
        this.balance -= val;
        recepient.balance += val;
        return true;
    }   
}
