import java.util.Scanner;

class LinkedList {

    LinkedList(int data) {
    }
    int data;
    LinkedList next;
    LinkedList (int data) {
        this.data = data;
        this.next = null;
    }
}

class SinglyLinkedList {
    LinkedList head;

    void insertNode(int data) {
        LinkedList newNode = new LinkedList(data);
        if (head == null) {
            head = newNode;
        } else {
            LinkedList temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newNode;
        }
    }

    LinkedList reverse(LinkedList head) {
        LinkedList prev = null, curr = head, next = null;
        while (curr != null) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void printList(LinkedList head) {
        LinkedList temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }
}

public class ReverseLinkedListDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCases = sc.nextInt();

        while (testCases-- > 0) {
            int n = sc.nextInt();
            SinglyLinkedList list = new SinglyLinkedList();
            for (int i = 0; i < n; i++) {
                list.insertNode(sc.nextInt());
            }
            LinkedList newHead = list.reverse(list.head);
            list.printList(newHead);
            System.out.println();
        }
    }
}
