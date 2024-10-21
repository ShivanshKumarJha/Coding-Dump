#include<bits/stdc++.h>
using namespace std;

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {swap(&a[j], &a[j + 1]);}
        }
    }
}

void InsertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int current = a[i], j;
        for (j = i - 1; j >= 0; j--) {
            if (current < a[j]) {a[j + 1] = a[j];}
            else {break;}
        }
        a[j + 1] = current;
    }
}

int firstIndex(int input[], int size, int x) {
    if (size == 0) {return -1;}
    if (input[size] == x) {return 0;}
    int smallOutput = firstIndex(input, size - 1, x);
    int ans = (smallOutput == -1) ? -1 : (smallOutput += 1);
    return ans;
}

int lastIndex(int input[], int size, int x) {
    if (size < 0) {return -1;}
    if (input[size] == x) {return size;}
    return lastIndex(input, size - 1, x);
}

void helper(int a[], int n, int currIdx, int x, int &count) {
    if (n == 0) {return;}
    if (a[currIdx] == x) {count++;}
    helper(a, n - 1, currIdx + 1, x, count);
}

int allIndexes(int a[], int n, int x) {
    int count = 0;
    helper(a, n, 0, x, count);
    return count;
}

int countZeroes(int n) {
    if (n > 0 && n < 10) {return 0;}
    if (n == 0) {return 1;}

    int smallOutput = countZeroes(n / 10);
    return (n % 10 == 0) ? (smallOutput + 1) : smallOutput;
}

double geometricSum(int k) {
    if (k == 0) {return 1;}
    double smallOutput = geometricSum(k - 1);
    smallOutput += (1.00 / (pow(2, k)));
    return smallOutput;
}

bool helper(char input[], int size, int si, int ei) {
    if (si > ei) {return true;}
    if (input[si] != input[ei]) {return false;}
    return helper(input, size - 2, si + 1, ei - 1);
}

bool checkPalindrome(char input[]) {
    int size = strlen(input);
    return helper(input, size, 0, size - 1);
}

void replacePiHelper(char str[], int start) {
    if (start == strlen(str) - 1 || start == strlen(str)) {return;}
    replacePiHelper(str, start + 1);
    if (str[start] == 'p' && str[start + 1] == 'i') {
        for (int i = strlen(str); i >= start + 2; i--) {str[i + 2] = str[i];}
        str[start] = '3';
        str[start + 1] = '.';
        str[start + 2] = '1';
        str[start + 3] = '4';
    }
}

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n <= 0) {return;}
    towerOfHanoi(n - 1, source, destination, auxiliary);
    cout << source << " " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

void merge(int a[], int si, int mid, int ei) {
    int i = si, j = mid + 1;
    int b[ei - si + 1];
    int k = 0;
    while (i <= j) {
        if (a[i] <= a[j]) {b[k++] = a[i];}
        else {b[k++] = a[j];}
    }
    for (; i <= mid; i++) {
        b[k++] = a[i];
    }
    for (; j <= ei; j++) {
        b[k++] = a[j];
    }
    for (int i = si; i <= ei; i++) {
        a[i] = b[i - si];
    }
}

void mergeSortHelper(int a[], int si, int ei) {
    if (si > ei) {return;}
    int mid = si + (ei - si) / 2;
    mergeSortHelper(a, si, mid);
    mergeSortHelper(a, mid + 1, ei);
    merge(a, si, mid, ei);
}

void mergeSort(int a[], int n) {
    mergeSortHelper(a, 0, n - 1);
}

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = a[i], minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < min) {minIndex = j; min = a[j];}
        }
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;

    }
}

int partition(int a[], int start, int end) {
    int t = a[start]; int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (a[start] <= t) {count++;}
    }

    int pivotIndex = start + count;
    swap(&a[start], &a[pivotIndex]);

    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex) {
        while (a[i] <= t) {i++;}
        while (a[j] > t) {j--;}
        if (i < pivotIndex && j > pivotIndex) {swap(&a[i], &a[j]); i++; j--;}
    }
    return pivotIndex;
}

void quickSortHelper(int input[], int start, int end) {
    // your code goes here
    if (start >= end) {return;}
    int pivotIndex = partition(input, start, end);
    quickSortHelper(input, start, pivotIndex - 1);
    quickSortHelper(input, pivotIndex + 1, end);
}

void quickSort(int input[], int size) {
    quickSortHelper(input, 0, size - 1);
}

int subsequences(string input, string output[]) {
    if (input.size() == 0) {
        output[0] = "";
        return 1;
    }

    int smallOutput = subsequences(input.substr(1), output);
    for (int i = 0; i < smallOutput; i++) {
        output[i + smallOutput] = input[0] + output[smallOutput];
    }

    return 2 * smallOutput;
}

unordered_map<int, string> m = {{2, "abc"}, {3, "def"}, {4, "ghi"}, {5, "jkl"}, {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}};

int keypad(int num, string output[]) {
    if (num == 0) {
        output[0] = ""; return 1;
    }
    int lastDigit = num % 10;

    int smallOutput = keypad(num / 10, output);
    int smallSize = m[lastDigit].size();

    string temp[smallOutput * smallSize]; int k = 0;
    for (int i = 0; i < smallOutput; i++) {
        for (int j = 0; j < smallSize; j++) {
            temp[k++] = output[i] + m[lastDigit][j];
        }
    }
    for (int i = 0; i < (smallOutput + smallSize); i++) {
        output[k++] = temp[i];
    }
    return smallOutput * smallSize;
}

int subset(int input[], int n, int output[][20]) {
    if (n == 0) {
        output[0][0] = 0;
        return 1;
    }

    int smallOutput = subset(input + 1, n - 1, output);
    for (int i = 0; i < smallOutput; i++) {
        output[smallOutput + i][0] = output[i][0] + 1;
        output[smallOutput + i][1] = input[0];
        for (int j = 2; j < output[smallOutput + i][0]; j++) {
            output[smallOutput + i][j] = output[i][j - 1];
        }
    }
    return 2 * smallOutput;
}

