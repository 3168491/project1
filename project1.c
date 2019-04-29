#include <stdio.h>
#include <stdlib.h>
#include <string.h>
      
int main(){
   int k; // the integer k represents the key (the shift in the aplhabet)
   int operation = 1; // used for the function
   int i;   // used as storage for each letter and as a counter
   char letter;  // message letter
   char alpha[26]; //array for each letter of the alphabet excluding lower case  
      
   printf ("Please Enter the String: \n");	// way to get the string
   gets (alpha);			// fucntion to read the input and store it as alph
   printf ("\nPlease Enter a Key: ");	//key for which the string will be encrypted/ decrypted
   scanf ("%d", &k);		// assingns input value as k - the key
   printf ("\n1 = Encrypt statement (Caesar Cipher)\n", operation);
   printf ("2 = Decrypt statement (Caesar Cipher)\n", operation);
   scanf ("%d", &operation);	// will scan input value then proceed with the switch statment

 
switch(operation){   // will need a switch statment as it will either need to be encrypted or decrypted
   case 1:
      operation == 1;   //will encrypt statment if user enters 1
        k = 26 - k; // assignment used to make the key the same as when its being decrpyted, will only apply to case 1 of switch nothing else
        for (i = 0; alpha[i] != '\0'; ++i){			// i initialsed at 0, rule - array not equal to a null value, with i increasing after loop has been completed
	      letter = alpha[i];
         	  if ((letter >= 'A') && (letter <= 'Z')){  //using stdlib hard codes the values for each letter into the code using ASCII std
         	      letter = letter + k;  // reassings the letter to the key shift letter

	            if (letter > 'Z'){   // 

		             letter = letter - 'Z' + 'A' - 1;   // moves the letter back into the range between A and Z

		}
	      alpha[i] = letter;  // once the letter is reassigned using the key, letter is then assigned to the i value for the array, then will move onto the next letter in the string looping over it until the entire message has been decoded
	    }
	}
      printf ("\nEncrpyted message is: %s", alpha);
      return 0;    
   case 2:
      operation == 2;   //will decrypt statment if 2 is entered
              for (i = 0; alpha[i] != '\0'; ++i){			// i initialsed at 0, rule - array not equal to a null value, with i increasing after loop has been completed
	      letter = alpha[i];
         	  if ((letter >= 'A') && (letter <= 'Z')){
         	      letter = letter + k;

	            if (letter > 'Z'){

		             letter = letter - 'Z' + 'A' - 1;

		}
	      alpha[i] = letter;
	    }
	}
      printf ("\nDecrpyted message is: %s", alpha);
      return 0;
      
    default:
      printf("error\n");   //will hapen if anything apart from 1 or 2 is entered
    
}
     return 0;
}
