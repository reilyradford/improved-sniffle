/**
 * participants.c
 *   A simple C program to print the participants from the class.
 *   Intended as an example of updating code on GitHub.
 */

// +---------+---------------------------------------------------------
// | Headers |
// +---------+

#include <stdio.h>

// +------+------------------------------------------------------------
// | Main |
// +------+

int 
main (int argc, char *argv[])
{
  int i = 0;
  printf ("%02d: Jonathan Clark\n", ++i);
  printf ("%02d: Tracy Lewis-Williams\n", ++i);
  printf ("%02d: Zachary Joswick\n", ++i);
  printf ("%02d: Michael Donaldson\n", ++i);
  printf ("%02d: Matthew Sluder\n", ++i);
  printf ("%02d: Nalani Story\n", i++);
  printf ("%02d: Chase Kuehn\n", i++);
  printf ("%02d: Kyle Van Sprewenburg\n", i++);
  printf ("%02d: Dalton Young\n", i++);
  printf ("%02d: Jamal Anderson\n",i++);
  printf ("%02d: Don Whitteker\n", i++);
  printf ("%02d: Justin Scyphers\n", i++);
  printf ("There are %i participants.\n", i);

  return 0;
} // main
