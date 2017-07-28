/* array.c  -- Operations on arrays
 *  */

#include <stdio.h>

int main(void) {
  /* ???
     D E F I N E   2   I N T E G E R   A R R A Y S   H E R E
     C A L L   T H E M   a    AND    b
     W I T H   1   D I M E N S I O N   A N D
     T H E   S A M E   N U M B E R   O F   E L E M E N T S
  */
  int a[1],b[1];
  int i;
  a[0]=2;
  b[0]=2;
  /* It is legal to use subscripts on arrays, both on the left and on
     the right hand side of assignments. */
  for(i=0;i<1;i++)
    a[i]=b[i];

  /* It is not legal to assign arrays, like in a=b; */

  /* The comparison of two distinct arrays with the same content
   results in FALSE. So below we print "They are not equal"
    */
  if(a[0]==b[0])
    printf("They are equal\n");
  else
    printf("They are not equal\n");

  /* The following comparison results in TRUE. */
  if(a==a)
    printf("Of course a is equal to a\n");
  else
    printf("No, a is not equal to a\n");
  /* The behavior of comparison is explained when we note that the
   comparison is a comparison of addresses, not contents.
   */
  /* We cannot print out an array as a single unit. We have to print out
   its elements one at a time.
   */
  for(i=0;i<1;i++)
    printf("a[%1d] = %3d\n", i, a[i]);

  return 0;
}