int subsetSumToK(int input[], int n, int output[][50], int k) {
    if (n == 0) {
        if (k == 0) {
            output[0][0] = 0; return 1;
        }
        return 0;
    }

    int smallOutput1 = subsetSumToK(input + 1, n - 1, output, k);
    int smallOutput2 = subsetSumToK(input + 1, n - 1, output + smallOutput1, k - input[0]);

    int smallSize = smallOutput1 + smallOutput2;
    for (int i = smallOutput1; i < smallSize; i++) {
        for (int j = output[i][0]; j > 0; j--) {
            output[i][j + 1] = output[i][j];
        }
        output[i][1] = input[0];
        output[i][0]++;
    }
    return smallSize;
}

void help(string input, string output, vector<string> &ans) {
    if (input.size() == 0) {
        ans.push_back(output); return;
    }

    //First convert the character in the numeric format and then convert it into the
    //alphabetical format
    char ch = (input[0] - 48) + 96;

    if (input[0] == '0') {return;}
    help(input.substr(1), output + ch, ans);

    if (input.size() > 1) {
        int d = (input[0] - 48) * 10 + (input[1] - 48);
        if (d > 26)
            return;
        char ch = 96 + d;
        help(input.substr(2), output + ch, ans);
    }

}

int getCodes(string input, string output[10000]) {
    vector<string> v;
    string out = "";
    help(input, out, v);

    for (int i = 0; i < v.size(); i++) {
        output[i] = v[i];
    }
    return v.size();
}

