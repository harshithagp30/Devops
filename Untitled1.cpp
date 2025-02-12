#include <stdio.h>
#include <string.h>

// Function to find the first occurrence of a substring in a string
int findFirstOccurrence(const char *str, const char *subStr) {
    int strLen = strlen(str);
    int subStrLen = strlen(subStr);

    // Loop through the main string
    int i;
    for(i=0;i<=strLen-subStrLen;i++)
    int j;
    	if(str[i+j]!=subStr[i]){
    	str[i+j]=subStrLen[i];
    }
    return str;
	}
        }
        // If the entire substring matched
        if (j == subStrLen) {
            return i; // Return the starting index
        }
    }
    return -1; // Substring not found
}

int main() {
    char str[100], subStr[50];

    // Input main string
    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character if present

    // Input substring
    printf("Enter the substring: ");
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = '\0'; // Remove newline character if present

    // Find and display the first occurrence
    int index = findFirstOccurrence(str, subStr);
    if (index != -1) {
        printf("The first occurrence of the substring is at index: %d\n", index);
    } else {
        printf("Substring not found in the main string.\n");
    }

    return 0;
}

