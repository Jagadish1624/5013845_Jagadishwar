import java.util.*;

class SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode next;

    public SinglyLinkedListNode(int data) {
        this.data = data;
        this.next = null;
    }
}

public class InsertNode {

    static SinglyLinkedListNode insertNodeAtPosition(SinglyLinkedListNode head, int data, int position) {
        SinglyLinkedListNode newNode = new SinglyLinkedListNode(data);

        if (position == 0) {
            newNode.next = head;
            return newNode;
        }

        SinglyLinkedListNode current = head;
        for (int i = 0; i < position - 1 && current != null; i++) {
            current = current.next;
        }

        newNode.next = current.next;
        current.next = newNode;

        return head;
    }

    static void printList(SinglyLinkedListNode head) {
        SinglyLinkedListNode temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        SinglyLinkedListNode head = null;
        SinglyLinkedListNode tail = null;

        for (int i = 0; i < n; i++) {
            int value = sc.nextInt();
            SinglyLinkedListNode newNode = new SinglyLinkedListNode(value);

            if (head == null) {
                head = newNode;
                tail = newNode;
            } else {
                tail.next = newNode;
                tail = newNode;
            }
        }

        int data = sc.nextInt();
        int position = sc.nextInt();

        head = insertNodeAtPosition(head, data, position);
        printList(head);

        sc.close();
    }
}
