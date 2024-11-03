import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class App {
    private static ArrayList<String> list_ = new ArrayList<>();

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean running = true;

        while (running) {
            printMenu();
            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 0:
                    running = false;
                    break;
                case 1:
                    addItem(scanner);
                    printList();
                    break;
                case 2:
                    removeItem(scanner);
                    printList();
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        }
    }

    private static void printMenu() {
        System.out.println("\nAvailable actions:");
        System.out.println("0 - to shutdown");
        System.out.println("1 - add items to list");
        System.out.println("2 - remove any items");
        System.out.print("\nEnter a number: ");
    }

    private static void addItem(Scanner scanner) {
        System.out.print("Enter item to add: ");
        String item = scanner.nextLine().trim();
        if (item.isEmpty()) {
            System.out.println("Item cannot be empty.");
        } else if (list_.contains(item.toLowerCase())) {
            System.out.println("Item already exists in the list.");
        } else {
            list_.add(item.toLowerCase());
            System.out.println("Item added: " + item);
        }
    }

    private static void removeItem(Scanner scanner) {
        System.out.print("Enter item to remove: ");
        String item = scanner.nextLine().trim();
        if (list_.remove(item.toLowerCase())) {
            System.out.println("Item removed: " + item);
        } else {
            System.out.println("Item not found in the list.");
        }
    }

    private static void printList() {
        if (list_.isEmpty()) {
            System.out.println("list is empty");
        } else {
            
            // Collections.sort(list_);

            sortList(list_);
            
            System.out.println("list (sorted):");
            for (String item : list_) {
                System.out.println("- " + item);
            }
        }
    }

    private static void sortList(ArrayList<String> list) {
        for (int i = 0; i < list.size() - 1; i++) {
            for (int j = 0; j < list.size() - 1 - i; j++) {
                if (list.get(j).compareTo(list.get(j + 1)) > 0) {

                    String temp = list.get(j);

                    list.set(j, list.get(j + 1));
                    list.set(j + 1, temp);
                }
            }
        }
    }
}
