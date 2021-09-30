#include <stdio.h>

char *insults[3] = {
  "You're a stupid pile of sh*t, were you born out of your mom's butthole?", 
  "You're so stupid, how did you even get to the store to buy a computer?"
}

char *errors[3] = {
  "Problem with your brain",
  "You are so ugly the computer caught on fire"
}

int main() {
  printf("Error: %s\n", errors[1]);
  printf("Location: between chair and keyboard.\n");
  printf("%s\n", insults[1]);
  return 1;
}
