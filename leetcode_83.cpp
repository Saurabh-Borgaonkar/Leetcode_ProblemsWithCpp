#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head) {

    if (head == NULL) {
        return head;
    }

    ListNode* temp = head;

    while (temp != NULL && temp->next != NULL) {

        if (temp->val == temp->next->val) {
            temp->next = temp->next->next;
        } 
        else {
            temp = temp->next;
        }
    }

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
        } 
        else {
            tail->next = node;
            tail = node;
        }
    }

    head = deleteDuplicates(head);

    printList(head);

    return 0;
}