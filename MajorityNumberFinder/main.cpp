#include <iostream>
#include <vector>
using namespace std;

int countOccurrences(vector<int>& A, int candidate, int left, int right) {
    int count = 0;
    for (int i = left; i <= right; i++) {
        if (A[i] == candidate) {
            count++;
        }
    }
    return count;
}

int findMajority(vector<int>& A, int left, int right) {
    if (left == right) {
        return A[left];
    }

    int mid = (left + right) / 2;

    int left_majority = findMajority(A, left, mid);
    int right_majority = findMajority(A, mid + 1, right);

    if (left_majority == right_majority) {
        return left_majority;
    }

    int left_count = countOccurrences(A, left_majority, left, mid);
    int right_count = countOccurrences(A, right_majority, mid + 1, right);

    if (left_count > (mid - left + 1) / 2) {
        return left_majority;
    }
    else if (right_count > (right - mid) / 2) {
        return right_majority;
    }
    else {
        return -1; // no majority
    }
}

int main() {
    cout<<" Enter the size of array: ";
    int n ; // Size of Array
    cin >> n ;

    vector<int> A;
    for (int i = 0 ; i < n ; i++){
        int element ;
        cin >> element ;
        A.push_back(element);

    }


    int majority = findMajority(A, 0, n - 1);

    if (majority == -1) {
        cout << "No majority element" << endl;
    }
    else {
        cout << "Majority element: " << majority << endl;
    }

    return 0;
}

