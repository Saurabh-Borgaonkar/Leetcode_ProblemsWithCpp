#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

ListNode* swapPairs(ListNode* head) {

    if(head == NULL)
        return head;

    if(head->next == NULL)
        return head;

    ListNode* temp = head;

    ListNode* odd = new ListNode(-1);
    ListNode* i = odd;

    ListNode* even = new ListNode(-1);
    ListNode* j = even;

    int k = 1;

    while(temp != NULL) {

        if(k % 2 != 0) {
            i->next = temp;
            i = i->next;
            temp = temp->next;
        }
        else {
            j->next = temp;
            j = j->next;
            temp = temp->next;
        }

        k++;
    }

    i->next = NULL;
    j->next = NULL;

    odd = odd->next;
    even = even->next;

    ListNode* node = new ListNode(-1);
    head = node;

    while(odd != NULL && even != NULL) {

        node->next = even;
        even = even->next;
        node = node->next;

        node->next = odd;
        odd = odd->next;
        node = node->next;
    }

    return head->next;
}

void printList(ListNode* head) {

    while(head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {

    // 1 -> 2 -> 3 -> 4
    ListNode* head = new ListNode(1);

    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    cout << "Before: ";
    printList(head);

    head = swapPairs(head);

    cout << "After:  ";
    printList(head);

    return 0;
}