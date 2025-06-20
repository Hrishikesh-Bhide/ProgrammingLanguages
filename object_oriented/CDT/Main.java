public class Main {
    public static void main(String[] args) {
        BankAccount ba = new BankAccount(20, 100);
        BankAccount ba2 = new BankAccount();
        ba.display();
        ba2.display();
        BankAccount.displayTotalAccounts();
        ba.transferTo(ba2, 50);
        ba.display();
        ba2.display();
    }
}