int returnPermutations(string input, string output[]) {
    if (input.size() == 0) {
        output[0] = "";
        return 1;
    }

    string smallOutput[1000]; int k = 0;
    int smallAns = returnPermutations(input.substr(1), smallOutput);
    for (int i = 0; i < smallAns; i++) {
        for (int j = 0; j <= smallOutput[i].length(); j++) {
            output[k++] = smallOutput[i].substr(0, j) + input[0] + smallOutput[i].substr(j);
        }
    }
    return k;
}

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* takeInput_Better() {
    int data;
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;
    while (data != -1) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int count(Node* head) {
    if (head == NULL) {return 0;}
    Node* temp = head;
    int length = 0;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
}

void printithNode(Node* head, int k) {
    Node* temp = head;
    int c = 0;
    while (temp != NULL) {
        if (c == k) {cout << temp->data << endl; return;}
        temp = temp->next; c++;
    }
}

Node* deleteNode(Node* head, int pos) {
    if (head == NULL) {return NULL;}
    if (pos == 0) {head = head->next; return head;}
    Node* temp = head;
    int c = 0;
    while (temp != NULL) {
        if (c == pos - 1) {
            if (temp->next != NULL) {
                temp->next = temp->next->next; break;
            }
        }
        temp = temp->next;
        c++;
    }
    return head;
}

Node* insertNode(Node *head, int i, int data) {
    if (head == NULL) {return head;}
    if (i == 0) {
        Node* newNode = new Node(data);
        Node* temp = head;
        head = newNode; head->next = temp;
        return head;
    }
    Node* temp = insertNode(head->next, i - 1, data);
    head->next = temp;
    return head;
}

Node *deleteNodeRec(Node *head, int pos) {
    if (head == NULL) {return NULL;}
    if (pos == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = deleteNodeRec(head->next, pos - 1);
    head->next = temp;
    return head;
}

Node *appendLastNToFirst(Node *head, int n) {
    Node* slow = head;
    Node* fast = head;

    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }
    while (fast->next != NULL) {
        slow = slow->next;
        fast = fast->next;
    }

    Node* temp = slow->next;
    fast->next = head;
    head = temp;
    slow->next = NULL;
    return head;
}

Node *removeDuplicates(Node *head) {
    if (head == NULL) {return head;}
    Node* t1 = head;
    Node* t2 = head->next;
    while (t2 != NULL) {
        if (t1->data == t2->data) {
            Node* temp = t2;
            t2 = t2->next;
            if (t2) {
                delete temp;
                t1->next = t2;
            }
        }
        else {
            t1->next = t2;
            t1 = t2;
            t2 = t2->next;
        }
    }
    return head;
}

void printReverse(Node *head) {
    if (head == NULL) {return;}
    printReverse(head->next);
    cout << head->data << " ";
}

int reverseNumber(Node* head) {
    if (head == NULL) {return 0;}

    int revNum = (head->data) + 10 * reverseNumber(head->next);
    return revNum;
}

bool isPalindrome(Node* head) {
    if (head == NULL) {return head;}
    int num = 0;
    Node* temp = head;
    while (temp != NULL) {
        num = num * 10 + (temp->data);
        temp = temp->next;
    }

    int revNum = reverseNumber(head);

    if (num == revNum)
        return true;
    return false;
}

Node* midPoint(Node* head) {
    if (head == NULL || head->next == NULL) {return head;}
    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2) {
    if (head1 == NULL) {return head2;}
    if (head2 == NULL) {return head1;}

    Node* fh = NULL;
    Node* ft = NULL;
    if (head1->data < head2->data) {
        fh = head1; ft = head1; head1 = head1->next;
    }
    else {
        fh = head2; ft = head2; head2 = head2->next;
    }

    while (head1 && head2) {
        if (head1->data < head2->data) {ft->next = head1; head1 = head1->next; ft = ft->next;}
        else {ft->next = head2; head2 = head2->next; ft = ft->next;}
    }

    if (head1) {ft->next = head1;}
    else {ft->next = head2;}
    return fh;
}

Node *mergeSort(Node *head) {
    if (head == NULL || head->next == NULL) {return head;}

    Node* mid = midPoint(head);
    Node* node2 = mid->next;
    mid->next = NULL;

    Node* firstPart = mergeSort(head);
    Node* secondPart = mergeSort(node2);

    return mergeTwoSortedLinkedLists(firstPart, secondPart);
}

Node *skipMdeleteN(Node *head, int M, int N) {
    if (head == NULL) {return NULL;}
    if (M == 0) {return NULL;}
    if (N == 0) {return head;}

    Node* t1 = head;
    while (t1 != NULL) {
        int c1 = 1, c2 = 1;

        while (c1 != M) {c1++; t1 = t1->next;}
        Node* t2 = t1->next;
        while (t2 != NULL && c2 != N) {c2++; t2 = t2->next;}

        if (t2) {
            t1->next = t2->next;
            t1 = t1->next;
        }
        else {
            t1->next = NULL;
            t1 = t1->next;
        }
    }
    return head;
}

// Node *swapNodes(Node *head, int i, int j){
//     if(head==NULL || head->next==NULL || i==j){return head;}

//     Node* p1=NULL;
//     Node* c1=NULL;
//     Node* p2=NULL;
//     Node* c2=NULL;


// }

Node* reverseLinkedList(Node* head) {
    if (head == NULL || head->next == NULL) {return head;}

    Node* revNode = reverseLinkedList(head->next);
    Node* temp = head->next;
    temp->next = head;
    head->next = NULL;
    return revNode;
}

Node *kReverse(Node *head, int k) {
    if (head == NULL || k == 0 || head->next == NULL) {return head;}

    Node* temp = head;
    Node* h1 = head;
    Node* t1 = head;

    int count = 1;
    while (count != k && temp->next) {
        count++;
        temp = temp->next;
    }

    t1 = temp;
    Node *nextNode = temp->next;
    temp->next = NULL;
    Node* revNode = reverseLinkedList(h1);
    Node* h2 = kReverse(nextNode, k);
    h1->next = h2;
    return t1;
}

Node* bubbleSort(Node *head) {
    if (head == NULL || head->next == NULL) {return head;}

    Node* temp = head;

}

template<typename T>
class StackUsingArray {
private:
    T* data;
    int nextIndex;
    int capacity;

public:
    StackUsingArray() {data = new T[5]; nextIndex = 0; capacity = 0;}

    int size() {return nextIndex;}

    bool isEmpty() {return size == 0;}

    T top() {
        if (isEmpty()) {cout << "Stack is Empty"; return 0;}
        return data[nextIndex - 1];
    }

    T pop() {
        if (isEmpty()) {cout << "Stack is Empty"; return 0;}
        nextIndex--;
        return data[nextIndex];
    }

    void push(T element) {
        if (nextIndex == capacity) {
            newSize = 2 * nextIndex;
            T* newData = new T[newSize];
            for (int i = 0; i < nextIndex; i++) {newData[i] = data[i];}
            capacity *= 2;
            delete[] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
};

template<typename T>
class StackUsingLL {
private:
    Node<T> *head;
    int size;

public:
    StackUsingLL() {head = NULL; size = 0;}

    int getSize() {return size;}

    bool isEmpty() {return size == 0;}

    void push(T element) {
        Node<T> *newNode = new Node<T>(element);
        size++;
        if (head == NULL) {head = newNode;}
        else {newNode->next = head; head = newNode;}
    }

    T pop() {
        if (head == NULL) {return 0;}
        T ans = head->data;
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        size--; return ans;
    }

    T top() {
        if (head == NULL) {return -1;}
        return head->data;
    }
};

bool isBalanced(string expression) {
    stack<char> s; int i = 0;
    while (i < expression.length()) {
        if (expression[i] == '(') {s.push('('); i++;}
        else if (expression[i] == ')') {s.pop(); i++;}
        else {i++;}
    }
    return s.empty();
}

template<typename T>
class QueueUsingArray {
private:
    T* data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    QueueUsingArray(int s) {
        data = new T[s];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = s;
    }

    bool isEmpty() {return size == 0;}

    int getSize() {return size;}

    void enqueue(T element) {
        if (size = capacity) {
            cout << "Queue is full" << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if (firstIndex == -1) {firstIndex++;}
        size++;
    }

    T dequeue() {
        if (isEmpty) {cout << "Queue is Empty" << endl; return 0;}
        T ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        if (size == 0) {firstIndex = -1; nextIndex = 0;}
        return ans;
    }

    T front() {
        if (isEmpty) {cout << "Queue is Empty" << endl; return 0;}
        return data[firstIndex];
    }
};

template<typename T>
class QueueUsingLL {
private:
    Node<T>* head;
    Node<T>* tail;
    int size;

public:
    QueueUsingLL() {head = tail = NULL; size = 0;}

    int getSize() {return size;}

    bool isEmpty() {return size == 0;}

    T front() {
        if (head == NULL) {return -1;}
        return head->data;
    }

    void enqueue(T element) {
        Node<T>* newNode = new Node<T>(element);
        size++;
        if (!tail) {head = tail = newNode; return;}
        tail->next = newNode; tail = tail->next;
    }

    T dequeue() {
        if (!head) {cout << "Queue is Empty" << endl; return -1;}
        Node* temp = head;
        T data = temp->data;
        head = head->next;
        delete temp;
        size--;
        return data;
    }
};

void reverseStack(stack<int> &input, stack<int> &extra) {
    if (input.size() == 0) {return;}
    int topElement = input.top();
    input.pop();
    reverseStack(input, extra);
    while (!(input.size() == 0)) {
        extra.push(input.top());
        input.pop();
    }
    input.push(topElement);
    while (!(extra.size() == 0)) {
        input.push(extra.top());
        extra.pop();
    }
}

void reverseQueue(queue<int> &input) {
    if (input.size() == 0) {return;}
    int frontElement = input.front();
    input.pop();
    reverseQueue(input);
    input.push(frontElement);
}

bool checkRedundantBrackets(string expression) {
    stack<char> s;
    int i = 0;
    while (i < expression.length()) {
        if (expression[i] != ')') {s.push(expression[i]);}
        else {
            int count = 0;
            while (s.top() != '(') {s.pop(); count++;}
            s.pop();
            if (count == 0 || count == 1) {return true;}
        }
        i++;
    }
    return false;
}

int* stockSpan(int *price, int size) {
    stack<int> s;
    int* arr = new int[size];
    int j = 0;
    arr[j++] = 1;
    s.push(0);
    for (int i = 1; i < size; i++) {
        while (!s.empty() && price[s.top()] < price[i]) {s.pop();}
        int span = (s.empty()) ? (i + 1) : (i - s.top());
        arr[j++] = span;
        s.push(i);
    }
    return arr;
}

//Trees
template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;
    TreeNode(T data) {
        this->data = data;
    }
    ~TreeNode() {
        for (int i = 0; i < root->children.size(); i++) {
            delete children[i];
        }
    }
};

void printTree(TreeNode<int>* root) {
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++) {cout << root->children[i]->data << ",";}
    cout << endl;
    for (int i = 0; i < root->children.size(); i++) {printTree(root->children[i]);}
}

TreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    int numOfChildren;
    cin >> numOfChildren;
    for (int i = 0; i < numOfChildren; i++) {
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (!pendingNodes.empty()) {
        TreeNode<int>* currTreeNode = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter the number of children of the rootData: ";
        int numOfChildren;
        cin >> numOfChildren;
        for (int i = 0; i < numOfChildren; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            currTreeNode->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printLevelWise(TreeNode<int>* root) {
    if (root == NULL) {return;}
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty()) {
        TreeNode<int>* currNode = pendingNodes.front();
        cout << currNode->data << ":";
        for (int i = 0; i < currNode->children.size(); i++) {
            cout << currNode->children[i]->data << " ";
            pendingNodes.push(currNode->children[i]);
        }
        cout << endl;
    }
}

int countNodes(TreeNode<int>* root) {
    if (root == NULL) {return 0;}
    int smallOutput = 0;
    for (int i = 0; i < root->children.size(); i++) {
        smallOutput += countNodes(root->children[i]);
    }
    return 1 + smallOutput;
}

int sumNodes(TreeNode<int>* root) {
    if (root == NULL) {return 0;}
    int smallOutput = 0;
    for (int i = 0; i < root->children.size(); i++) {
        smallOutput += sumNodes(root->children[i]);
    }
    return root->data + smallOutput;
}

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    if (root == NULL) {return NULL;}
    TreeNode<int>* maxNode = new TreeNode<int>(root->data);
    for (int i = 0; i < root->children.size(); i++) {
        TreeNode<int>* maxChildNode = maxDataNode(root->children[i]);
        if (maxChildNode->data > maxNode->data) {maxNode = maxChildNode;}
    }
    return maxNode;
}

int getHeight(TreeNode<int>* root) {
    if (root == NULL) {return 0;}
    int height = 0;
    for (int i = 0; i < root->children.size(); i++) {
        int smallHeight = getHeight(root->children[i]);
        if (height < smallHeight) {height = smallHeight;}
    }
    return 1 + height;
}

int countLeafNodes(TreeNode<int>* root) {
    if (root == NULL) {return 0;}
    if (root->children.size() == 0) {return 1;}
    int NumOfLeaf = 0;
    for (int i = 0; i < root->children.size(); i++) {
        NumOfLeaf += countLeafNodes(root->children[i]);
    }
    return NumOfLeaf;
}

void PostOrder(TreeNode<int>* root) {
    if (root == NULL) {return;}
    for (int i = 0; i < root->children.size(); i++) {
        PostOrder(root->children[i]);
    }
    cout << root->data << " ";
}

void PreOrder(TreeNode<int>* root) {
    if (root == NULL) {return;}
    cout << root->data << " ";
    for (int i = 0; i < root->children.size(); i++) {
        PreOrder(root->children[i]);
    }
}

bool isPresent(TreeNode<int>* root, int x) {
    if (root == NULL) {return false;}
    if (root->data == x) {return true;}
    bool output = false;
    for (int i = 0; i < root->children.size(); i++) {
        output = isPresent(root->children[i], x);
        if (output) {break;}
    }
    return output;
}

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    if (root == NULL) {return NULL;}
    TreeNode<int>* maxNode = root;
    int rootSum = root->data;
    for (int i = 0; i < root->children.size(); i++) {
        rootSum += root->children[i]->data;
    }

    for (int i = 0; i < root->children.size(); i++) {
        TreeNode<int>* childSumNode = maxSumNode(root->children[i]);
        int childSum = childSumNode->data;
        for (int i = 0; i < childSumNode->children.size(); i++) {
            childSum += childSumNode->children[i]->data;
        }
        if (rootSum < childSum) {maxNode = childSumNode; rootSum = childSum;}
    }
    return maxNode;
}

bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    if (root1 == NULL && root2 == NULL) {return true;}
    if ((root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL)) {return false;}
    if ((root1->data != root2->data) || (root1->children.size() != root2->children.size())) {return false;}

    for (int i = 0; i < root1->children.size(); i++) {
        if (!areIdentical(root1->children[i], root2->children[i])) {return false;}
    }
    return true;
}

TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    if (root == NULL) {return NULL;}
    TreeNode<int>* ans = NULL;
    if (root->data > x) {ans = root;}
    for (int i = 0; i < root->children.size(); i++) {
        TreeNode<int>* smallOutput = getNextLargerElement(root->children[i], x);
        if (smallOutput && !ans) {ans = smallOutput;}
        else if (smallOutput && ans) {if (ans->data > smallOutput->data) {ans = smallOutput;}}
        else {continue;}
    }
    return ans;
}

