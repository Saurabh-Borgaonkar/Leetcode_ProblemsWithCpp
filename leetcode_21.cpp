#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* a = list1;
    ListNode* b = list2;

    ListNode* head = new ListNode(-1);
    ListNode* prev = head;

    while (a != NULL && b != NULL) {
        if (a->val < b->val) {
            prev->next = a;
            prev = prev->next;
            a = a->next;
        } 
        else {
            prev->next = b;
            prev = prev->next;
            b = b->next;
        }
    }

    if (a != NULL) {
        prev->next = a;
    }

    if (b != NULL) {
        prev->next = b;
    }

    return head->next;
}

void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    ListNode* list1 = NULL;
    ListNode* tail1 = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        ListNode* node = new ListNode(x);

        if (list1 == NULL) {
            list1 = node;
            tail1 = node;
        } else {
            tail1->next = node;
            tail1 = node;
        }
    }

    ListNode* list2 = NULL;
    ListNode* tail2 = NULL;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        ListNode* node = new ListNode(x);

        if (list2 == NULL) {
            list2 = node;
            tail2 = node;
        } else {
            tail2->next = node;
            tail2 = node;
        }
    }

    ListNode* ans = mergeTwoLists(list1, list2);

    printList(ans);

    return 0;
}