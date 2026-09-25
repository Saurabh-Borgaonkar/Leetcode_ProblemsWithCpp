#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* oddEvenList(ListNode* head) {

    if (head == NULL || head->next == NULL) {
        return head;
    }

    ListNode* odd = head;
    ListNode* even = head->next;
    ListNode* evenHead = even;

    while (even != NULL && even->next != NULL) {

        // Connect current odd node to next odd node
        odd->next = even->next;
        odd = odd->next;

        // Connect current even node to next even node
        even->next = odd->next;
        even = even->next;
    }

    // Attach even list after odd list
    odd->next = evenHead;

    return head;
}

void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    ListNode* head = NULL;
    ListNode* tail = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        ListNode* node = new ListNode(x);

        if (head == NULL) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    head = oddEvenList(head);

    printList(head);

    return 0;
}