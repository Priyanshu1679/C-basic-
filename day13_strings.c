

//   Step 1 — String Basics


/* 
#include <stdio.h>
                                                        // string basic print 
int main() {
    char name[20] = "Priyanshu";

    printf("Name is: %s", name);

    return 0;
}
    */


// Step 2 — User Input for Strings

/*  


 #include <stdio.h>
                                                      //  user se intput leke print karna;
int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello %s", name);

    return 0;
}  
    */



   // Step 3 — String Length (Manual Logic)

/* 
#include <stdio.h>
                                                        //  string length find karna (manual logic)   
   int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    int length = 0;
    while (name[length] != '\0') {
        length++;
    }

    printf("Length of the name is: %d", length);

    return 0;                                                      
  }
  */

  // Step 4 — String Reverse (Interview Favorite)

  /*
  #include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int length = 0;

    while(str[length] != '\0') {
        length++;
    }

    printf("Reversed String: ");

    for(int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
  */

  
  //  Step 5 — String Compare (Without strcmp)
/* 
  #include <stdio.h>

int main() {
    char str1[] = "abc";
    char str2[] = "abc";

    int i = 0, flag = 1;

    while(str1[i] != '\0' || str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            flag = 0;
            break;
        }
        i++;
    }

    if(flag == 1)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");

    return 0;
}
  */