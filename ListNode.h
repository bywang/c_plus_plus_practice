class ListNode {
public:
    ListNode();
    ~ListNode();
    void setData(int data);
    int getData();
    void setNextNode(ListNode *node);
    ListNode *getNextNode();

private:
    int mData;
    ListNode *nextNode;
};


