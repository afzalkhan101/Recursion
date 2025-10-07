# 💨 Recursion Practice — Learn Recursion the Smart Way!

> A collection of beautifully written recursion problems and solutions in **C++** and **Python**, designed to help beginners master the art of thinking recursively.

---

## 📚 What’s Inside

* ✅  Basic recursion examples *(factorial, Fibonacci, countdown, etc.)*
* ✅  Intermediate problems *(sum of digits, reverse string, power function)*
* ✅  Advanced recursion challenges *(subsets, permutations, backtracking)*
* ✅  Illustrated recursion trees & step-by-step explanations
* ✅  Both **C++** and **Python** implementations

---

## 🧩 Example — Print Numbers from n to 1

```cpp
#include <iostream>
using namespace std;

void printReverse(int n) {
    if (n == 0) return;
    cout << n << " ";
    printReverse(n - 1);
}

int main() {
    int n;
    cin >> n;
    printReverse(n);
}
```

### 🖥 Output:

```
Input: 5
Output: 5 4 3 2 1
```

---

## 🧠 Learning Goals

* Understand **base case** and **recursive case**
* Visualize recursion as a **stack** of function calls
* Learn **divide & conquer** problem solving
* Build intuition for **backtracking** problems

---

## 🗂️ Folder Structure

```
Recursion/
│
├── Basics/
│   ├── factorial.cpp
│   ├── print_reverse.cpp
│   ├── fibonacci.py
│
├── Intermediate/
│   ├── sum_of_digits.cpp
│   ├── reverse_string.py
│
├── Advanced/
│   ├── subsets.cpp
│   ├── permutations.cpp
│
└── README.md
```

---

## 🚀 How to Run

### 🧑‍💻 C++

```bash
g++ filename.cpp -o output
./output
```

### 🐍 Python

```bash
python3 filename.py
```

---

## 🌟 Contributing

Pull requests are welcome!
If you’d like to add new recursion problems or improve explanations:

1. Fork this repo
2. Create a new branch
3. Add your code/problem
4. Submit a pull request

---

## 💡 Author

**Afzal Khan**
💻 Passionate about algorithms, recursion, and clean code.
📧 Reach me: [GitHub Profile](https://github.com/afzalkhan101)

---

## ⭐ Support

If you find this helpful —
please ⭐ **star** the repo to show your support and help others discover it!

<img width="700" height="528" alt="image" src="https://github.com/user-attachments/assets/6f3d1880-833d-43aa-a22a-8b97925b4c3f" />