int floorAns = INT_MIN;
int ceilAns = INT_MAX;
void ceilAndfloor(TreeNode<int>* root, int x) {
    if (root->data > x) {
        if (root->data < ceilAns) {ceilAns = root->data;}
    }
    if (root->data < x) {
        if (root->data > floorAns) {floorAns = root->data;}
    }
    for (int i = 0; i < root->children.size(); i++) {
        ceilAndfloor(root->children[i], x);
    }
}

int kthLargest(TreeNode<int>* root, int k) {
    int factor = INT_MAX;
    for (int i = 0; i < k; i++) {
        ceilAndfloor(root, factor);
        factor = floorAns;
        floorAns = INT_MIN;
    }
    return factor;
}

template <typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {this->data = data; left = NULL; right = NULL;}
    ~BinaryTreeNode() {delete left; delete right;}
};

template <typename T>
BinaryTreeNode<int>* takeInputBinaryTree() {
    T rootData;
    cin >> rootData;
    if (rootData == -1) {return NULL;}
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

    BinaryTreeNode<int>* rootLeft = takeInputBinaryTree();
    BinaryTreeNode<int>* rootRight = takeInputBinaryTree();
    root->left = rootLeft;
    root->right = rootRight;
    return root;
}

void printTree(BinaryTreeNode<int>* root) {
    if (root == NULL) {return;}
    cout << root->data << " ";
    if (root->left != NULL) {
        cout << "L:" << root->left->data;
    }
    if (root->right != NULL) {
        cout << "R:" << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}

BinaryTreeNode<int>* takeInputLevelWiseBT() {
    queue<BinaryTreeNode<int>*> q;
    int rootData; cin >> rootData;
    if (rootData == -1) {return NULL;}
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* current = q.front();
        q.pop();
        int leftChildData, rightChildData;
        cin >> leftChildData >> rightChildData;
        if (leftChildData != -1) {
            BinaryTreeNode<int>* leftChild = new BinaryTreeNode<int>(leftChildData);
            root->left = leftChild;
            q.push(leftChild);
        }
        if (rightChildData != -1) {
            BinaryTreeNode<int>* rightChild = new BinaryTreeNode<int>(rightChildData);
            root->right = rightChild;
            q.push(rightChild);
        }
    }
    return root;
}

