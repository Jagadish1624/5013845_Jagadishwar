import java.util.Scanner;

class DoublyLinkedListNode {
    int data;
    DoublyLinkedListNode next;
    DoublyLinkedListNode prev;

    DoublyLinkedListNode(int data) {
        this.data = data;
        this.next = null;
        this.prev = null;
    }
}

public class ReverseDoublyLinkedList {

    public static DoublyLinkedListNode reverse(DoublyLinkedListNode head) {
        if (head == null) {
            return null;
        }

        DoublyLinkedListNode current = head;
        DoublyLinkedListNode temp = null;

        while (current != null) {
            temp = current.prev;
            current.prev = current.next;
            current.next = temp;
            head = current;
            current = current.prev;
        }

        return head;
    }

    public static void printList(DoublyLinkedListNode head) {
        DoublyLinkedListNode temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();  
        while (t-- > 0) {
            int n = sc.nextInt();  

            if (n == 0) {
                System.out.println();
                continue;
            }

            DoublyLinkedListNode head = new DoublyLinkedListNode(sc.nextInt());
            DoublyLinkedListNode current = head;

            for (int i = 1; i < n; i++) {
                DoublyLinkedListNode newNode = new DoublyLinkedListNode(sc.nextInt());
                current.next = newNode;
                newNode.prev = current;
                current = newNode;
            }

            head = reverse(head);
            printList(head);
        }

        sc.close();
    }
}
