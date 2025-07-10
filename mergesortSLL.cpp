#include <iostream>
using namespace std;

// Definisi kelas Node untuk Linked List
class Node {
public:
    int data;
    Node* next;
    
    // Konstruktor
    Node(int val) : data(val), next(nullptr) {}
};

// Kelas Linked List
class LinkedList {
private:
    Node* head;

    // Temukan titik tengah list
    Node* getMiddle(Node* head) {
        if (!head) return head;
        
        Node* slow = head;
        Node* fast = head->next;
        
        while (fast) {
            fast = fast->next;
            if (fast) {
                slow = slow->next;
                fast = fast->next;
            }
        }
        
        return slow;
    }

    // Gabung dua list terurut
    Node* merge(Node* a, Node* b) {
        // Basis: jika salah satu list kosong
        if (!a) return b;
        if (!b) return a;
        
        Node* result = nullptr;
        
        // Pilih node dengan nilai terkecil
        if (a->data <= b->data) {
            result = a;
            result->next = merge(a->next, b);
        }
        else {
            result = b;
            result->next = merge(a, b->next);
        }
        
        return result;
    }

    // Merge Sort rekursif
    Node* mergeSort(Node* head) {
        // Basis: list kosong atau satu elemen
        if (!head || !head->next) 
            return head;
        
        // Temukan titik tengah
        Node* middle = getMiddle(head);
        Node* nextOfMiddle = middle->next;
        
        // Putuskan list
        middle->next = nullptr;
        
        // Rekursif sort
        Node* left = mergeSort(head);
        Node* right = mergeSort(nextOfMiddle);
        
        // Gabung kembali
        return merge(left, right);
    }

public:
    // Konstruktor
    LinkedList() : head(nullptr) {}

    // Destruktor untuk membersihkan memori
    ~LinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Tambah node di awal list
    void insert(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Lakukan sorting
    void sort() {
        head = mergeSort(head);
    }

    // Cetak list
    void print() const {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Fungsi tambahan: dapatkan panjang list
    int length() const {
        int count = 0;
        Node* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

// Fungsi utama
int main() {
    LinkedList list;
    
    // Masukkan beberapa angka
    list.insert(64);
    list.insert(34);
    list.insert(25);
    list.insert(12);
    list.insert(22);
    list.insert(11);
    list.insert(90);
    
    cout << "Panjang list: " << list.length() << endl;
    
    cout << "List sebelum diurutkan: ";
    list.print();
    
    // Lakukan sorting
    list.sort();
    
    cout << "List setelah diurutkan: ";
    list.print();
    
    return 0;
}