// Find an example where it would make sense to use a name in its own initializer.

struct ListNode {
  int value_;
  ListNode *next_;
};

int main() {
  // linked list structure that ends with a guard node that points to itself
  ListNode const list_terminator = {0, &list_terminator};
  return 0;
}