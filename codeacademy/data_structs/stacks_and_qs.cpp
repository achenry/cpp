#include <stack>
#include <iostream>
#include <queue>

int main() {
  // stack - last-in-last-out

  // creating a stack
  std::stack<int> plates;

  // adding elements
  plates.push(10);
  plates.push(8);
  plates.push(5);

  // removing elements
  plates.pop();

  // accessing elements
  std::cout << plates.top();

  // size of stack
  std::stack<int> tower;
  tower.push(3);
  tower.push(2);
  tower.push(1);
  std::cout << tower.size();

  // is empty
  std::cout << tower.empty();
  tower.pop();
  tower.pop();
  tower.pop();
  std::cout << tower.empty();

  // queue - first-in-first-out
  std::queue<std::string> line;

  // adding elements
  line.push("Amy");
  line.push("Bella");
  line.push("Chloe");

  // removing an element
  line.pop();

  // access an element
  std::cout << line.front();
  std::cout << line.back();

  // size
  std::queue<int> order;
  order.push(10);
  order.push(9);
  order.push(8);
  std::cout << order.size();

  // is empty
  std::cout << order.empty();
  order.pop();
  order.pop();
  order.pop();
  std::cout << order.empty();

}