void printTreeLevelWise(BinaryTreeNode<int>* root) {
    if (root == NULL) {return;}
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* curr = q.front();
        q.pop();
        cout << curr->data << ":";
        if (curr->left) {
            q.push(curr->left);
            cout << curr->left->data << " ";
        }
        if (curr->right) {
            q.push(curr->right);
            cout << curr->right->data << " ";
        }
    }
}

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if (root == NULL) {return false;}
    if (root->data == x) {return true;}
    return isNodePresent(root->left, x) || isNodePresent(root->right, x);
}

int height(BinaryTreeNode<int>* root) {
    if (root == NULL) {return 0;}
    return 1 + max(height(root->left), height(root->right));
}

void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    if (root == NULL) return;
    BinaryTreeNode<int>* t = root->left;
    root->left = root->right;
    root->right = t;
    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right);
}

BinaryTreeNode<int> *helperCT(int *pre, int *in, int preS, int preE, int inS, int inE) {
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(pre[preS]);
    int lInS, lInE, lPreS, lPreE, rInS, rInE, rPreS, rPreE;
    int i = 0;
    while (in[i] != root->data) {i++;}
    int rootIndex = i;

    lInS = inS;
    lInE = rootIndex - 1;
    lPreS = preS + 1;
    lPreE = lInE - lInS + lPreS;
    rInS = rootIndex + 1;
    rInE = inE;
    rPreS = lPreE + 1;
    rPreE = preE;

    if (!(lPreS > lPreE || lInS > lInE)) {
        root->left = helperCT(pre, in, lPreS, lPreE, lInS, lInE);
    }
    if (!(rPreS > rPreE || rInS > rInE)) {
        root->right = helperCT(pre, in, rPreS, rPreE, rInS, rInE);
    }
    return root;
}

BinaryTreeNode<int> *buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    int preS = 0, preE = preLength - 1, inS = 0, inE = inLength - 1;
    return helperCT(preorder, inorder, preS, preE, inS, inE);
}

int diameter(BinaryTreeNode<int>* root) {
    if (root == NULL) {return 0;}
    int op1 = height(root->left) + height(root->right);
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);
    return max(op1, max(op2, op3));
}

//pair first is height and second is the diameter
pair<int, int> diameterBetter(BinaryTreeNode<int>* root) {
    if (root == NULL) {return {0, 0};}
    pair<int,int> leftSmallOutput = diameterBetter(root->left);
    pair<int,int> rightSmallOutput = diameterBetter(root->right);
    pair<int,int> res;
    res.first = 1 + max(leftSmallOutput.first, rightSmallOutput.first);
    res.second = max(leftSmallOutput.first + rightSmallOutput.first + 1, max(leftSmallOutput.second, rightSmallOutput.second));
    return res;
}

int diameter2(BinaryTreeNode<int>* root) {
    if (root == NULL) {return 0;}
    return diameterBetter(root).second;
}

bool isBalanced(BinaryTreeNode<int> *root) {
    if (root == NULL) {return true;}
    bool leftSmallOutput = isBalanced(root->left);
    bool rightSmallOutput = isBalanced(root->right);
    int smallOutput = true;
    if (height(root->left) != height(root->right)) {smallOutput = false;}
    return leftSmallOutput & rightSmallOutput & smallOutput;
}

void printLevelWise(BinaryTreeNode<int> *root) {
    if (root == NULL) {return;}
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int>* curr = q.front();
        q.pop();
        cout << curr->data << " ";

        if (curr->left) {q.push(curr->left);}
        if (curr->right) {q.push(curr->right);}

        if (q.front() == NULL) {
            cout << endl;
            q.pop();
            if (q.size() > 0) {q.push(NULL);}
        }
    }
}

