/* { dg-do compile } */
/* { dg-options "" } */

struct t
{ /* { dg-message "note: Offset of packed bit-field 't::b' has changed in GCC 4.4" "" { target pcc_bitfield_type_matters } } */
  char a:4;
  char b:8 __attribute__ ((packed));
  char c:4;
};

int assrt[sizeof (struct t) == 2 ? 1 : -1];
