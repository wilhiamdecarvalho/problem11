#include <iostream>

void reverseString(char* str) {
    // Find the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string in-place
    int start = 0;
    int end = length - 1;
    while (start < end) {
        // Swap characters at start and end indices
        str[start] = str[start] ^ str[end];
        str[end] = str[start] ^ str[end];
        str[start] = str[start] ^ str[end];

        // Move the indices towards the middle
        start++;
        end--;
    }
}

int main() {
    const int maxLength = 100;
    char str[maxLength];

    std::cout << "Enter a string: ";
    std::cin.getline(str, maxLength);

    reverseString(str);

    std::cout << "Reversed string: " << str << std::endl;

    return 0;
}