void zigZagOrder(BinaryTreeNode<int> *root) {
    if (root == NULL) {return;}
    stack<BinaryTreeNode<int>*> lr;
    stack<BinaryTreeNode<int>*> rl;
    lr.push(root);
    while (!lr.empty() || !rl.empty()) {
        while (!lr.empty()) {
            BinaryTreeNode<int>* front = lr.top();
            lr.pop();
            cout << front->data << " ";
            if (front->left) rl.push(front->left);
            if (front->right) rl.push(front->right);
        }
        if (lr.empty()) cout << endl;
        while (!rl.empty()) {
            BinaryTreeNode<int>* front = rl.top();
            rl.pop();
            cout << front->data << " ";
            if (front->right) rl.push(front->right);
            if (front->left) rl.push(front->left);
        }
        if (rl.empty()) cout << endl;
    }
}

bool searchInBST(BinaryTreeNode<int> *root , int k) {
    if (root == NULL) return false;
    if (root->data == k) return true;
    if (root->data > k) {return searchInBST(root->left, k);}
    else {return searchInBST(root->right, k);}
}

int maximum(BinaryTreeNode<int>* root) {
    if (root == NULL) return INT_MIN;
    return max(root->data, max(maximum(root->left), maximum(root->right)));
}

int minimum(BinaryTreeNode<int>* root) {
    if (root == NULL) return INT_MAX;
    return min(root->data, min(minimum(root->left), minimum(root->right)));
}

bool isBST1(BinaryTreeNode<int> *root) {
    if (root == NULL) {return true;}
    int leftMax = maximum(root->left);
    int rightMin = minimum(root->right);
    return (root->data > leftMax) && (root->data < rightMin) && (isBST1(root->left)) && (isBST1(root->right));
}

class Custom {
public:
    bool isBST;
    int maximum;
    int minimum;
};

Custom isBST2_helper(BinaryTreeNode<int>* root) {
    if (root == NULL) {return {true, INT_MIN, INT_MAX};}
    Custom leftOutput = isBST2_helper(root->left);
    Custom rightOutput = isBST2_helper(root->right);
    Custom ans;
    ans.isBST = (root->data > leftOutput.maximum) && (root->data < rightOutput.minimum) && (isBST2_helper(root->left).isBST) && (isBST2_helper(root->right).isBST);
    ans.maximum = max(root->data, max(leftOutput.maximum, rightOutput.maximum));
    ans.minimum = min(root->data, min(leftOutput.minimum, rightOutput.minimum));
    return ans;
}

bool iBST2(BinaryTreeNode<int>* root) {
    if (root == NULL) return true;
    return isBST2_helper(root).isBST;
}

bool isBST3(BinaryTreeNode<int>* root, int maximum = INT_MAX, int minimum = INT_MIN) {
    if (root == NULL) return true;
    if (root->data > maximum || root->data < minimum) return false;
    bool isLeftOk = isBST3(root->left, root->data - 1, minimum);
    bool isRightOk = isBST3(root->right, maximum, root->data);
    return isLeftOk && isRightOk;
}

BinaryTreeNode<int>* helperBST(int *input, int si, int ei) {
    if (si > ei) return NULL;
    int mid = si + (ei - si) / 2;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(input[mid]);

    BinaryTreeNode<int>* leftChild = helperBST(input, si, mid - 1);
    BinaryTreeNode<int>* rightChild = helperBST(input, mid + 1, ei);
    root->left = leftChild;
    root->right = rightChild;
    return root;
}

BinaryTreeNode<int>* constructTree(int *input, int n) {
    return helperBST(input, 0, n - 1);
}

class LL {
public:
    Node* head;
    Node* tail;

    LL() {head = NULL; tail = NULL;}
    LL(Node* head, Node* tail) {this->head = head; this->tail = tail;}
};

LL helper(BinaryTreeNode<int>* root) {
    if (!root) {LL ans; return ans;}

    LL leftAns = helper(root->left);
    LL rightAns = helper(root->right);
    Node* rootLL = new Node(root->data);

    if (!leftAns.head) {
        if (!rightAns.head) {LL ans(rootLL, rootLL); return ans;}
        else {rootLL->next = rightAns.head; LL ans(rootLL, rightAns.tail); return ans;}
    }
    else {
        if (!rightAns.head) {leftAns.tail = rootLL; LL ans(leftAns.head, rootLL); return ans;}
        else {leftAns.tail->next = rootLL; rootLL->next = rightAns.head; LL ans(leftAns.head, rightAns.tail); return ans;}
    }
}

Node* constructLinkedList(BinaryTreeNode<int>* root) {
    if (!root) return {NULL};
    return helper(root).head;
}

vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
    if (!root) return NULL;
    if (root->data == data) {
        vector<int>* output = new vector<int>();
        output->push_back(root->data);
        return output;
    }

    if (root->data > data) {
        vector<int>* leftAns = getPath(root->left, data);
        if (leftAns) {leftAns->push_back(root->data); return leftAns;}
    }

    if (root->data < data) {
        vector<int>* rightAns = getPath(root->right, data);
        if (rightAns) {rightAns->push_back(root->data); return rightAns;}
        else {return NULL;}
    }
}

class BST {
    BinaryTreeNode<int>* root;

public:
    BST() {root == NULL;}
    ~BST() {delete root;}

private:
    bool hasData(int data, BinaryTreeNode<int>* root) {
        if (!root) return NULL;
        if (root->data == data) {return true;}
        else if (root->data > data) {return hasData(data, root->left);}
        else {return hasData(data, root->right);}
    }

    BinaryTreeNode<int>* insertData(int data, BinaryTreeNode<int>* root) {
        if (!root) {
            BinaryTreeNode<int>* sm = new BinaryTreeNode<int>(data);
            return sm;
        }
        if (root->data < data) {root->right = insertData(data, root->right);}
        else {root->left = insertData(data, root->left);}
    }

