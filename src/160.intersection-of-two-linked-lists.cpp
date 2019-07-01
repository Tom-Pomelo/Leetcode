/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p = headA;
	    ListNode* q = headB;
	    if (p == NULL || q == NULL) {
	    	return NULL;
	    }
	    while (p != q) {
	    	if (p) {
                p = p->next;
            } else {
                p = headB;
            }
            if (q) {
                q = q->next;
            } else {
                q = headA;
            }
	    }
	    return p;
    }
};