    //Iterative Version
    // TreeNode* insertIntoBST(TreeNode* root, int val) {
    //     if(!root){return new TreeNode(val);}

    //     TreeNode* curr=root;
    //     while(root){
    //         if(curr->val<=val){
    //             if(curr->right) curr=curr->right;
    //             else{
    //                 curr->right=new TreeNode(val);break;
    //             }
    //         }
    //         else{
    //             if(curr->left) curr=curr->left;
    //             else{
    //                 curr->left=new TreeNode(val);break;
    //             }
    //         }
    //     }
    //     return root;
    // }

    void printBST(BinaryTreeNode<int>* root) {
        if (!root) return;
        cout << root->data << " ";
        printBST(root->left);
        printBST(root->right);
    }

    BinaryTreeNode<int>* deleteDataBST(int data, BinaryTreeNode<int>* root) {
        if (!root) return root;
        if (root->data > data) {root->left = deleteDataBST(data, root->left); return root;}
        else if (root->data < data) {root->right = deleteDataBST(data, root->right); return root;}
        else {
            if (!root->left && !root->right) {delete root; return NULL;}
            else if (!root->left) {
                BinaryTreeNode<int>* rightAns = root->right;
                root->right = NULL;
                delete root;
                return rightAns;
            }
            else if (!root->right) {
                BinaryTreeNode<int>* leftAns = root->left;
                root->left = NULL;
                delete root;
                return leftAns;
            }
            else {
                BinaryTreeNode<int>* minNode = root->right;
                while (minNode->left) minNode = minNode->left;
                int rightMin = minNode->data;
                root->data = rightMin;
                root->right = deleteDataBST(rightMin, root->right);
                return root;
            }
        }
    }

public:
    void remove(int val) {
        BinaryTreeNode<int>* ans = deleteDataBST(val, root);
    }

    void print() {
        printBST(root);
    }

    void insert(int data) {
        BinaryTreeNode<int>* ans = insertData(data, root);
    }

    bool search(int data) {
        return hasData(data, root);
    }
};

void insertDuplicateNode(BinaryTreeNode<int> *root) {
    if (!root) return;
    BinaryTreeNode<int>* temp = new BinaryTreeNode<int>(root->data);
    BinaryTreeNode<int>* leftSide = root->left;
    root->left = temp;
    temp->left = leftSide;
    insertDuplicateNode(root->left);
    insertDuplicateNode(root->right);
}

bool findNode(int data, BinaryTreeNode<int>* root) {
    if (!root) return false;
    if (root->data == data) {root->data = INT_MIN; return true;}
    bool leftOutput = findNode(data, root->left);
    bool rightOutput = findNode(data, root->right);
    return (leftOutput || rightOutput);
}

void helperPairSumBST(BinaryTreeNode<int>* curr, BinaryTreeNode<int>* root, int sum) {
    if (!curr || !root) return;
    if (curr->data != INT_MIN) {
        if (findNode(sum - curr->data, root)) {cout << curr->data << " " << sum - curr->data << endl;}
    }
    helperPairSumBST(curr->left, root, sum);
    helperPairSumBST(curr->right, root, sum);
}

void pairSumbst(BinaryTreeNode<int>* root, int sum) {
    if (!root) return;
    helperPairSumBST(root, root, sum);
}

int LCAHelper(BinaryTreeNode<int>* root, int a, int b) {
    if (!root) return NULL;
    if (root->data == a || root->data == b) return root->data;

    int leftLCA = LCAHelper(root->left, a, b);
    int rightLCA = LCAHelper(root->right, a, b);
    if (leftLCA && rightLCA) return root->data;
    else if (leftLCA) return leftLCA;
    else if (rightLCA) return rightLCA;
    return -1;
}

int getLCA(BinaryTreeNode <int>* root , int a, int b) {
    if (!root) return -1;
    return LCAHelper(root, a, b);
}

int LCAHelperBST(BinaryTreeNode<int>* root, int a, int b) {
    if (!root) return NULL;
    if (root->data == a || root->data == b) return root->data;

    if (root->data > a && root->data > b) return LCAHelperBST(root->left, a, b);
    else if (root->data < a && root->data < b) return LCAHelperBST(root->right, a, b);

    int leftLCA = LCAHelperBST(root->left, a, b);
    int rightLCA = LCAHelperBST(root->right, a, b);
    if (leftLCA && rightLCA) return root->data;
    else if (leftLCA) return leftLCA;
    else if (rightLCA) return rightLCA;
    return -1;
}

int getLCA(BinaryTreeNode <int>* root , int a, int b) {
    if (!root) return -1;
    return LCAHelperBST(root, a, b);
}

//Method1
int largestBSTSubtree(BinaryTreeNode<int> *root) {
    if (!root) return 0;
    if (isBST3(root)) return height(root);
    else {
        int leftAns = largestBSTSubtree(root->left);
        int rightAns = largestBSTSubtree(root->right);
        return max(leftAns, rightAns);
    }
}

//Method2
class custom {
public:
    int minimum; int maximum; bool isBST; int height;
};

custom largestBST(BinaryTreeNode<int>* root) {
    if (!root) return {INT_MAX, INT_MIN, true, 0};
    custom leftAns = largestBST(root->left);
    custom rightAns = largestBST(root->right);

    custom ans;
    ans.maximum = max(root->data, max(leftAns.maximum, rightAns.maximum));
    ans.minimum = min(root->data, min(leftAns.minimum, rightAns.minimum));
    if (leftAns.isBST && rightAns.isBST) {
        if (root->data > leftAns.maximum && root->data < rightAns.minimum) {
            ans.height = 1 + max(leftAns.height, rightAns.height);
            ans.isBST = true;
        }
        else {
            ans.height = max(leftAns.height, rightAns.height);
            ans.isBST = false;
        }
    }
    else {
        ans.height = max(leftAns.height, rightAns.height);
        ans.isBST = false;
    }
    return ans;
}

static int sum = 0;
void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
    if (!root) return;
    replaceWithLargerNodesSum(root->right);
    int temp = root->data;
    root->data += sum;
    sum += temp;
    replaceWithLargerNodesSum(root->left);
}

void helperPathSum(BinaryTreeNode<int>* root, int k, string output = "", int tillSum = 0) {
    if (!root) return;
    string temp = to_string(root->data) + " ";
    output += temp;
    tillSum += (root->data);

    helperPathSum(root->left, k, output, tillSum);
    helperPathSum(root->right, k, output, tillSum);

    if (tillSum == k && !root->left && !root->right) {cout << output << endl;}
}

void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
    helperPathSum(root, k);
}

//Priority Queues
class MinPriorityQueue {
    vector<int> pq;

public:
    MinPriorityQueue() {}

    bool isEmpty() {return pq.size() == 0;}

    int getSize() {return pq.size();}

    int getMin() {return (pq.empty() ? -1 : pq[0]);}

    void insert(int ele) {
        pq.push_back(ele);

        int childIndex = pq.size() - 1;
        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;
            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else break;
            childIndex = parentIndex;
        }
    }

    int remove() {
        if (pq.empty()) return -1;
        int ans = pq[pq.size() - 1];
        pq[0] = ans;
        pq.pop_back();

        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;

        while (leftChildIndex < pq.size()) {
            int minIndex = parentIndex;
            if (pq[leftChildIndex] < pq[parentIndex]) minIndex = parentIndex;
            if (rightChildIndex, pq.size() && pq[rightChildIndex] < pq[parentIndex]) minIndex = rightChildIndex;

            if (minIndex == parentIndex) break;

            int temp = pq[parentIndex];
            pq[parentIndex] - pq[minIndex];
            pq[minIndex] = temp;

            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }
        return ans;
    }
};



class MaxPriorityQueue {
    vector<int> pq;

public:
    MaxPriorityQueue() {}

    int getSize() {return pq.size();}

    bool isEmpty() {return pq.size() == 0;}

    int getMax() {return ( pq.empty() ? -1 : pq[0] );}

    void insert(int ele) {
        pq.push_back(ele);
        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;
            if (pq[childIndex] > pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else break;
            childIndex = parentIndex;
        }
    }

    int delete() {
        if (pq.empty()) return -1;
        int ans = pq[pq.size() - 1];
        pq[0] = ans;
        pq.pop_back();

        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;

        while (leftChildIndex < pq.size()) {
            int maxIndex = parentIndex;
            if (pq[leftChildIndex] > pq[parentIndex]) minIndex = parentIndex;
            if (rightChildIndex < pq.size() && pq[rightChildIndex] > pq[parentIndex]) maxIndex = rightChildIndex;

            if (maxIndex == parentIndex) break;

            int temp = pq[parentIndex];
            pq[parentIndex] - pq[maxIndex];
            pq[maxIndex] = temp;

            parentIndex = maxIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }
        return ans;
    }
};





void inplaceHeapSort(int input[], int n) {

    //Build the heap first in same input array
    for (int i = 1; i < n; i++) {
        int childIndex = i;
        int parentIndex = (childIndex - 1) / 2;

        //Up Heapify the heap
        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;
            if (input[childIndex] > input[parentIndex]) {
                int temp = input[childIndex];
                input[childIndex] = input[parentIndex];
                input[parentIndex] = temp;
            }
            else break;
            childIndex = parentIndex;
        }

    }

    //Remove elements
    int size = n;
    while (size > 1) {
        int temp = input[0];
        input[0] = input[size - 1];
        input[size - 1] = temp;
        size--;

        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;

        while (leftChildIndex < size) {
            int minIndex = parentIndex;
            if (input[leftChildIndex] > input[parentIndex]) minIndex = parentIndex;
            if (rightChildIndex < size && input[rightChildIndex] > input[parentIndex]) minIndex = rightChildIndex;

            if (minIndex == parentIndex) break;

            int temp = input[parentIndex];
            input[parentIndex] - input[minIndex];
            input[minIndex] = temp;

            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }
    }
}

void kSortedArray(int input[], int n, int k) {
    priority_queue<int> pq;
    for (int i = 0; i < k; i++) {
        pq.push(input[i]);
    }

    int j = 0;
    for (int i = k; i < n; i++) {
        input[j++] = pq.top();
        pq.pop();
        pq.push(input[i]);
    }

    while (!pq.empty()) {
        input[j++] = pq.top();
        pq.pop();
    }
}

vector<int> mergeKArrays(vector<vector<int>> arr, int K) {
    //code here

    vector<int> res;
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;


    for (int i = 0 ; i < arr.size() ; i++) {
        pq.push({arr[i][0], {i, 0}});
    }

    while (!pq.empty()) {
        auto top = pq.top();
        pq.pop();

        int ans = top.first;
        res.push_back(ans);

        pair<int, int> newIndex = {top.second.first , top.second.second + 1} ;
        if (newIndex.second != input[newIndex.first]->size()) {
            pq.push({input[newIndex.first][newIndex.second] , newIndex});
        }
    }

    return res;
}

int main() {
    int a[] = {9, 8, 10, 6};
    bubbleSort(a, 5);
    selectionSort(a, 5);
    quickSort(a, 4);
    for (int i = 0; i < 4; i++) {
        cout << a[i] << " ";
    }
    InsertionSort(a, 5);
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << firstIndex(a, 5, 6) << endl;
    cout << firstIndex(a, 5, 10) << endl;
    cout << lastIndex(a, 5, 8) << endl;
    cout << countZeroes(1005089) << endl;
    cout << geometricSum(3) << endl;
    char str[] = "xpix";
    replacePiHelper(str, 0);
    cout << str << endl;
    towerOfHanoi(2, 'a', 'b', 'c');
    string output[10000];
    cout << keypad(23, output) << endl;
    cout << endl;
}